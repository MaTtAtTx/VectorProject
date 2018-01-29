//
//  Controller.cpp
//  VectorProject
//
//  Created by Johnsen, Matthew on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    vector<int> ints;
    ints.push_back(15);
    ints.push_back(17);
    ints.push_back(247);
    ints.push_back(124);
    for (int i = 0; i < ints.size(); i++)
    {
        cout << "The value spot " << i + 1 << " is " << ints[i] << endl;
    }
    
    vector<string> foods;
    foods.push_back("Bread");
    foods.push_back("Cinnamon Rolls");
    foods.push_back("Chicken");
    foods.push_back("Beans");
    for (int i = 0; i < foods.size(); i++)
    {
        cout << "The value spot " << i + 1 << " is " << foods[i] << endl;
    }
}
