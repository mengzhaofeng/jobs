/*
 * SegmenTest.h
 *
 *  Created on: 2014Äê3ÔÂ25ÈÕ
 *      Author: john
 */

#ifndef SEGMENTEST_H_
#define SEGMENTEST_H_
#include <visa.h>
#include <vector>
#include <stdlib.h>
#include "EClock.hpp"


class SegmenTest {
public:
	SegmenTest();
	virtual ~SegmenTest();

private:
	EClock<>			m_clock;
};

#endif /* SEGMENTEST_H_ */
