//
//  FileController.hpp
//  DataStructures
//
//  Created by Spaulding, Bryson on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"
#include "../Model/Linear/LinkedList.hpp"
#include "../Model/NonLinear/BinarySearchTree.hpp" //ignore me
#include "../Model/Linear/Array.hpp"

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    static BinarySearchTree<CrimeData> readDataToTree(string filename); //ignore
    
    static vector<Music> musicDataToVector(string filename);
    
    static Array<Music> musicDataToArray(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    static BinarySearchTree<Music> musicDataToTree(string filename);//keep ignoring
    
};

#endif /* FileController_hpp */
