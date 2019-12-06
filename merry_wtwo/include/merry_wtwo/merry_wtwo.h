#ifndef MERRY_WTWO_H
#define MERRY_WTWO_H
#ifndef Q_MOC_RUN

#include <QMainWindow>
#include <QPushButton>

#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include "merry_wtwo/ros_task.h"
#include "merry_wtwo/ui_merry_wtwo.h"

#endif

namespace merry_wtwo {

	class merry_wtwo : public QMainWindow
	{
	    Q_OBJECT

	public:
	    explicit merry_wtwo(int argc, char** argv, QWidget *parent = 0);
	    ~merry_wtwo();
	    void shownoROSmaster();

	public Q_SLOTS:
	    void on_pushButton_clicked();
	    void close_w2();

	private:
	    Ui::merry_wtwo *ui;
	    ros_task qnode;
	    bool isConnected;
	public:
		bool pushed;
	};
}
#endif // merry_wtwo_H