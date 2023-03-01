#include <iostream>
using namespace std;

int prime(int n);
int main()
{
  	int num,res=0;
  	cout<<"\nENTER A NUMBER: ";
  	cin>>num;
  	res=prime(num);
  	if(res==0)
              	cout<<num <<" IS A PRIME NUMBER"<<num;
  	else
              	cout<<num <<" IS NOT A PRIME NUMBER"<<num;
}
int prime(int n)
{
  	int i;
  	for(i=2;i<=n/2;i++)
  	{
              	if(n%i!=0)
                          	continue;
              	else
                          	return 1;
  	}
  	return 0;
}
