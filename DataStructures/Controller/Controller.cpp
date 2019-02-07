//
//  Controller.cpp
//  DataStructures
//
//  Created by Spaulding, Bryson on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App" << endl;
}

void Controller :: testFiles()
{
    vector<Music> musicVector = FileController :: musicDataToVector("../Resources/music.csv");
    for(int index = 0; index < musicVector.size(); ++index)
    {
    cout << index << ": contents are: " << musicVector[index] << endl;
    }
}
