/********************************************************************************
** Form generated from reading UI file 'szukajka.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SZUKAJKA_H
#define UI_SZUKAJKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Szukajka
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *Wyszukaj;
    QTreeWidget *Lista;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Tekst;
    QPushButton *Przycisk;
    QLabel *label;

    void setupUi(QMainWindow *Szukajka)
    {
        if (Szukajka->objectName().isEmpty())
            Szukajka->setObjectName(QStringLiteral("Szukajka"));
        Szukajka->resize(756, 568);
        Szukajka->setMouseTracking(false);
        centralwidget = new QWidget(Szukajka);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Wyszukaj = new QLabel(centralwidget);
        Wyszukaj->setObjectName(QStringLiteral("Wyszukaj"));
        Wyszukaj->setMouseTracking(false);
        Wyszukaj->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(Wyszukaj);

        Lista = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(Lista);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(Lista);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(Lista);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(Lista);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        Lista->setObjectName(QStringLiteral("Lista"));
        Lista->setDragEnabled(false);
        Lista->header()->setVisible(false);
        Lista->header()->setCascadingSectionResizes(false);
        Lista->header()->setHighlightSections(false);

        verticalLayout->addWidget(Lista);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Tekst = new QLineEdit(centralwidget);
        Tekst->setObjectName(QStringLiteral("Tekst"));

        verticalLayout_2->addWidget(Tekst);

        Przycisk = new QPushButton(centralwidget);
        Przycisk->setObjectName(QStringLiteral("Przycisk"));

        verticalLayout_2->addWidget(Przycisk);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);

        verticalLayout_2->addWidget(label);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        Szukajka->setCentralWidget(centralwidget);

        retranslateUi(Szukajka);

        QMetaObject::connectSlotsByName(Szukajka);
    } // setupUi

    void retranslateUi(QMainWindow *Szukajka)
    {
        Szukajka->setWindowTitle(QApplication::translate("Szukajka", "Szukajka", Q_NULLPTR));
        Wyszukaj->setText(QApplication::translate("Szukajka", "Wyszukaj:", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = Lista->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("Szukajka", "Produkty", Q_NULLPTR));

        const bool __sortingEnabled = Lista->isSortingEnabled();
        Lista->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = Lista->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("Szukajka", "Spo\305\274ywcze", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("Szukajka", "Musztarda", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("Szukajka", "Makaron", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = Lista->topLevelItem(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("Szukajka", "RTV", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QApplication::translate("Szukajka", "Telewizor", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem4->child(1);
        ___qtreewidgetitem6->setText(0, QApplication::translate("Szukajka", "Radio", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = Lista->topLevelItem(2);
        ___qtreewidgetitem7->setText(0, QApplication::translate("Szukajka", "AGD", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QApplication::translate("Szukajka", "Pralka", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem7->child(1);
        ___qtreewidgetitem9->setText(0, QApplication::translate("Szukajka", "Lod\303\263wka", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem10 = Lista->topLevelItem(3);
        ___qtreewidgetitem10->setText(0, QApplication::translate("Szukajka", "Tekstylia", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem10->child(0);
        ___qtreewidgetitem11->setText(0, QApplication::translate("Szukajka", "Spodnie", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem10->child(1);
        ___qtreewidgetitem12->setText(0, QApplication::translate("Szukajka", "T-shirt", Q_NULLPTR));
        Lista->setSortingEnabled(__sortingEnabled);

        Przycisk->setText(QApplication::translate("Szukajka", "Szukaj", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Szukajka: public Ui_Szukajka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SZUKAJKA_H
