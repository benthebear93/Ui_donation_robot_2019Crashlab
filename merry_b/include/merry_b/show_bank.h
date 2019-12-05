#ifndef SHOW_BANK_H
#define SHOW_BANK_H
#ifndef Q_MOC_RUN

#include <QDialog>
#include <ros/ros.h>
#include <string>
#include <std_msgs/Int32.h>
#include <std_msgs/String.h>

#include "merry_b/ros_task.h"
#include "merry_b/ui_merry_bot.h"
#include "merry_b/ui_show_bank.h"
#endif

namespace merry_bot{

	class show_bank : public QDialog
	{
	    Q_OBJECT

	public:
	    explicit show_bank(QWidget *parent = 0);
	    ~show_bank();

	public Q_SLOTS:
	    void on_pushButton_clicked();

	private:
	    Ui::show_bank *ui;
	};
}
#endif // SHOW_BANK_H
