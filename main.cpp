#include <iostream>
#include "sLinkList.h"
#include "stdlib.h"
#include "sLinkList.cpp"
using namespace std;

int main()
{
    sLinkList<int> slinklist1;
slinklist1.create();
int x,y;
cin>>x>>y;
slinklist1.erase(x,y);
cout<<endl<<slinklist1.currentLength<<endl;
slinklist1.traverse();
system("pause");
    return 0;
}
