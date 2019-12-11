#pragma once

#include <QDialog>
#include "ui_gui_Alert.h"

class gui_Alert : public QDialog
{
	Q_OBJECT

public:
	gui_Alert(QWidget *parent = Q_NULLPTR);
	~gui_Alert();

private:
	Ui::gui_Alert ui;
};
