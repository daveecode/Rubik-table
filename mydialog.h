#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QSpinBox>
#include <QLayout>

class MyDialog : public QDialog
{

public:
    MyDialog(QWidget *parent = 0);
    int size() const;

private:
    QPushButton *ok;
    QPushButton *cancel;
    QLabel *text;
    QSpinBox *_spinbox;
    QHBoxLayout *upper;
    QHBoxLayout *lower;
    QVBoxLayout *center;
};

#endif // MYDIALOG_H
