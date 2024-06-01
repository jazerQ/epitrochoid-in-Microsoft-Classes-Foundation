#pragma once
#include "ScaleShift.h"
#include <vector>

class CCalc :
	public CScaleShift
{
public:
	CCalc();
	~CCalc();
protected:
	double m_R;
	double m_Rk;
	double m_H;
public:
	CPoint GetPoint(float i);
	void SetPar(double R, double Rk, double H) { 
		m_R = R; 
		m_Rk = Rk; 
		m_H = H; 
	};
	size_t GetVseTochki(std::vector<CPoint> &vecPt);
};

