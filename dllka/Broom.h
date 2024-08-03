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

class Broom : public Air_Object
{
public:
	double Broom_1st_coef = 0.01, Broom_Distance;
	WOKRBCH_LIB_API Broom(double Distance_OUT) : Broom_Distance(Distance_OUT), Air_Object(1, "Метла", "Air", 20) {};
	WOKRBCH_LIB_API void Show_Data() override;
	WOKRBCH_LIB_API double Total_time() override;
};