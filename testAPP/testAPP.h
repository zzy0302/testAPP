#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_testAPP.h"

class testAPP : public QMainWindow
{
	Q_OBJECT

public:
	testAPP(QWidget *parent = Q_NULLPTR);

private:
	Ui::testAPPClass ui;
};
