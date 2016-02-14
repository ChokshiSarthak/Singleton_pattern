#include"singleton.h"


bool Singleton::instanceFlag = false;
Singleton *Singleton::s = NULL;
Singleton *Singleton::getSingleton(){

     if(!instanceFlag){
          s = new Singleton();
          instanceFlag = true;
          return s;
     }
     else{
          return s;

     }
 }

void Singleton::insert(int a, string s){
     cout << "Function called:" << endl;
     umap.insert(make_pair(a,s)); 
 //    cout << __FUNCTION__ << endl;

}

void Singleton::printmap(){

     for(auto& p: umap)
          cout << " " << p.first << " => " << p.second << "\n";

}

