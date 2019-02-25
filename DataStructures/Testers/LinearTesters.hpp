//
//  LinearTesters.hpp
//  DataStructures
//
//  Created by Spaulding, Bryson on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinearTesters_hpp
#define LinearTesters_hpp

#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"

#include "../Model/Linear/LinkedList.hpp"
#include "../Model/Linear/Stack.hpp"
#include "../Model/Linear/Queue.hpp"

#include <iostream>
using namespace std;

class LinearTester
{
public:
    void testVsSTL();
    void testVsStack();
    void testVsQueue();
    void testVsDouble();
};

#endif /* LinearTesters_hpp */
