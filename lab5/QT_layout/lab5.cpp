#include "lab5.h"
#include "ui_lab5.h"

lab5::lab5(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lab5)
{
    ui->setupUi(this);
}

lab5::~lab5()
{
    delete ui;
}

