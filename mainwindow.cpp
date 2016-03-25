/**
 * @file mainwindow.cpp
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

#include "mainwindow.h"
#include <mydata.h>
#include <qdebug.h>
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(&m_thread, SIGNAL(sendData(SharedMyData)),
                     this, SLOT(plotData(SharedMyData)), Qt::QueuedConnection);
    m_thread.start();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::plotData(SharedMyData data)
{
    qDebug() << Q_FUNC_INFO << data->m_nIteration;
    if(data->m_nIteration == 0) {
        qDebug() << "closing";
        m_thread.quit();
        m_thread.wait();
        close();
    }
}
