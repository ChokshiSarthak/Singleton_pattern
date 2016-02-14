
#include"singleton.h"

int main()
{

     Singleton *s;
     s = Singleton::getSingleton();
     s->insert(5,"sarthak");
     s->insert(8,"schokshi");
     s->printmap();

     return 0;

}


