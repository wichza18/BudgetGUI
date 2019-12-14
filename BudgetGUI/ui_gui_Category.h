/********************************************************************************
** Form generated from reading UI file 'gui_Category.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CATEGORY_H
#define UI_GUI_CATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Category
{
public:
    QGridLayout *gridLayout;
    QLabel *label_Category_TotalAmount;
    QLabel *label_Category_Frequency;
    QLabel *label_Category_BudgetAmount_Amount;
    QLabel *label_Category_Main;
    QLabel *label_Category_AmountLeft;
    QPushButton *button_Category_Add;
    QLabel *label_Category_TotalAmount_Amount;
    QLabel *label_Category_AmountLeft_Amount;
    QPushButton *button_Category_Adjust;
    QLabel *label_Category_BudgetAmount;
    QLabel *label_Category_Frequency_Num;

    void setupUi(QDialog *gui_Category)
    {
        if (gui_Category->objectName().isEmpty())
            gui_Category->setObjectName(QString::fromUtf8("Category"));
        gui_Category->resize(467, 300);
        gridLayout = new QGridLayout(gui_Category);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_Category_TotalAmount = new QLabel(gui_Category);
        label_Category_TotalAmount->setObjectName(QString::fromUtf8("label_Category_TotalAmount"));

        gridLayout->addWidget(label_Category_TotalAmount, 4, 0, 1, 1);

        label_Category_Frequency = new QLabel(gui_Category);
        label_Category_Frequency->setObjectName(QString::fromUtf8("label_Category_Frequency"));

        gridLayout->addWidget(label_Category_Frequency, 3, 0, 1, 1);

        label_Category_BudgetAmount_Amount = new QLabel(gui_Category);
        label_Category_BudgetAmount_Amount->setObjectName(QString::fromUtf8("label_Category_BudgetAmount_Amount"));

        gridLayout->addWidget(label_Category_BudgetAmount_Amount, 2, 1, 1, 1);

        label_Category_Main = new QLabel(gui_Category);
        label_Category_Main->setObjectName(QString::fromUtf8("label_Category_Main"));
        QFont font;
        font.setPointSize(16);
        label_Category_Main->setFont(font);

        gridLayout->addWidget(label_Category_Main, 0, 0, 1, 1);

        label_Category_AmountLeft = new QLabel(gui_Category);
        label_Category_AmountLeft->setObjectName(QString::fromUtf8("label_Category_AmountLeft"));

        gridLayout->addWidget(label_Category_AmountLeft, 5, 0, 1, 1);

        button_Category_Add = new QPushButton(gui_Category);
        button_Category_Add->setObjectName(QString::fromUtf8("button_Category_Add"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_Category_Add->sizePolicy().hasHeightForWidth());
        button_Category_Add->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_Category_Add, 0, 1, 1, 1);

        label_Category_TotalAmount_Amount = new QLabel(gui_Category);
        label_Category_TotalAmount_Amount->setObjectName(QString::fromUtf8("label_Category_TotalAmount_Amount"));

        gridLayout->addWidget(label_Category_TotalAmount_Amount, 4, 1, 1, 1);

        label_Category_AmountLeft_Amount = new QLabel(gui_Category);
        label_Category_AmountLeft_Amount->setObjectName(QString::fromUtf8("label_Category_AmountLeft_Amount"));

        gridLayout->addWidget(label_Category_AmountLeft_Amount, 5, 1, 1, 1);

        button_Category_Adjust = new QPushButton(gui_Category);
        button_Category_Adjust->setObjectName(QString::fromUtf8("button_Category_Adjust"));

        gridLayout->addWidget(button_Category_Adjust, 1, 1, 1, 1);

        label_Category_BudgetAmount = new QLabel(gui_Category);
        label_Category_BudgetAmount->setObjectName(QString::fromUtf8("label_Category_BudgetAmount"));

        gridLayout->addWidget(label_Category_BudgetAmount, 2, 0, 1, 1);

        label_Category_Frequency_Num = new QLabel(gui_Category);
        label_Category_Frequency_Num->setObjectName(QString::fromUtf8("label_Category_Frequency_Num"));

        gridLayout->addWidget(label_Category_Frequency_Num, 3, 1, 1, 1);


        retranslateUi(gui_Category);

        QMetaObject::connectSlotsByName(gui_Category);
    } // setupUi

    void retranslateUi(QDialog *gui_Category)
    {
        gui_Category->setWindowTitle(QCoreApplication::translate("Category", "Category", nullptr));
        label_Category_TotalAmount->setText(QCoreApplication::translate("Category", "Total Amount", nullptr));
        label_Category_Frequency->setText(QCoreApplication::translate("Category", "Frequency", nullptr));
        label_Category_BudgetAmount_Amount->setText(QCoreApplication::translate("Category", "$0.00", nullptr));
        label_Category_Main->setText(QCoreApplication::translate("Category", "Auto/Transport", nullptr));
        label_Category_AmountLeft->setText(QCoreApplication::translate("Category", "Amount Left", nullptr));
        button_Category_Add->setText(QCoreApplication::translate("Category", "Add Transaction", nullptr));
        label_Category_TotalAmount_Amount->setText(QCoreApplication::translate("Category", "$0.00", nullptr));
        label_Category_AmountLeft_Amount->setText(QCoreApplication::translate("Category", "$0.00", nullptr));
        button_Category_Adjust->setText(QCoreApplication::translate("Category", "Adjust", nullptr));
        label_Category_BudgetAmount->setText(QCoreApplication::translate("Category", "Budget Amount", nullptr));
        label_Category_Frequency_Num->setText(QCoreApplication::translate("Category", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_Category : public Ui_Category {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CATEGORY_H
