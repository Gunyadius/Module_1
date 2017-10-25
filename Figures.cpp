//
//  Figures.cpp
//  Module1
//
//  Created by Сергей Глушенков on 25.10.17.
//  Copyright © 2017 Сергей Глушенков. All rights reserved.
//

#include "Figures.hpp"
#include <iostream>
using namespace std;

void X::Draw()
{
    cout<<"\t"<<"*"<<"\n"<<"*"<<"\t"<<"*"<<"\n"<<"\t"<<"*"<<"\n";
}
void Trapezia::Draw()
{
    cout<<"\t"<<"\t"<<"*"<<"*"<<"*"<<"\n";
    cout<<"\t"<<"*"<<"\t"<<"t"<<"*"<<"\n";
    for (int i=0;i<8;i++)
        cout<<"*";
    cout<<"\n";
}
