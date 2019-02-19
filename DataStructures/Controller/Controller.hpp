//
//  Controller.hpp
//  DataStructures
//
//  Created by Spaulding, Bryson on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "FileController.hpp"
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "../Testers/LinearTesters.hpp"

using namespace std;

class Controller
{
public:
    void start();
    void testLinear();
    
private:
    void usingNodes();
    
    
    
};

#endif /* Controller_hpp */
