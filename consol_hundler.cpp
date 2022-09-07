// Copyright (c) IM_EMBEDDED_DEV. All rights reserved.
// Licensed under SPDX short identifier: LGPL-2.1.

#include <iostream>
#include <iomanip>

#include "consol_color.h"
#include "consol_hundler.h"

/*this function hundle the color of the output string 
   First arg : string to be colored
   Second arg : color for the output string defined in consol_color.h 
   Third arg : color for the next line ( default Reset_color)
*/
void consol_hundler::Color_Print(std::string str, std::string color_start, std::string color_stop ="\033[0m\t\t")
{
   std::cout<<color_start+str+color_stop<<std::endl;
}

void consol_hundler::Format_Print(std::string str , std::string s, char fill , int size_frnt)
{
    char i = s[0];
     switch (i)
     {
     case 'l':
        std::cout<<std::left<<str<<std::setfill(fill)<<std::setw(size_frnt)<<std::endl;
        break;
     case 'r':
        std::cout<<std::right<<str<<std::setfill(fill)<<std::setw(size_frnt)<<std::endl;
        break;
     }
     
    
}