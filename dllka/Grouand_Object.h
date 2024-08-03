#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"

#ifndef WOKRBCH_LIB
#define WOKRBCH_LIB_API __declspec(dllexport)
#else
#define WOKRBCH_LIB_API __declspec(dllimport)
#endif

class Grouand_Object : public Trans_Equip
{
public:
	double Time_To_Rest;
	WOKRBCH_LIB_API Grouand_Object(double Time_To_Rest_OUT, std::string TE_Name_OUT2, std::string TE_Type_OUT2, double TE_Speed_OUT2) : Trans_Equip (TE_Name_OUT2, TE_Type_OUT2,TE_Speed_OUT2), Time_To_Rest(Time_To_Rest_OUT) {};
};