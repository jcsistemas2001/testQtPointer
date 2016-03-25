/**
 * @file mythread.cpp
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

#include "mythread.h"
#include <qdebug.h>

MyThread::MyThread() :
    m_nIterations(10)
{

}

void MyThread::run()
{
    while(m_nIterations--) {
        qDebug() << Q_FUNC_INFO << m_nIterations;
        SharedMyData pData = SharedMyData(new MyData());
        pData->m_nIteration = m_nIterations;
        emit sendData(pData);
        QThread::sleep(1);
    }
    this->exit();
}
