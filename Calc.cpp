#include "stdafx.h"
#include "Calc.h"
#define _USE_MATH_DEFINES
#include "math.h"

CCalc::CCalc()
{
}


CCalc::~CCalc()
{
}

CPoint CCalc::GetPoint(float t)
{
	double x, y;
	x = (m_R + m_Rk) * cos(t) - m_H * cos(((m_R + m_Rk) * t) / m_Rk);
	y = (m_R + m_Rk) * sin(t) - m_H * sin(((m_R + m_Rk) * t) / m_Rk);
	return ToGraph(x,y);
}

size_t CCalc::GetVseTochki(std::vector<CPoint>& vecPt)
{
	int numPoints = 250;
	vecPt.clear();
	float t = 0.05f;
	float stopT = 2 * M_PI * m_Rk;
	for (float i = t; i < stopT ; i+=t)
	{
		CPoint pt = GetPoint(i);
		vecPt.push_back(pt);
	}
	return vecPt.size();
}

