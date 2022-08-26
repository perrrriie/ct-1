// PARNEET KAUR
// 2010991965
// SET-5
// Q1

#include<iostream>
using namespace std;

int main(){
	int n,target,sum=0;
		cout<<"Enter length of array and target sum:"   ; //Entering length and target sum
	cin>>n>>target;
	int nums[n];
	for(int i=0;i<n;i++){
		cin>>nums[i];
}

for(int i=0;i<n;i++){
	for(int j=i;j<n;j++){
		sum+=nums[j];
		if(sum==target){
			for(int k=i;k<=j;k++){
				if(k==j){
					cout<<nums[k];
				}
		else{
			cout<<nums[k]<<",";
		}
}
cout<<endl;
}
	}
	sum=0;
}

	return 0;
	
}
