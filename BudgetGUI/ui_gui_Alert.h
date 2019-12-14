/********************************************************************************
** Form generated from reading UI file 'gui_Alert.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_ALERT_H
#define UI_GUI_ALERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_gui_Alert
{
public:
    QGridLayout *gridLayout;
    QLabel *label_Message;

    void setupUi(QDialog *gui_Alert)
    {
        if (gui_Alert->objectName().isEmpty())
            gui_Alert->setObjectName(QString::fromUtf8("gui_Alert"));
        gui_Alert->resize(400, 300);
        gridLayout = new QGridLayout(gui_Alert);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_Message = new QLabel(gui_Alert);
        label_Message->setObjectName(QString::fromUtf8("label_Message"));
        QFont font;
        font.setPointSize(10);
        label_Message->setFont(font);
        label_Message->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Message, 0, 0, 1, 1);


        retranslateUi(gui_Alert);

        QMetaObject::connectSlotsByName(gui_Alert);
    } // setupUi

    void retranslateUi(QDialog *gui_Alert)
    {
        gui_Alert->setWindowTitle(QCoreApplication::translate("gui_Alert", "Alert", nullptr));
        label_Message->setText(QCoreApplication::translate("gui_Alert", "Insert Error Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_Alert: public Ui_gui_Alert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_ALERT_H
