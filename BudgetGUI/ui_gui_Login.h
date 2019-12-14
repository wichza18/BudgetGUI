/********************************************************************************
** Form generated from reading UI file 'gui_Login.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_LOGIN_H
#define UI_GUI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui_Login
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_LoginTop;
    QLabel *label_Username;
    QLineEdit *lineEdit_Password;
    QLineEdit *lineEdit_Username;
    QPushButton *button_Unhide;
    QLabel *label_Password;
    QPushButton *button_Login;
    QSpacerItem *verticalSpacer_LoginBottom;
    QSpacerItem *horizontalSpacer_LoginRight;
    QSpacerItem *horizontalSpacer_LoginLeft;

    void setupUi(QWidget *gui_Login)
    {
        if (gui_Login->objectName().isEmpty())
            gui_Login->setObjectName(QString::fromUtf8("gui_Login"));
        gui_Login->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gui_Login->sizePolicy().hasHeightForWidth());
        gui_Login->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(gui_Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_LoginTop = new QSpacerItem(30, 30, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_LoginTop, 3, 0, 1, 3);

        label_Username = new QLabel(gui_Login);
        label_Username->setObjectName(QString::fromUtf8("label_Username"));
        sizePolicy.setHeightForWidth(label_Username->sizePolicy().hasHeightForWidth());
        label_Username->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_Username, 0, 0, 1, 1);

        lineEdit_Password = new QLineEdit(gui_Login);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_Password, 2, 1, 1, 1);

        lineEdit_Username = new QLineEdit(gui_Login);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));

        gridLayout->addWidget(lineEdit_Username, 0, 1, 1, 1);

        button_Unhide = new QPushButton(gui_Login);
        button_Unhide->setObjectName(QString::fromUtf8("button_Unhide"));

        gridLayout->addWidget(button_Unhide, 2, 2, 1, 1);

        label_Password = new QLabel(gui_Login);
        label_Password->setObjectName(QString::fromUtf8("label_Password"));
        label_Password->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Password->sizePolicy().hasHeightForWidth());
        label_Password->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_Password, 2, 0, 1, 1);

        button_Login = new QPushButton(gui_Login);
        button_Login->setObjectName(QString::fromUtf8("button_Login"));
        sizePolicy1.setHeightForWidth(button_Login->sizePolicy().hasHeightForWidth());
        button_Login->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_Login, 4, 1, 1, 1);

        verticalSpacer_LoginBottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_LoginBottom, 6, 1, 1, 1);

        horizontalSpacer_LoginRight = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_LoginRight, 4, 0, 1, 1);

        horizontalSpacer_LoginLeft = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_LoginLeft, 4, 2, 1, 1);


        retranslateUi(gui_Login);

        QMetaObject::connectSlotsByName(gui_Login);
    } // setupUi

    void retranslateUi(QWidget *gui_Login)
    {
        gui_Login->setWindowTitle(QCoreApplication::translate("gui_Login", "Login", nullptr));
        label_Username->setText(QCoreApplication::translate("gui_Login", "Username", nullptr));
        button_Unhide->setText(QCoreApplication::translate("gui_Login", "Unhide", nullptr));
        label_Password->setText(QCoreApplication::translate("gui_Login", "Password", nullptr));
        button_Login->setText(QCoreApplication::translate("gui_Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_Login: public Ui_gui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_LOGIN_H
