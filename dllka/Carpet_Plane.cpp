#include "iostream"
#include "string"
#include "Trans_Equip.h"
#include "Air_Object.h"
#include "Carpet_Plane.h"

	void Carpet_Plane::Show_Data() 
	{
		std::cout << TE_Name << " ";
	}
	
	double Carpet_Plane::Total_time()
	{
		double Tt;
		if (CP_Distance < 1000)
		{
			Tt = CP_Distance / TE_Speed;
			std::cout << CP_Distance << std::endl;
		}
		else if (CP_Distance >= 1000 && CP_Distance < 5000)
		{
			Tt = CP_Distance * CP_2nd_coef / TE_Speed;
			std::cout << CP_Distance * CP_2nd_coef << std::endl;
		}
		else if (CP_Distance >= 5000 && CP_Distance < 10000)
		{
			Tt = CP_Distance * CP_3rt_coef / TE_Speed;
			std::cout << CP_Distance * CP_3rt_coef << std::endl;
		}
		else if (CP_Distance >= 10000)
		{
			Tt = CP_Distance * CP_4th_coef / TE_Speed;
			std::cout << CP_Distance * CP_4th_coef << std::endl;
		}
		return Tt;
	}