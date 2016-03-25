/**
 * @file main.cpp
 *
 * @brief
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
#include <QApplication>
#include <QDebug>
#include "mydata.h"

int main(int argc, char *argv[])
{
    qRegisterMetaType< QSharedPointer<MyData> >("SharedMyData");

    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
