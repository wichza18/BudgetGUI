/********************************************************************************
** Form generated from reading UI file 'gui_Transaction.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_TRANSACTION_H
#define UI_GUI_TRANSACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_gui_Transaction
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_Tran_Description;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_Tran_Description;
    QGroupBox *groupBox_Tran_Amount;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *doubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_Tran_Main;
    QGroupBox *groupBox_Tran_Date;
    QGridLayout *gridLayout_4;
    QDateEdit *dateEdit_Tran;
    QSpacerItem *horSpacer_Tran_Date;
    QGroupBox *groupBox_Tran_Buttons;
    QGridLayout *gridLayout_5;
    QPushButton *button_Tran_Save;
    QSpacerItem *horSpacer_Tran_Buttons_Right;
    QSpacerItem *horSpacer_Tran_Buttons_Left;
    QPushButton *button_Tran_Cancel;

    void setupUi(QDialog *gui_Transaction)
    {
        if (gui_Transaction->objectName().isEmpty())
            gui_Transaction->setObjectName(QString::fromUtf8("gui_Transaction"));
        gui_Transaction->resize(446, 314);
        gridLayout = new QGridLayout(gui_Transaction);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_Tran_Description = new QGroupBox(gui_Transaction);
        groupBox_Tran_Description->setObjectName(QString::fromUtf8("groupBox_Tran_Description"));
        gridLayout_2 = new QGridLayout(groupBox_Tran_Description);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_Tran_Description = new QLineEdit(groupBox_Tran_Description);
        lineEdit_Tran_Description->setObjectName(QString::fromUtf8("lineEdit_Tran_Description"));

        gridLayout_2->addWidget(lineEdit_Tran_Description, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_Tran_Description, 1, 0, 1, 1);

        groupBox_Tran_Amount = new QGroupBox(gui_Transaction);
        groupBox_Tran_Amount->setObjectName(QString::fromUtf8("groupBox_Tran_Amount"));
        gridLayout_3 = new QGridLayout(groupBox_Tran_Amount);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(groupBox_Tran_Amount);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(doubleSpinBox->sizePolicy().hasHeightForWidth());
        doubleSpinBox->setSizePolicy(sizePolicy);
        doubleSpinBox->setLayoutDirection(Qt::RightToLeft);
        doubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(doubleSpinBox, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_Tran_Amount, 2, 0, 1, 1);

        label_Tran_Main = new QLabel(gui_Transaction);
        label_Tran_Main->setObjectName(QString::fromUtf8("label_Tran_Main"));
        QFont font;
        font.setPointSize(16);
        label_Tran_Main->setFont(font);

        gridLayout->addWidget(label_Tran_Main, 0, 0, 1, 1);

        groupBox_Tran_Date = new QGroupBox(gui_Transaction);
        groupBox_Tran_Date->setObjectName(QString::fromUtf8("groupBox_Tran_Date"));
        gridLayout_4 = new QGridLayout(groupBox_Tran_Date);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        dateEdit_Tran = new QDateEdit(groupBox_Tran_Date);
        dateEdit_Tran->setObjectName(QString::fromUtf8("dateEdit_Tran"));
        dateEdit_Tran->setDateTime(QDateTime(QDate(2019, 12, 12), QTime(0, 0, 0)));

        gridLayout_4->addWidget(dateEdit_Tran, 0, 0, 1, 1);

        horSpacer_Tran_Date = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horSpacer_Tran_Date, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_Tran_Date, 3, 0, 1, 1);

        groupBox_Tran_Buttons = new QGroupBox(gui_Transaction);
        groupBox_Tran_Buttons->setObjectName(QString::fromUtf8("groupBox_Tran_Buttons"));
        gridLayout_5 = new QGridLayout(groupBox_Tran_Buttons);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        button_Tran_Save = new QPushButton(groupBox_Tran_Buttons);
        button_Tran_Save->setObjectName(QString::fromUtf8("button_Tran_Save"));

        gridLayout_5->addWidget(button_Tran_Save, 0, 1, 1, 1);

        horSpacer_Tran_Buttons_Right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horSpacer_Tran_Buttons_Right, 0, 3, 1, 1);

        horSpacer_Tran_Buttons_Left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horSpacer_Tran_Buttons_Left, 0, 0, 1, 1);

        button_Tran_Cancel = new QPushButton(groupBox_Tran_Buttons);
        button_Tran_Cancel->setObjectName(QString::fromUtf8("button_Tran_Cancel"));

        gridLayout_5->addWidget(button_Tran_Cancel, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_Tran_Buttons, 4, 0, 1, 1);


        retranslateUi(gui_Transaction);

        QMetaObject::connectSlotsByName(gui_Transaction);
    } // setupUi

    void retranslateUi(QDialog *gui_Transaction)
    {
        gui_Transaction->setWindowTitle(QCoreApplication::translate("gui_Transaction", "Transaction", nullptr));
        groupBox_Tran_Description->setTitle(QCoreApplication::translate("gui_Transaction", "Description", nullptr));
        groupBox_Tran_Amount->setTitle(QCoreApplication::translate("gui_Transaction", "Amount", nullptr));
        label_Tran_Main->setText(QCoreApplication::translate("gui_Transaction", "Transaction: AutoTransport", nullptr));
        groupBox_Tran_Date->setTitle(QCoreApplication::translate("gui_Transaction", "Date of Transaction", nullptr));
        groupBox_Tran_Buttons->setTitle(QString());
        button_Tran_Save->setText(QCoreApplication::translate("gui_Transaction", "Save", nullptr));
        button_Tran_Cancel->setText(QCoreApplication::translate("gui_Transaction", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_Transaction: public Ui_gui_Transaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_TRANSACTION_H
