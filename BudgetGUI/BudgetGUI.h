#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BudgetGUI.h"

class BudgetGUI : public QMainWindow
{
	Q_OBJECT

public:
	BudgetGUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::BudgetGUIClass ui;
};
