
/*cashier management app
uses cJson or ezxml library
1. Add Cashier.
2. Remove cashier.
3. Suspend cashier.
4. Traverse cashier.
5. Edit Cashier.
*/

#include <stdio.h>
#include "ezxml.h"

void addCashier (void);
void removeCashier (void);
void suspendCashier (void);
void traverseCashier (void);
void editCashier (void);
int main()
{
ezxml_t cashier = ezxml_parse_file("Cashier Data.xml"), Workers, name;
const char *cName;

printf("Hello, welcome to the Cashier database Management System!");
    printf("what would you like to do?");
    printf("Enter 1 to Add Cashier");
    printf("Enter 2 to Remove Cashier");
    printf("Enter 3 to suspend Cashier");
    printf("Enter 4 to Traverse Cashier");
    printf("Enter 5 to Edit Cashier name");
int val;
while ( val != 0)
{
    printf("Enter an option");

    switch val:
    case 1: addCashier();
    break;
    case 2: removeCashier();
    break
    case 3: suspendCashier();
    break
    case 4: traverseCashier();
    break;
    case 5: editCashier();
    break;
    default: printf("Incorrect option entered, please try again!");
}
)

// sets the character content for the given tag and returns the tag
ezxml_t ezxml_set_txt(ezxml_t xml, const char *txt)
}

void addCashier (void)
{
    char tagAppend;
    printf("Enter the tag which you wish to append: \n");
    scanf(%c, &tagAppend);
    if (ezxml_child(cashier, &tagAppend) != 0)
    {
        name = tagAppend;
        workers = ezxml_child(cashier, &tagAppend);
        ezxml_add_child(cashier, "name", size_t )
        ezxml_insert(cashier, Worker, size_t off);
    }
    else 
        printf("");
       
}

void removeCashier (void)
{
    char tagExtraxt;
    printf("Enter the tag which you wish to append: \n");
    scanf(%c, &tagExtraxct);
    if (ezxml_child(cashier, "name") != 0)
    {
        workers = ezxml_child(cashier, &tagExtract);
        ezxml_cut(cashier);
    }
}

void traverseCashier (void)
{ 
    int wName, dPoint;
    printf("Enter the index of the worker");
    scanf(%d, &wName);
    printf("Enter the index of the worker's data point");
    scanf(%d, &dPoint);
    if (ezxml_get(cashier, "worker", dPoint, "info", wName, "name", wName, "Cashier_ID", -1) != NULL)
    {      
        printf("The information of the worker is: %s\n", ezxml_get(cashier, "worker", dPoint, "info", wName, "name", wName, "Cashier_ID", -1)->txt)
    };         
}
void editCashier(void)
{
    
}


//NB: This section is a test section!
#include <stdio.h>
#include "ezxml.h"

int main()
{
ezxml_t cName = ezxml_parse_file("Cashier Data.xml"), Cashier, info;
const char *workerName;

for (Cashier = ezxml_child(cName, "Cashier"); Cashier; Cashier = Cashier->next) {
    workerName = ezxml_attr(Cashier, "Category");
    for (info = ezxml_child(Cashier, "info"); info; info = info->next) {
        printf("%s, %s: %s\n", ezxml_child(info, "name")->txt, workerName,
               ezxml_child(Cashier, "Cashier_ID")->txt);
    }
}
ezxml_free(cName);
}
