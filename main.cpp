#include <QCoreApplication>

#include "dinermenu.h"
#include "waitress.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DinerMenu *dinerMenu = new DinerMenu();
    Waitress *waitress = new Waitress(dinerMenu);
    waitress->printMenu();

    return a.exec();
}
