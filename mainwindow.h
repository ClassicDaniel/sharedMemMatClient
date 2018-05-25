#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QMainWindow>
#include <QWidget>
#include <QFileDialog>
#include <QDirIterator>
#include <QKeyEvent>
#include <QTreeWidgetItem>
#undef foreach
#include <librealsense2/rs.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>
#include <time.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string.h>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <sstream>
// for memory sharing
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
