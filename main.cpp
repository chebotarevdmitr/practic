#include <iostream>
using namespace std;
//piramida iz ***
int main(){
	int rows =0;
	cout<<"Enter quantity rows ;\n";
	cin>>rows;
	for(int i=1;i<=rows;++i){
		for(int j=1;j<=i;++j){
			cout<<"* ";
		}
		cout<<"\n";
	}
	
	system("pause>0");
	return 0;
}