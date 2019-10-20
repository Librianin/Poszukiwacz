#ifndef SZUKAJKA_H
#define SZUKAJKA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Szukajka; }
QT_END_NAMESPACE

class Szukajka : public QMainWindow
{
    Q_OBJECT

public:
    Szukajka(QWidget *parent = nullptr);
    ~Szukajka();

private:
    Ui::Szukajka *ui;
};
#endif // SZUKAJKA_H
