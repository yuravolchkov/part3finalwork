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

class Sup_Camel : public Grouand_Object
{
public:
	double Sup_Cam_1st_Rest_Time = 5, Sup_Cam_2nd_Rest_Time = 6.5, Sup_Cam_3rd_Rest_Time = 8, Sup_Cam_Distance;
	WOKRBCH_LIB_API Sup_Camel(double Distance_OUT) : Sup_Cam_Distance(Distance_OUT), Grouand_Object(10, "Верблюд - быстроход", "Ground", 40) {};
	WOKRBCH_LIB_API void Show_Data() override;
	WOKRBCH_LIB_API double Total_time() override;
};