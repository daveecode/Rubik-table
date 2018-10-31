#ifndef TABLEWIDGET_H
#define TABLEWIDGET_H

#include <QWidget>
#include <QLayout>
#include <QPushButton>
#include <QLabel>
//#include <QRandomGenerator>
#include "mydialog.h"

class TableWidget : public QWidget

{
    Q_OBJECT

public:

    TableWidget(QWidget *parent = 0);

private:

    void setColor(QPushButton* button);
    void constructColors();
    int s;
    QPushButton *gameButton;
    QPushButton *exitButton;
    QVBoxLayout *btns;
    QVBoxLayout *main;
    QGridLayout *grid;
    QColor *red;
    QColor *blue;
    QColor *green;
    QColor *yellow;
    QColor *white;
    QColor *black;
    QLabel *_count;
    QStringList col;
    QVector <QPushButton*> buttons;
    QVector <QString> colors;
    MyDialog *_size;
};

#endif // TABLEWIDGET_H
