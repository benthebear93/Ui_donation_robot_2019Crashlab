#include "merry_b/show_bank.h"
#include "ui_show_bank.h"

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>

using namespace std;

namespace merry_bot{

	show_bank::show_bank(QWidget *parent) :
	    QDialog(parent),
	    ui(new Ui::show_bank)
	{
	    ui->setupUi(this);

	}

	show_bank::~show_bank()
	{
	    delete ui;
	}

	void show_bank::on_pushButton_clicked()
	{
	    this->hide();
	    this->parentWidget()->show();

	};
}