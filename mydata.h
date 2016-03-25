/**
 * @file MYDATA.h
 *
 * @brief MYDATA
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

#ifndef MYDATA_H
#define MYDATA_H

#include <QSharedPointer>

class MyData
{
public:
    //const static int m_nTypeId;
    MyData();
    ~MyData();
    int m_nIteration;
};

typedef QSharedPointer<MyData> SharedMyData;

#endif // MYDATA_H
