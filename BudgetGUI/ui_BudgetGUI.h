/********************************************************************************
** Form generated from reading UI file 'BudgetGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGETGUI_H
#define UI_BUDGETGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BudgetGUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BudgetGUIClass)
    {
        if (BudgetGUIClass->objectName().isEmpty())
            BudgetGUIClass->setObjectName(QString::fromUtf8("BudgetGUIClass"));
        BudgetGUIClass->resize(600, 400);
        menuBar = new QMenuBar(BudgetGUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        BudgetGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BudgetGUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BudgetGUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(BudgetGUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        BudgetGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(BudgetGUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BudgetGUIClass->setStatusBar(statusBar);

        retranslateUi(BudgetGUIClass);

        QMetaObject::connectSlotsByName(BudgetGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *BudgetGUIClass)
    {
        BudgetGUIClass->setWindowTitle(QCoreApplication::translate("BudgetGUIClass", "BudgetGUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BudgetGUIClass: public Ui_BudgetGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGETGUI_H
