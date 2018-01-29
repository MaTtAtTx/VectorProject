//
//  Controller.cpp
//  VectorProject
//
//  Created by Johnsen, Matthew on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    this->favoriteNumber = 17;
    this->foodWord = "Chocolate";
}

void Controller :: start()
{
    vector<int> ints;
    ints.push_back(15);
    ints.push_back(12);
    ints.push_back(247);
    ints.push_back(124);
    ints.push_back(favoriteNumber);
    for (int i = 0; i < ints.size(); i++)
    {
        cout << "The value spot " << i + 1 << " is " << ints[i] << endl;
    }
    
    vector<string> foods;
    foods.push_back("Bread");
    foods.push_back("Cinnamon Rolls");
    foods.push_back("Chicken");
    foods.push_back("Beans");
    foods.push_back(foodWord);
    for (int i = 0; i < foods.size(); i++)
    {
        cout << "The value spot " << i + 1 << " is " << foods[i] << endl;
    }
}
