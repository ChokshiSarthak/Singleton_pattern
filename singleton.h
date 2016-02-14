#ifndef SINGLETON_H
#define SINGLETON_H

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


class Singleton{

private:
     static bool instanceFlag;
     static Singleton *s;
     unordered_map<int,string>umap; 
     Singleton(){}

public:

     static Singleton *getSingleton();
     void insert(int,string);
     void printmap();
     ~Singleton(){instanceFlag = false;}

};


#endif 


