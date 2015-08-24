#include"AtdWrapper.h"


bool AtdWrapper::instanceFlag = false;
AtdWrapper *AtdWrapper::atdwrapper = NULL;
AtdWrapper *AtdWrapper::getAtdWrapper(){

     if(!instanceFlag){
          atdwrapper = new AtdWrapper();
          instanceFlag = true;
          return atdwrapper;
     }
     else{
          return atdwrapper;

     }
 }

void AtdWrapper::insert(int a, string s){
     cout << "Function called:" << endl;
     umap.insert(make_pair(a,s)); 
 //    cout << __FUNCTION__ << endl;

}

void AtdWrapper::printmap(){

     for(auto& p: umap)
          cout << " " << p.first << " => " << p.second << "\n";

}

