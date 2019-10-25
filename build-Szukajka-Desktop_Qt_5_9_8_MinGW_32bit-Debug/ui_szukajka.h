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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Szukajka
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Tekst;
    QPushButton *Przycisk;
    QLabel *label;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *Wyszukaj;
    QTreeWidget *Lista;
    QTreeView *treeView;
    QListView *cos;
    QPushButton *pushButton;

    void setupUi(QMainWindow *Szukajka)
    {
        if (Szukajka->objectName().isEmpty())
            Szukajka->setObjectName(QStringLiteral("Szukajka"));
        Szukajka->resize(756, 568);
        Szukajka->setMouseTracking(false);
        centralwidget = new QWidget(Szukajka);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 11, 531, 551));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Tekst = new QLineEdit(layoutWidget);
        Tekst->setObjectName(QStringLiteral("Tekst"));

        verticalLayout_2->addWidget(Tekst);

        Przycisk = new QPushButton(layoutWidget);
        Przycisk->setObjectName(QStringLiteral("Przycisk"));

        verticalLayout_2->addWidget(Przycisk);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);

        verticalLayout_2->addWidget(label);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 11, 202, 551));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Wyszukaj = new QLabel(layoutWidget1);
        Wyszukaj->setObjectName(QStringLiteral("Wyszukaj"));
        Wyszukaj->setMaximumSize(QSize(200, 16777215));
        Wyszukaj->setMouseTracking(false);
        Wyszukaj->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(Wyszukaj);

        Lista = new QTreeWidget(layoutWidget1);
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
        Lista->setMaximumSize(QSize(200, 16777215));
        Lista->setDragEnabled(false);
        Lista->header()->setVisible(false);
        Lista->header()->setCascadingSectionResizes(false);
        Lista->header()->setHighlightSections(false);

        verticalLayout->addWidget(Lista);

        treeView = new QTreeView(layoutWidget1);
        treeView->setObjectName(QStringLiteral("treeView"));

        verticalLayout->addWidget(treeView);

        cos = new QListView(layoutWidget1);
        cos->setObjectName(QStringLiteral("cos"));

        verticalLayout->addWidget(cos);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        Szukajka->setCentralWidget(centralwidget);

        retranslateUi(Szukajka);

        QMetaObject::connectSlotsByName(Szukajka);
    } // setupUi

    void retranslateUi(QMainWindow *Szukajka)
    {
        Szukajka->setWindowTitle(QApplication::translate("Szukajka", "Szukajka", Q_NULLPTR));
        Przycisk->setText(QApplication::translate("Szukajka", "Szukaj", Q_NULLPTR));
        label->setText(QApplication::translate("Szukajka", "[+]Status", Q_NULLPTR));
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

        pushButton->setText(QApplication::translate("Szukajka", "Lista", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Szukajka: public Ui_Szukajka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SZUKAJKA_H
