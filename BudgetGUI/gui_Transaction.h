#pragma once

#include <QDialog>
#include "ui_gui_Transaction.h"

class gui_Transaction : public QDialog
{
	Q_OBJECT

public:
	gui_Transaction(QWidget *parent = Q_NULLPTR);
	~gui_Transaction();

private:
	Ui::gui_Transaction ui;
};
