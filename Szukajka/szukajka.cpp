#include "szukajka.h"
#include "ui_szukajka.h"

Szukajka::Szukajka(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Szukajka)
{
    ui->setupUi(this);
}

Szukajka::~Szukajka()
{
    delete ui;
}

