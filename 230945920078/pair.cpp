#include<iostream>
using namespace std;
int main(){
	int pair_count=0, arr[4]={1,5,7,1};
	for(int i=0; i<4; i++){
		for(int j=i; j<4; j++){
			if(arr[i]+arr[j]== 6){
				pair_count++;
			}
		}
	}
	cout<<pair_count;
}
