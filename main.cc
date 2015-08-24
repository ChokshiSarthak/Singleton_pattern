
#include"AtdWrapper.h"

int main()
{

     AtdWrapper *atd1;
     atd1 = AtdWrapper::getAtdWrapper();
     atd1->insert(5,"sarthak");
     atd1->insert(8,"schokshi");
     atd1->printmap();

     return 0;

}


