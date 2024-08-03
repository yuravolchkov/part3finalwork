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

class Centaur : public Grouand_Object
{
public:
	double Cent_1st_Rest_Time = 2, Cent_Distance;
	WOKRBCH_LIB_API Centaur(double Distance_OUT) : Cent_Distance(Distance_OUT), Grouand_Object(8, "Кентавр", "Ground", 15) {};
	WOKRBCH_LIB_API void Show_Data() override;
	WOKRBCH_LIB_API double Total_time() override;
};	