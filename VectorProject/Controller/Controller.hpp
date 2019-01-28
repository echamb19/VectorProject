//
//  Controller.hpp
//  VectorProject
//
//  Created by Chambers, Eden on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
using namespace std;

class Controller
{
private:
    vector<int> numList = {5, 4, 6, 4, 7};
    vector<string> wordList = {"cat", "dog", "rat", "bird"};
    string words [4];
public:
    void start();
};

#endif /* Controller_hpp */
