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
#include <QtWidgets/QGraphicsView>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Tekst;
    QPushButton *Przycisk;
    QGraphicsView *grafika;
    QLabel *label;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *Wyszukaj;
    QTreeWidget *Lista;
    QPushButton *pushButton;

    void setupUi(QMainWindow *Szukajka)
    {
        if (Szukajka->objectName().isEmpty())
            Szukajka->setObjectName(QStringLiteral("Szukajka"));
        Szukajka->resize(757, 809);
        Szukajka->setMouseTracking(false);
        centralwidget = new QWidget(Szukajka);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 11, 531, 751));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Tekst = new QLineEdit(layoutWidget);
        Tekst->setObjectName(QStringLiteral("Tekst"));

        verticalLayout_2->addWidget(Tekst);

        Przycisk = new QPushButton(layoutWidget);
        Przycisk->setObjectName(QStringLiteral("Przycisk"));

        verticalLayout_2->addWidget(Przycisk);

        grafika = new QGraphicsView(layoutWidget);
        grafika->setObjectName(QStringLiteral("grafika"));

        verticalLayout_2->addWidget(grafika);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);

        verticalLayout_2->addWidget(label);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 11, 202, 751));
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
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        Lista->setHeaderItem(__qtreewidgetitem);
        Lista->setObjectName(QStringLiteral("Lista"));
        Lista->setMaximumSize(QSize(200, 16777215));
        Lista->setDragEnabled(false);
        Lista->header()->setVisible(false);
        Lista->header()->setCascadingSectionResizes(false);
        Lista->header()->setHighlightSections(false);

        verticalLayout->addWidget(Lista);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(1, 1));

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
        pushButton->setText(QApplication::translate("Szukajka", "Lista", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Szukajka: public Ui_Szukajka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SZUKAJKA_H
