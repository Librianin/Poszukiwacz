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

    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("D:/Programowanie/Projekt1/Produkty.db");
    if(!mydb.open())
        ui->label->setText("Failed");
    else
        ui->label->setText("Conected");
}

Szukajka::~Szukajka()
{
    delete ui;



}


void Szukajka::on_Przycisk_clicked(){

    QString tekst= ui->Tekst->text();
    QFile file("D:/produkty.txt");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){ // otwieram plik
        QTextStream in(&file);
        //const QString data(file.readAll());
        bool found = false;
        while(!in.atEnd()){  //przeszukuję w pętli
//            QMessageBox:: information(this,"fsdf","przeczytalem");
            QString current = in.readLine();  //linia po linii
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


void Szukajka::on_pushButton_clicked()
{
    Szukajka conn;
    QSqlQueryModel * modal=new QSqlQueryModel;

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);

    qry-> prepare("select nazwa from Tekstylia");

    qry->exec();
    modal->setQuery(*qry);
    ui->treeView->setModel(modal);

    conn.connClose();
    qDebug() <<(modal->rowCount());

}
