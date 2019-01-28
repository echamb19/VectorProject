//
//  Controller.cpp
//  VectorProject
//
//  Created by Chambers, Eden on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Welcome to the Vector App" << endl;
    
    for (int n = 0; n < numList.size(); n++)
    {
        cout << numList[n] << endl;
    }
    
    for (int n = 0; n < wordList.size(); n++)
    {
        cout << wordList[n] << endl;
    }
    
    for (int n = 0; n < 4; n++)
    {
        words[n] = wordList[n];
        cout << words[n] << endl;
    }
}
