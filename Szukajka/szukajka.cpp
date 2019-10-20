#include "szukajka.h"
#include "ui_szukajka.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>



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


void Szukajka::on_Przycisk_clicked(){

    QString tekst= ui->Tekst->text();
    QFile file("D:/produkty.txt");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){ // metoda open w otwiera plik w trybie tylko do odczytu z zamianą znaków \r\n ma \n
        QTextStream in(&file);
        //const QString data(file.readAll());
        bool found = false;
        while(!in.atEnd()){
//            QMessageBox:: information(this,"fsdf","przeczytalem");
            QString current = in.readLine();
            if(current.compare(tekst) == 0) {
                found = true;
                break;
            }
        }
        file.close();
        if(found) {
            ui->label->setText("Mamy produkt!!!");
        } else {
            ui->label->setText("nie Mamy produktu!!!");
        }



    }
    else{
        QMessageBox:: information(this,"fsdf","nie działa");
    }

}
