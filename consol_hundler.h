// Copyright (c) IM_EMBEDDED_DEV. All rights reserved.
// Licensed under SPDX short identifier: LGPL-2.1.
#include <ios>
#include <iostream>

/*This class hundle the format and coloring of the output*/
/*It contain two function */
/*Color_Print() : to color the output string */
/*Format_Print() : to chane the format of the output string*/

class consol_hundler {
    public:
        void Color_Print(std::string str , std::string color_start, std::string color_stop);
        void Format_Print(std::string str , std::string s , char fill, int size_fr);
};

