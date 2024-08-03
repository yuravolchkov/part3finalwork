#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "Grouand_Object.h"

#ifndef WOKRBCH_LIB
#define WOKRBCH_LIB_API __declspec(dllexport)
#else
#define WOKRBCH_LIB_API __declspec(dllimport)
#endif

class Camel : public Grouand_Object
{
public:
	double Cam_1st_Rest_Time =5, Cam_2nd_Rest_Time =8, Cam_Distance;
	WOKRBCH_LIB_API Camel(double Distance_OUT) : Cam_Distance(Distance_OUT), Grouand_Object(30, "Верблюд", "Ground", 10) {};
	WOKRBCH_LIB_API void Show_Data() override;
	WOKRBCH_LIB_API double Total_time()override;
};