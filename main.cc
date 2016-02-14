#include "singleton.h"

int main()
{

     Singleton *s1;
     s1 = Singleton::getSingleton();
     s1->insert(5,"string1");
     s1->insert(8,"string2");
     s1->printmap();

     return 0;

}


