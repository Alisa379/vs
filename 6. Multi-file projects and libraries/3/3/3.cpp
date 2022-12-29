
#include <iostream>
#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"
#include "5.h"
#include "6.h"
#include "7.h"
#include "8.h"
#include "9.h"

int main()
{
	Triangle t1;
	rightTriangle t2;
	isoscelesTriangle t3;
	equilateralTriangle t4;
	qadrilateral q1;
	square q2;
	parallelogram q3;
	rhombus q4;
	Triangle* pt1 = &t1;
	Triangle* pt2 = &t2;
	Triangle* pt3 = &t3;
	Triangle* pt4 = &t4;
	qadrilateral* pq1 = &q1;
	qadrilateral* pq2 = &q2;
	qadrilateral* pq3 = &q3;
	qadrilateral* pq4 = &q4;
	pt1->print_info(pt1);
	pt2->print_info(pt2);
	pt3->print_info(pt3);
	pt4->print_info(pt4);
	pq1->print_info(pq1);
	pq2->print_info(pq2);
	system("pause");
	pq3->print_info(pq3);
	pq4->print_info(pq4);
}

