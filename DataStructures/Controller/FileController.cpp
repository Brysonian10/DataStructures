//
//  FileController.cpp
//  DataStructures
//
//  Created by Spaulding, Bryson on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector <CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    //if the file exists at the path
    if(dataFile.is_open())
    {
        //keep reading until you are at the end of the file.
        while (!dataFile.eof())
        {
            //grab each line form the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
        //exclude header row
            if  (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

vector<Music> FileController :: musicDataToVector(string filename)
{
    std :: vector <Music> musicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    //if the file exists at the path
    if(dataFile.is_open())
    {
        //keep reading until you are at the end of the file.
        while (!dataFile.eof())
        {
            //grab each line form the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //exclude header row
            if  (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicVector;
}

LinkedList<CrimeData> FileController :: readDataToList(string filename)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at the path
    if (dataFile.is_open())
    {
        //keep reading until you are at the end of the file
        while (!dataFile.eof())
        {
            //grab each line form CSV separated b the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //exclude header row
            if (rowCount != 0)
            {
                //create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if (currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimes;
}

LinkedList<Music> FileController :: musicDataToList(string filename)
{
    LinkedList<Music> music;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at the path
    if (dataFile.is_open())
    {
        //keep reading until yoou are at the end of the file
        while (!dataFile.eof())
        {
            //grab each line form CSV separated b the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //exclude header row
            if (rowCount != 0)
            {
                //create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if (currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    music.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return music;
}

