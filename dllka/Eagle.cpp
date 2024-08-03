#include "iostream"
#include "string"
#include "Trans_Equip.h"
#include "Air_Object.h"
#include "Eagle.h"

	void Eagle::Show_Data() 
	{
		std::cout << TE_Name << " ";
	}
	
	double Eagle::Total_time() 
	{
		return Eagle_Distance * Eagle_1st_coef / TE_Speed;
	}