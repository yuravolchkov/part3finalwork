#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "Air_Object.h"

#ifndef WOKRBCH_LIB
#define WOKRBCH_LIB_API __declspec(dllexport)
#else
#define WOKRBCH_LIB_API __declspec(dllimport)
#endif

class Eagle : public Air_Object
{
public:
	double Eagle_1st_coef = 0.94, Eagle_Distance;
	WOKRBCH_LIB_API Eagle(double Distance_OUT) : Eagle_Distance(Distance_OUT), Air_Object(1, "Îð¸ë", "Air", 8) {};
	WOKRBCH_LIB_API void Show_Data() override;
	WOKRBCH_LIB_API double Total_time() override;
};