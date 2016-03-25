/**
 * @file testclass.cpp
 *
 * @brief TestClass
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

#include "mydata.h"
#include <qdebug.h>

MyData::MyData() :
    m_nIteration(-1)
{
    qDebug() << Q_FUNC_INFO;
}


MyData::~MyData()
{
    qDebug() << Q_FUNC_INFO;
}
