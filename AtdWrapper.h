/*AtdWrapper class to call Atd Api */
#ifndef ATDWRAPPER_H
#define ATDWRAPPER_H

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


class AtdWrapper{

private:
     static bool instanceFlag;
     static AtdWrapper *atdwrapper;
     unordered_map<int,string>umap; 
     AtdWrapper(){}

public:

     static AtdWrapper *getAtdWrapper();
     void insert(int,string);
     void printmap();
     ~AtdWrapper(){instanceFlag = false;}

};


#endif 


