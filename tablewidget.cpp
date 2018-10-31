#include "tablewidget.h"
#include "ui_widget.h"

TableWidget::TableWidget(QWidget *parent) : QWidget(parent)

{

    setWindowTitle("Rubik tábla");
    setFixedSize(400, 600);

    gameButton = new QPushButton("Játék",this);
    exitButton = new QPushButton("Kilépés",this);

    btns = new QVBoxLayout;
    main = new QVBoxLayout;
    grid = new QGridLayout;

    _count = new QLabel("Lépések: ", this);

    col.append("red");
    col.append("blue");
    col.append("yellow");
    col.append("green");
    //col.append("white");
    //col.append("black");

    _size = new MyDialog;

    for(int i = 0; i < _size->size(); ++i) {

        for(int j = 0; j < _size->size(); ++j) {

            QPushButton *button = new QPushButton(this);
            grid->addWidget(button, i, j);
            buttons.append(button);
            button->setFixedSize(80, 80);
            setColor(button);
        }


    }

    btns->addWidget(gameButton);
    btns->addWidget(exitButton);
    btns->addWidget(_count);

    main->addLayout(btns);
    main->addLayout(grid);

    setLayout(main);

    connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(close()));
}

void TableWidget::setColor(QPushButton *button)
{

    s = qrand() % col.size();
    button->setStyleSheet("background: " + col[s]);


    colors.append(col[s]);


    if(colors.count(col[s]) >= _size->size()) {

        colors.removeAll(col[s]);
        col.removeAt(s);
    }

}

