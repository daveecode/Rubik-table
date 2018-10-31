#include "mydialog.h"

MyDialog::MyDialog(QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Méretezés");
    setModal(true);

    ok = new QPushButton("OK", this);
    cancel = new QPushButton("CANCEL", this);
    text = new QLabel("Add meg a színek számát", this);
    _spinbox = new QSpinBox;
    _spinbox->setValue(4);
    _spinbox->setMinimum(2);
    _spinbox->setMaximum(6);
    upper = new QHBoxLayout;
    upper->addWidget(text);
    upper->addWidget(_spinbox);
    lower = new QHBoxLayout;
    lower->addWidget(ok);
    lower->addWidget(cancel);
    center = new QVBoxLayout;
    center->addLayout(upper);
    center->addLayout(lower);

    setLayout(center);

    connect(ok, SIGNAL(clicked(bool)), this, SLOT(accept()));
    connect(cancel, SIGNAL(clicked(bool)), this, SLOT(reject()));
}

int MyDialog::size() const
{
    return _spinbox->value();
}
