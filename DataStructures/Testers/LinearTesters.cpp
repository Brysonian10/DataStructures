//
//  LinearTesters.cpp
//  DataStructures
//
//  Created by Spaulding, Bryson on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTesters.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/bspa6593/Documents/C++ Workspace/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/bspa6593/Documents/C++ Workspace/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerSTL.startTimer();
    crimes[randomIndex];
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL random retrieval: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node random retrieval : " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
}

void LinearTester :: testVsStack()
{
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/bspa6593/Documents/C++ Workspace/DataStructures/DataStructures/Resources/crime.csv");
    
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/bspa6593/Documents/C++ Workspace/DataStructures/DataStructures/Resources/crime.csv");
    
    Stack<CrimeData> crimeStack;
    for (int index = 0; index < 10; index++)
    {
        crimeStack.add(crimes[index]);
    }
}

void LinearTester :: testVsQueue()
{
    
}

void LinearTester :: testVsDouble()
{
    
}
