#include "singleton.h"

int main()
{

     Singleton *s1;
     s1 = Singleton::getSingleton();
     s1->insert(5,"abc");
     s1->insert(8,"xyz");
     s1->printmap();

     return 0;

}


