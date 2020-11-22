/*
cashier management app
uses cJson or ezxml library
1. Add Cashier.
2. Remove cashier.
3. Suspend cashier.
4. Traverse cashier.
5. Edit Cashier.

/*#include <stdio.h>
#include "ezxml.h"

int main()
{
ezxml_t cashier = ezxml_parse_file("Cashier Data.xml"), Workers, name;
const char *cName;
printf("Hello, welcome to the Cashier database Management System!");
    printf("what would you like to do?");
    printf("Enter 1 to Add Cashier");
    printf("Enter 2 to Remove Cashier");
    printf("Enter 3 to suspend Cashier");
    printf("Enter 4 to Add Cashier");
    printf("Enter 5 to Edit Cashier name");
int val;
while ( != 0)
{
    printf("what would you like to do?");

    switch val:
    case 1:

    case 2:
    case 3:
    case 4:
    case 5:
    case 6:

}
//void ezxml_open_tag(ezxml_root_t root, char *name, char **attr)// called when parser finds start of new tag
/*ezxml_t ezxml_get(ezxml_t xml, ...)
ezxml_t ezxml_add_child(ezxml_t xml, const char *name, size_t off)
ezxml_t ezxml_new(const char *name)
ezxml_t ezxml_set_attr(ezxml_t xml, const char *name, const char *value)
ezxml_t ezxml_parse_str(char *s, size_t len)

// inserts an existing tag into an ezxml structure
ezxml_t ezxml_insert(ezxml_t xml, ezxml_t dest, size_t off)

// removes a tag along with its subtags without freeing its memory
ezxml_t ezxml_cut(ezxml_t xml)S

// sets the character content for the given tag and returns the tag
ezxml_t ezxml_set_txt(ezxml_t xml, const char *txt)
}*/


/*
cashier management app
uses cJson or ezxml library
1. Add Cashier.
2. Remove cashier.
3. Suspend cashier.
4. Traverse cashier.
5. Edit Cashier.
*/
#include <stdio.h>
#include "ezxml.h"

/*
ezxml_t f1 = ezxml_parse_file("formula1.xml"), team, driver;
const char *teamname;

for (team = ezxml_child(f1, "team"); team; team = team->next) {
    teamname = ezxml_attr(team, "name");
    for (driver = ezxml_child(team, "driver"); driver; driver = driver->next) {
        printf("%s, %s: %s\n", ezxml_child(driver, "name")->txt, teamname,
               ezxml_child(driver, "points")->txt);
    }
}
ezxml_free(f1);*/


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
