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
    
    cout << "This is the STL Read time: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController ::  musicDataToVector("/Users/bspa6593/Documents/C++ Workspace/DataStructures/DataStructures/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("Users/bspa6593/Documents/C++ Workspace/DataStructures/DataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
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
    vector<Music> tunez = FileController ::  musicDataToVector("/Users/bspa6593/Documents/C++ Workspace/DataStructures/DataStructures/Resources/music.csv");
    LinkedList<Music> musicList = FileController :: musicDataToList("Users/bspa6593/Documents/C++ Workspace/DataStructures/DataStructures/Resources/music.csv");
    
    Queue<Music> musicQueue;
    for (int index = 0; index < 10; index++)
    {
        musicQueue.add(tunez[index]);
    }
    
}

void LinearTester :: testVsDouble()
{
    
    Timer listTimer, circularListTimer;
    
    listTimer.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/bspa6593/Documents/C++ Workspace/DataStructures/DataStructures/Resources/crime.csv");
    listTimer.stopTimer();
    
    circularListTimer.startTimer();
    CircularList<CrimeData>;
    circularListTimer.stopTimer();
    
    
}
