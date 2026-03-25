#include<iostream>
using namespace std;


int main (){
	
	int a[50],i,size=0;
	
	cout<<"Enter array size";
	cin>>size;
	
	for(i=0;i<size;i++){
		cout<<"a"<<[i]<<endl;
		cin<<a[i];
		
		if(a[i] % 2 == 0){
			
			cout<<"Even number is :"<<a[i] ;
		}
	}
	
	
	
	
	
	
	return 0;
}
