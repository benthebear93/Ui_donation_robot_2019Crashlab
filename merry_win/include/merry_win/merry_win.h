#ifndef MERRY_WIN_H
#define MERRY_WIN_H
#ifndef Q_MOC_RUN

#include <QMainWindow>
#include <QPushButton>

#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include "merry_win/ros_task.h"
#include "merry_win/ui_merry_win.h"

#endif

namespace merry_win {

	class merry_win : public QMainWindow
	{
	    Q_OBJECT

	public:
	    explicit merry_win(int argc, char** argv, QWidget *parent = 0);
	    ~merry_win();
	    void shownoROSmaster();

	public Q_SLOTS:
	    void on_pushButton_clicked();
	    void close_w1();

	private:
	    Ui::merry_win *ui;
	    ros_task qnode;
	    bool isConnected;
	public:
		int pushed;
	};
}
#endif // MERRY_WIN_H
