/* Copyright (c) IM_Embedded_Dev


    License : SPDX short identifier: LGPL-2.1

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software,

    AUTHOR: Islem Messaoudi

*/


#include <iostream>
#include <iomanip>
#include <exception>

#include "consol_color.h"
#include "consol_hundler.h"

#include "numeric.h"


/*numeric class object that perform calculation*/
numeric num;

/*consol_hundler object that*/
consol_hundler cons_hundler;

/*exception structure */
struct Invalid_input : public std::exception
{
    const char * what () const throw ()
    {   
        /* cleaning cin buffer after the invalid input*/
        std::cin.clear();
        std::cin.ignore();
        std::cout<<"cleaning buffer"<<std::endl;


        /*returnig the type of the exception*/
        return "\x1B[33mRe-type the correct input !!\033[0m\t\t";
        
    }
};



int main()
{   
    /*clearing the terminal screen */
    std::system("cls");
    /*asynchronius mode for std::cin */
    std::ios_base::sync_with_stdio(false);





    /* Sipmle logo made out of the cout() function*/


    std::cout<<"                 \x1B[34m___________________"<<std::endl;
    std::cout<<"                /  ________________/"<<std::endl;
    std::cout<<"               /  /                                                                              "<<std::endl;
    std::cout<<"              /  /                     ________      ___          ________     ___   ___    ___ "<<std::endl;
    std::cout<<"             /  /                     / ____  /     /  /         /  _____/    /  /  /  /   /  /"<<std::endl;
    std::cout<<"            /  /                    /  /___/  /    /  /         /  /         /  /  /  /   /  /"<<std::endl;
    std::cout<<"           /  /                   /  _______  /   /  /         /  /         /  /  /  /   /  /"<<std::endl;
    std::cout<<"          /  /______________    /  /      /  /   /  /_____    /  /_____    /  /__/  /   /  /_____"<<std::endl;
    std::cout<<"         /_________________/   /__/      /__/   /________/   /________/   /________/   /________/\033[0m\t\t"<<std::endl;
    std::cout<<"\n\n\n\n"<<std::endl;




    /*Simple intro description of the calcul application with modified color
    with the use of our costumized function from the consol_hundler class */
 

    cons_hundler.Color_Print("                               This is a simple calculator console application",Green_FG,Reset_Color);
    cons_hundler.Color_Print("                                    Please enter the operation to perform.",Green_FG,Reset_Color);
    cons_hundler.Color_Print("                    Make sure to enter the correct format for the input, here is the accepted format",Green_FG,Reset_Color);
    cons_hundler.Color_Print("                                  Format: a+b | a-b | a*b | a/b | a%b | a^b ",Green_FG,Reset_Color);
    
    /* Initializing the output of the mathematical equation */
    double resultat = 0.0;

    /* Defining the type of the input*/
    double input_1;
    char input_2;
    double input_3;

    /*main loop where the mathematical equation will be evaluated */
    while(true)
    {

    
    try 
        {
        std::cin>>input_1;
        std::cin>>input_2;
        std::cin>>input_3;
        if(!(std::cin.good()))
            {
            throw Invalid_input();
            }
        
        resultat  = num.calculator(input_1,input_2,input_3);
        
        std::cout<<std::left<<"Resultat ="<<std::setfill(' ')<<std::setw(20)<<std::right<<resultat<<std::endl;
        }
    
    catch(Invalid_input& e)
        {
        std::cout<<"\x1B[31mInput exception caught\033[0m\t\t"<<std::endl;
        std::cout<<e.what()<<std::endl;
        }

        
    }
    
}

