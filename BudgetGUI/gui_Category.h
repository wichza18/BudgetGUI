#pragma once

//#include <QWidget>
//#include <QPushButton>
#include <QDialog>
#include "ui_gui_Category.h"

//namespace Ui_Category { class gui_Category; }

class gui_Category : public QDialog
{
	Q_OBJECT

public:
	gui_Category(QWidget *parent = Q_NULLPTR);
	//gui_Category(std::string mainLabel);
	~gui_Category();

private:
	Ui::gui_Category ui;
};
