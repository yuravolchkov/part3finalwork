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

class Shoes : public Grouand_Object
{
public:
	double Shoes_1st_Rest_Time = 10, Shoes_2nd_Rest_Time = 5, Shoes_Distance;
	WOKRBCH_LIB_API Shoes(double Distance_OUT) : Shoes_Distance(Distance_OUT), Grouand_Object(60, "Ботинки - вездеходы", "Ground", 6) {};
	WOKRBCH_LIB_API void Show_Data() override;
	WOKRBCH_LIB_API double Total_time() override;
};