/**
 * @file mythread.h
 *
 * @brief MyThread
 *
 * @author Julio Cruz
 * @date   2016/3/25
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

#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <mydata.h>

class MyThread : public QThread
{
    Q_OBJECT
public:
    MyThread();
signals:
    void sendData(SharedMyData data);
private:
    void run();
    int m_nIterations;
};

#endif // MYTHREAD_H
