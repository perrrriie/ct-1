// PARNEET KAUR
// 2010991965
// SET-5
// Q2

#include<iostream>
using namespace std;

int main(){
	int n,i1,i2,sum=0;
	cout<<"Enter length of array:";    //Entering length
	cin>>n;
	int arr[n];
	cout<<"Enter array elements:";   //Entering array elements
	for(int i=0;i<n;i++){
		cin>>arr[i];
}
	
	for(int i=0;i<n;i++){  //traversing through the array
		for(int j=i;j<n;j++){
			sum+=arr[j];
			if(sum==0){
			for(int k=i;k<=j;k++){
				if(k==j){
					cout<<arr[k];
				}
		else{
			cout<<arr[k]<<",";
		}
}
cout<<endl;
}
	}
	sum=0;
}


	return 0;
}
