/********************************************************************************
** Form generated from reading UI file 'gui_Budget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_BUDGET_H
#define UI_GUI_BUDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gui_Budget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_Travel;
    QGridLayout *gridLayout_10;
    QLabel *label_Limit_Travel;
    QPushButton *button_Budget_Travel;
    QGroupBox *groupBox_Education;
    QGridLayout *gridLayout_4;
    QLabel *label_Limit_Education;
    QPushButton *button_Budget_Education;
    QGroupBox *groupBox_Home;
    QGridLayout *gridLayout_7;
    QLabel *label_Limit_Home;
    QPushButton *button_Budget_Home;
    QGroupBox *groupBox_Food;
    QGridLayout *gridLayout_6;
    QLabel *label_Limit_Food;
    QPushButton *button_Budget_Food;
    QGroupBox *groupBox_Personal;
    QGridLayout *gridLayout_8;
    QLabel *label_Limit_Personal;
    QPushButton *button_Budget_Personal;
    QGroupBox *groupBox_Entertainment;
    QGridLayout *gridLayout_3;
    QLabel *label_Limit_Entertainment;
    QPushButton *button_Budget_Entertainment;
    QGroupBox *groupBox_Shopping;
    QGridLayout *gridLayout_9;
    QLabel *label_Limit_Shopping;
    QPushButton *button_Budget_Shopping;
    QGroupBox *groupBox_Auto;
    QGridLayout *gridLayout_5;
    QLabel *label_Limit_Auto;
    QPushButton *button_Budget_Auto;
    QGroupBox *groupBox_Utility;
    QGridLayout *gridLayout_11;
    QLabel *label_Limit_Utility;
    QPushButton *button_Budget_Utility;

    void setupUi(QDialog *gui_Budget)
    {
        if (gui_Budget->objectName().isEmpty())
            gui_Budget->setObjectName(QString::fromUtf8("gui_Budget"));
        gui_Budget->resize(417, 698);
        gridLayout_2 = new QGridLayout(gui_Budget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_Travel = new QGroupBox(gui_Budget);
        groupBox_Travel->setObjectName(QString::fromUtf8("groupBox_Travel"));
        gridLayout_10 = new QGridLayout(groupBox_Travel);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_Limit_Travel = new QLabel(groupBox_Travel);
        label_Limit_Travel->setObjectName(QString::fromUtf8("label_Limit_Travel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_Limit_Travel->sizePolicy().hasHeightForWidth());
        label_Limit_Travel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        label_Limit_Travel->setFont(font);

        gridLayout_10->addWidget(label_Limit_Travel, 0, 0, 1, 1);

        button_Budget_Travel = new QPushButton(groupBox_Travel);
        button_Budget_Travel->setObjectName(QString::fromUtf8("button_Budget_Travel"));

        gridLayout_10->addWidget(button_Budget_Travel, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_Travel, 7, 0, 1, 1);

        groupBox_Education = new QGroupBox(gui_Budget);
        groupBox_Education->setObjectName(QString::fromUtf8("groupBox_Education"));
        gridLayout_4 = new QGridLayout(groupBox_Education);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_Limit_Education = new QLabel(groupBox_Education);
        label_Limit_Education->setObjectName(QString::fromUtf8("label_Limit_Education"));
        sizePolicy.setHeightForWidth(label_Limit_Education->sizePolicy().hasHeightForWidth());
        label_Limit_Education->setSizePolicy(sizePolicy);
        label_Limit_Education->setFont(font);

        gridLayout_4->addWidget(label_Limit_Education, 0, 0, 1, 1);

        button_Budget_Education = new QPushButton(groupBox_Education);
        button_Budget_Education->setObjectName(QString::fromUtf8("button_Budget_Education"));

        gridLayout_4->addWidget(button_Budget_Education, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_Education, 1, 0, 1, 1);

        groupBox_Home = new QGroupBox(gui_Budget);
        groupBox_Home->setObjectName(QString::fromUtf8("groupBox_Home"));
        gridLayout_7 = new QGridLayout(groupBox_Home);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_Limit_Home = new QLabel(groupBox_Home);
        label_Limit_Home->setObjectName(QString::fromUtf8("label_Limit_Home"));
        sizePolicy.setHeightForWidth(label_Limit_Home->sizePolicy().hasHeightForWidth());
        label_Limit_Home->setSizePolicy(sizePolicy);
        label_Limit_Home->setFont(font);

        gridLayout_7->addWidget(label_Limit_Home, 0, 0, 1, 1);

        button_Budget_Home = new QPushButton(groupBox_Home);
        button_Budget_Home->setObjectName(QString::fromUtf8("button_Budget_Home"));

        gridLayout_7->addWidget(button_Budget_Home, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_Home, 4, 0, 1, 1);

        groupBox_Food = new QGroupBox(gui_Budget);
        groupBox_Food->setObjectName(QString::fromUtf8("groupBox_Food"));
        gridLayout_6 = new QGridLayout(groupBox_Food);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_Limit_Food = new QLabel(groupBox_Food);
        label_Limit_Food->setObjectName(QString::fromUtf8("label_Limit_Food"));
        sizePolicy.setHeightForWidth(label_Limit_Food->sizePolicy().hasHeightForWidth());
        label_Limit_Food->setSizePolicy(sizePolicy);
        label_Limit_Food->setFont(font);

        gridLayout_6->addWidget(label_Limit_Food, 0, 0, 1, 1);

        button_Budget_Food = new QPushButton(groupBox_Food);
        button_Budget_Food->setObjectName(QString::fromUtf8("button_Budget_Food"));

        gridLayout_6->addWidget(button_Budget_Food, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_Food, 3, 0, 1, 1);

        groupBox_Personal = new QGroupBox(gui_Budget);
        groupBox_Personal->setObjectName(QString::fromUtf8("groupBox_Personal"));
        gridLayout_8 = new QGridLayout(groupBox_Personal);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_Limit_Personal = new QLabel(groupBox_Personal);
        label_Limit_Personal->setObjectName(QString::fromUtf8("label_Limit_Personal"));
        sizePolicy.setHeightForWidth(label_Limit_Personal->sizePolicy().hasHeightForWidth());
        label_Limit_Personal->setSizePolicy(sizePolicy);
        label_Limit_Personal->setFont(font);

        gridLayout_8->addWidget(label_Limit_Personal, 0, 0, 1, 1);

        button_Budget_Personal = new QPushButton(groupBox_Personal);
        button_Budget_Personal->setObjectName(QString::fromUtf8("button_Budget_Personal"));

        gridLayout_8->addWidget(button_Budget_Personal, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_Personal, 5, 0, 1, 1);

        groupBox_Entertainment = new QGroupBox(gui_Budget);
        groupBox_Entertainment->setObjectName(QString::fromUtf8("groupBox_Entertainment"));
        gridLayout_3 = new QGridLayout(groupBox_Entertainment);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_Limit_Entertainment = new QLabel(groupBox_Entertainment);
        label_Limit_Entertainment->setObjectName(QString::fromUtf8("label_Limit_Entertainment"));
        sizePolicy.setHeightForWidth(label_Limit_Entertainment->sizePolicy().hasHeightForWidth());
        label_Limit_Entertainment->setSizePolicy(sizePolicy);
        label_Limit_Entertainment->setFont(font);

        gridLayout_3->addWidget(label_Limit_Entertainment, 0, 0, 1, 1);

        button_Budget_Entertainment = new QPushButton(groupBox_Entertainment);
        button_Budget_Entertainment->setObjectName(QString::fromUtf8("button_Budget_Entertainment"));

        gridLayout_3->addWidget(button_Budget_Entertainment, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_Entertainment, 2, 0, 1, 1);

        groupBox_Shopping = new QGroupBox(gui_Budget);
        groupBox_Shopping->setObjectName(QString::fromUtf8("groupBox_Shopping"));
        gridLayout_9 = new QGridLayout(groupBox_Shopping);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_Limit_Shopping = new QLabel(groupBox_Shopping);
        label_Limit_Shopping->setObjectName(QString::fromUtf8("label_Limit_Shopping"));
        sizePolicy.setHeightForWidth(label_Limit_Shopping->sizePolicy().hasHeightForWidth());
        label_Limit_Shopping->setSizePolicy(sizePolicy);
        label_Limit_Shopping->setFont(font);

        gridLayout_9->addWidget(label_Limit_Shopping, 0, 0, 1, 1);

        button_Budget_Shopping = new QPushButton(groupBox_Shopping);
        button_Budget_Shopping->setObjectName(QString::fromUtf8("button_Budget_Shopping"));

        gridLayout_9->addWidget(button_Budget_Shopping, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_Shopping, 6, 0, 1, 1);

        groupBox_Auto = new QGroupBox(gui_Budget);
        groupBox_Auto->setObjectName(QString::fromUtf8("groupBox_Auto"));
        gridLayout_5 = new QGridLayout(groupBox_Auto);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_Limit_Auto = new QLabel(groupBox_Auto);
        label_Limit_Auto->setObjectName(QString::fromUtf8("label_Limit_Auto"));
        sizePolicy.setHeightForWidth(label_Limit_Auto->sizePolicy().hasHeightForWidth());
        label_Limit_Auto->setSizePolicy(sizePolicy);
        label_Limit_Auto->setFont(font);

        gridLayout_5->addWidget(label_Limit_Auto, 0, 0, 1, 1);

        button_Budget_Auto = new QPushButton(groupBox_Auto);
        button_Budget_Auto->setObjectName(QString::fromUtf8("button_Budget_Auto"));

        gridLayout_5->addWidget(button_Budget_Auto, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_Auto, 0, 0, 1, 1);

        groupBox_Utility = new QGroupBox(gui_Budget);
        groupBox_Utility->setObjectName(QString::fromUtf8("groupBox_Utility"));
        gridLayout_11 = new QGridLayout(groupBox_Utility);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_Limit_Utility = new QLabel(groupBox_Utility);
        label_Limit_Utility->setObjectName(QString::fromUtf8("label_Limit_Utility"));
        sizePolicy.setHeightForWidth(label_Limit_Utility->sizePolicy().hasHeightForWidth());
        label_Limit_Utility->setSizePolicy(sizePolicy);
        label_Limit_Utility->setFont(font);

        gridLayout_11->addWidget(label_Limit_Utility, 1, 0, 1, 1);

        button_Budget_Utility = new QPushButton(groupBox_Utility);
        button_Budget_Utility->setObjectName(QString::fromUtf8("button_Budget_Utility"));

        gridLayout_11->addWidget(button_Budget_Utility, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_Utility, 8, 0, 1, 1);


        retranslateUi(gui_Budget);

        QMetaObject::connectSlotsByName(gui_Budget);
    } // setupUi

    void retranslateUi(QDialog *gui_Budget)
    {
        gui_Budget->setWindowTitle(QCoreApplication::translate("gui_Budget", "Budget", nullptr));
        groupBox_Travel->setTitle(QCoreApplication::translate("gui_Budget", "Travel/Vacation", nullptr));
        label_Limit_Travel->setText(QCoreApplication::translate("gui_Budget", "$0.00", nullptr));
        button_Budget_Travel->setText(QCoreApplication::translate("gui_Budget", "Update", nullptr));
        groupBox_Education->setTitle(QCoreApplication::translate("gui_Budget", "Education", nullptr));
        label_Limit_Education->setText(QCoreApplication::translate("gui_Budget", "$0.00", nullptr));
        button_Budget_Education->setText(QCoreApplication::translate("gui_Budget", "Update", nullptr));
        groupBox_Home->setTitle(QCoreApplication::translate("gui_Budget", "Home", nullptr));
        label_Limit_Home->setText(QCoreApplication::translate("gui_Budget", "$0.00", nullptr));
        button_Budget_Home->setText(QCoreApplication::translate("gui_Budget", "Update", nullptr));
        groupBox_Food->setTitle(QCoreApplication::translate("gui_Budget", "Food/Dining", nullptr));
        label_Limit_Food->setText(QCoreApplication::translate("gui_Budget", "$0.00", nullptr));
        button_Budget_Food->setText(QCoreApplication::translate("gui_Budget", "Update", nullptr));
        groupBox_Personal->setTitle(QCoreApplication::translate("gui_Budget", "Personal", nullptr));
        label_Limit_Personal->setText(QCoreApplication::translate("gui_Budget", "$0.00", nullptr));
        button_Budget_Personal->setText(QCoreApplication::translate("gui_Budget", "Update", nullptr));
        groupBox_Entertainment->setTitle(QCoreApplication::translate("gui_Budget", "Entertainment", nullptr));
        label_Limit_Entertainment->setText(QCoreApplication::translate("gui_Budget", "$0.00", nullptr));
        button_Budget_Entertainment->setText(QCoreApplication::translate("gui_Budget", "Update", nullptr));
        groupBox_Shopping->setTitle(QCoreApplication::translate("gui_Budget", "Shopping", nullptr));
        label_Limit_Shopping->setText(QCoreApplication::translate("gui_Budget", "$0.00", nullptr));
        button_Budget_Shopping->setText(QCoreApplication::translate("gui_Budget", "Update", nullptr));
        groupBox_Auto->setTitle(QCoreApplication::translate("gui_Budget", "Auto/Transport", nullptr));
        label_Limit_Auto->setText(QCoreApplication::translate("gui_Budget", "$0.00", nullptr));
        button_Budget_Auto->setText(QCoreApplication::translate("gui_Budget", "Update", nullptr));
        groupBox_Utility->setTitle(QCoreApplication::translate("gui_Budget", "Utility", nullptr));
        label_Limit_Utility->setText(QCoreApplication::translate("gui_Budget", "$0.00", nullptr));
        button_Budget_Utility->setText(QCoreApplication::translate("gui_Budget", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui_Budget: public Ui_gui_Budget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_BUDGET_H
