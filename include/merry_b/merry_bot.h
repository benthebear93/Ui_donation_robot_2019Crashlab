#ifndef MERRY_BOT_H
#define MERRY_BOT_H
#ifndef Q_MOC_RUN

#include <QMainWindow>
#include <QPushButton>

#include <ros/ros.h>
#include <string>
#include <std_msgs/Int32.h>
#include <std_msgs/String.h>

#include "merry_b/ui_merry_bot.h"
#include "merry_b/ui_show_bank.h"

#include "merry_b/show_bank.h"

#endif

namespace merry_bot {


	class merry_bot : public QMainWindow
	{
	    Q_OBJECT

	public:
	    explicit merry_bot(int argc, char** argv, QWidget *parent = 0);
	    ~merry_bot();
	    void shownoROSmaster();

	public Q_SLOTS:
	    void on_pushButton_clicked();

	private:
	    Ui::merry_bot *ui;
	    show_bank *s_b;

	    ros_task qnode;
	    bool isConnected;
	public:
		bool pushed;
	};
}
#endif // MERRY_BOT_H
