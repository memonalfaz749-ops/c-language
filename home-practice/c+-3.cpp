#include<iostream>
using namespace std;

int main (){
	
	int first,last,i;
	
	cout<<"Enter first year :";
	cin>>first;
	
	cout<<"enter last year :";
	cin>>last;
	
	cout<<"leap year between given two years are :";
	
	for(i=first;i<=last;i++){
		if(i % 4 == 0){
			cout<<i<<" ";
		}
	}
	
	
	return 0;
}
