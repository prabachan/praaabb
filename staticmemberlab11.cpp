#include<iostream>
using namespace std;

class lol{
public:
 static int count;
  lol()
  {
  count++;
  }
   int display()
  {
      return count;
  }
  };

int lol::count=0;

int main()
{
lol l1,l2,l3;
cout<<"the count is "<<l1.display()<<endl;
cout<<"the count is "<<l2.display()<<endl;
cout<<"the count is "<<l3.display()<<endl;
return 0;
}

