
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
//void ezxml_open_tag(ezxml_root_t root, char *name, char **attr)// called when parser finds start of new tag
ezxml_t ezxml_get(ezxml_t xml, ...)
ezxml_t ezxml_add_child(ezxml_t xml, const char *name, size_t off)
ezxml_t ezxml_new(const char *name)
ezxml_t ezxml_set_attr(ezxml_t xml, const char *name, const char *value)
ezxml_t ezxml_parse_str(char *s, size_t len)

// inserts an existing tag into an ezxml structure
ezxml_t ezxml_insert(ezxml_t xml, ezxml_t dest, size_t off)

// removes a tag along with its subtags without freeing its memory
ezxml_t ezxml_cut(ezxml_t xml);

// sets the character content for the given tag and returns the tag
ezxml_t ezxml_set_txt(ezxml_t xml, const char *txt)
}

void addCashier (void)
{
    char tagAppend;
    printf("Enter the tag which you wish to append");
    scanf(%c, &tagAppend);
    if (ezxml_t ezxml_child(cashier, const char *tagAppend) != 0)
    {
        workers = ezxml_child(cashier, const char *tagAppend);
        ezxml_insert(cashier, Worker, size_t off);
    }
    else 
        printf("");
       
}

void removeCashier (void)
{
    char tagExtraxt;
    printf("Enter the tag which you wish to append");
    scanf(%c, &tagExtraxct);
    if (ezxml_child(cashier, const char *tagExtract) != 0)
    {
        workers = ezxml_child(cashier, const char *tagAppend);
        ezxml_cut(cashier);
    }
    ezxml_t ezxml_cut(ezxml_t xml);
}

void traverseCashier (void)
{
    char wName;
    printf("Enter the name of the worker");
    scanf(%c, &wName)
    title = ezxml_get(cashier, "worker", 0, "info", 0, "name", -1);
    
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
