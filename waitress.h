#ifndef WAITRESS_H
#define WAITRESS_H

#include "dinermenu.h"

class Waitress {
private:
    DinerMenu *dinerMenu;
public:
    Waitress(DinerMenu*);
    void printMenu();
    void printMenu(Iterator *iterator);
    void printVegetarianMenu();
    bool isItemVegetarian(QString name);
    void printVegetarianMenu(Iterator *iterator);
    bool isVegetarian(QString name, Iterator *iterator);
};

#endif // WAITRESS_H
