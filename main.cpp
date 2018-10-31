#include "tablewidget.h"
#include "mydialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TableWidget *w;
    w = new TableWidget;

    w->show();



    return a.exec();
}
