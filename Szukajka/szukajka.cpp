#include "szukajka.h"
#include "ui_szukajka.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QPicture>
#include <QPainter>
#include <QGraphicsScene>
#include <QString>



Szukajka::Szukajka(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Szukajka)
{
    ui->setupUi(this);

    QPixmap pix;
    pix.load("D:/Programowanie/Projekt1/mapka.png");

    scene= new QGraphicsScene(this);
    scene->addPixmap(QPixmap(pix));
    ui->grafika->setScene(scene);





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



    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QPen blackpen(Qt::black);
    blackpen.setWidth(1);
    //ellipse = scene->addEllipse(10,10,100,100,blackpen,redBrush);



        QString produkt;
        produkt=ui->Tekst->text();
        Szukajka conn;

        conn.connOpen();
        QSqlQuery* qry=new QSqlQuery(conn.mydb);
        qry->prepare("select * from Produkty where nazwa='"+produkt+"'");





    if (qry->exec())
    {
        while (qry->next()) {
            QPixmap pix;
            pix.load("D:/Programowanie/Projekt1/mapka.png");
            scene= new QGraphicsScene(this);
            scene->addPixmap(QPixmap(pix));
            ui->grafika->setScene(scene);
            int x=qry->record().value(3).toInt();
            int y=qry->value(4).toInt();
            rectangle = scene->addRect(x,y,16,16,blackpen,blueBrush);
            QPixmap obraz;
            obraz.load(qry->value(5).toString());
            ui->label->setPixmap(obraz);
}

/*
              int count=0;

                 while (qry->next()) {
                 count++;
                }
                 if(count==1){

                    ui->label->setText("mamy produkt");

                 }
                 if(count<1)
                    ui->label->setText("nie mamy produktu");
                 if(count>1)
                    ui->label->setText("nie mwiem");

*/

}
    connClose();


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


//item->text(column);

void Szukajka::on_Lista_activated(const QModelIndex &index)
{
    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QPen blackpen(Qt::black);
    blackpen.setWidth(1);
    //ellipse = scene->addEllipse(10,10,100,100,blackpen,redBrush);


        QString produkt=ui->Lista->model()->data(index).toString();

        Szukajka conn;

        conn.connOpen();
        QSqlQuery* qry=new QSqlQuery(conn.mydb);
        qry->prepare("select * from Produkty where nazwa='"+produkt+"'");


    if (qry->exec())
    {
        while (qry->next()) {
            QPixmap pix;
            pix.load("D:/Programowanie/Projekt1/mapka.png");
            scene= new QGraphicsScene(this);
            scene->addPixmap(QPixmap(pix));
            ui->grafika->setScene(scene);
            int x=qry->record().value(3).toInt();
            int y=qry->value(4).toInt();
            rectangle = scene->addRect(x,y,16,16,blackpen,blueBrush);
}





}
    connClose();

}

