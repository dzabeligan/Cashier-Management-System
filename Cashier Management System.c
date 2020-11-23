
/*cashier management app
uses libexpat or ezxml library
1. Add Cashier.
2. Remove cashier.
3. Suspend cashier.//add another field to suspend
4. Traverse cashier.
5. Edit Cashier.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ezxml.h"


void addCashier (ezxml_t cashier);
void removeCashier (ezxml_t cashier);
void suspendCashier (void);
void traverseCashier (ezxml_t cashier);
void editCashier (void);
int main()
{
const char *cName;
ezxml_t cashier = ezxml_parse_file("Cashier Data.xml"), Workers, name;

printf("Hello, welcome to the Cashier database Management System!");
    printf("what would you like to do?\n");
    printf("Enter 1 to Add Cashier\n");
    printf("Enter 2 to Remove Cashier\n");
    printf("Enter 3 to suspend Cashier\n");
    printf("Enter 4 to Traverse Cashier\n");
    printf("Enter 5 to Edit Cashier name\n");
int val;
while ( val != 0)
{
    printf("Enter an option");

    switch (val)
    {
    case 1: addCashier(cashier);
    break;
    case 2: removeCashier(cashier);
    break;
    case 3: suspendCashier();
    break;
    case 4: traverseCashier(cashier);
    break;
    case 5: editCashier();
    break;
    default: printf("Incorrect option entered, please try again!");
    }
}
    ezxml_free(cashier);
}

void addCashier (ezxml_t cashier)
{
    char tagAppend;
    int offSize;
    printf("Enter the tag which you wish to append: \n");
    scanf("%c", &tagAppend);
    printf("Enter the offset value: \n");
    scanf("%c", &offSize);
    if (ezxml_child(cashier, &tagAppend) != NULL)
    {
        //ezxml_t *worker = ezxml_child(cashier, &tagAppend);
        ezxml_add_child(cashier, &tagAppend, offSize );
        //ezxml_insert(cashier, worker, offSize);
    }
    else
        printf("Tag not found.");
}

void removeCashier (ezxml_t cashier)
{
    char tagExtract;
    printf("Enter the tag which you wish to append: \n");
    scanf("%c", &tagExtract);
    if (ezxml_child(cashier, &tagExtract) != NULL)
    {
        ezxml_cut(cashier);
    }
    else
        printf("Tag not found.");
}

void traverseCashier (ezxml_t cashier)
{
    int wName, dPoint;
    printf("Enter the index of the worker");
    scanf("%d", &wName);
    printf("Enter the index of the worker's data point");
    scanf("%d", &dPoint);
    if (ezxml_get(cashier, "worker", dPoint, "info", wName, "name", wName, "Cashier_ID", -1) != NULL)
    {
        printf("The information of the worker is: %s\n", ezxml_get(cashier, "worker", dPoint, "info", wName, "name", wName, "Cashier_ID", -1)->txt);
    };
}

void editCashier(void)
{

}

void suspendCashier(void)
{

}

/*void createNewXML()
{
    char
    ezxml_t ezxml_new(const char *name);
}*/
