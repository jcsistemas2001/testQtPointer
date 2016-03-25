/**
 * @file mainwindow.h
 *
 * @brief MainWindow
 *
 * @author Julio Cruz
 * @date   2016/3/24
 *
 * @copyright 2016 XXX. All Rights Reserved.
 *
 * @section LICENSE
 *
 * Confidential Information of XXX. Not for disclosure or
 * distribution prior written consent. This software contains code, techniques
 * and know-how which is confidential and proprietary to XXX.
 *
 * Use of this software is subject to the terms of an end user license
 * agreement.
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <mydata.h>
#include <mythread.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    MyThread m_thread;

public slots:
    void plotData(SharedMyData pData);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
