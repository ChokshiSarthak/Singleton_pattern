#include "singleton.h"

int main()
{

     Singleton *s1;
     s1 = Singleton::getSingleton();
     s1->insert(5,"sarthak");
     s1->insert(8,"schokshi");
     s1->printmap();

     return 0;

}


