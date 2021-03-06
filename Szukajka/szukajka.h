#ifndef SZUKAJKA_H
#define SZUKAJKA_H


#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QGraphicsScene>
#include <QTreeWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class Szukajka; }
QT_END_NAMESPACE

class Szukajka : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb;

    void connClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("D:/Programowanie/Projekt1/Produkty.db");

        if(!mydb.open()){
            qDebug()<<("Failed");
            return false;
        }
        else{
            qDebug()<<("Conected");
            return true;
            }
    }


public:
    Szukajka(QWidget *parent = nullptr);
    ~Szukajka();



private slots:
    void on_Przycisk_clicked();


    void on_pushButton_clicked();


    void on_Lista_activated(const QModelIndex &index);

private:
    Ui::Szukajka *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
    QGraphicsItem *item;
};
#endif // SZUKAJKA_H
