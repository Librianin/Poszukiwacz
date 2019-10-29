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



    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    qry->prepare("select id,nazwa from Kategorie");
    qry->exec();
    while(qry->next()) {
        QSqlRecord c = qry->record();
        QSqlField f = c.field("nazwa");
        QString nazwa = f.value().toString();
        QTreeWidgetItem* item = new QTreeWidgetItem();
        item->setText(0, nazwa);

        QSqlQuery* qry2=new QSqlQuery(conn.mydb);
        qry2->prepare("select nazwa from Produkty where Kategoria=" + qry->record().field("id").value().toString());
        qry2->exec();
        while(qry2->next()) {
            QTreeWidgetItem* item2 = new QTreeWidgetItem();
            item2->setText(0, qry2->record().field("nazwa").value().toString());
            item->addChild(item2);
        }

        ui->Lista->addTopLevelItem(item);
    }

    //ui->Lista->selectedItems().front()->text(0);



    conn.connClose();




}
