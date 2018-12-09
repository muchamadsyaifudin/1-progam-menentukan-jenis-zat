#include <iostream>
using namespace std;

int main ()
{
	int a;
	cout<<"masukan suhu dalam derajat celcius :";
	cin>>a;
	   if (a<=0)
	   {
	   	cout<<"zat dalam bentuk padat"<<endl;
	   }
	   else
	   	if((a>0) && (a<100))
	   	{
	   		cout<<"zat dalam bentuk cair"<<endl;
	   	}
	   	else
	   		cout<<"zat dalam bentuk gas"<<endl;

return 0;	   	
}
