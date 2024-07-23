#include <iostream>
using namespace std;
//использование инкремета идекремента 
int main(){
	int a =0,b=0;
	int i=4,j=4;
	cout <<"Znachenie peremennyh v samom nachale \n";
	cout <<"i= "<<i<<endl;
	cout <<"j= "<<j<<endl;
	
	cout<< "znachenie posle n =i++ \n";
	a=i++;
	cout<<"a= "<<a<<"\n";
	cout<<"i= "<<i<<"\n";
	
	cout<< "znachenie posle m = ++j \n";
	b=++j;
	cout<<"b= "<<b<<"\n";
	cout<<"j= "<<j<<"\n";
	system("pause>0");
	return 0;
}