#include<iostream>
using namespace std;

int main(int argc, char** argv){
	cout<<"you entered"<< argc << "arguments"<<endl;
	for(int i=0; i<argc; ++i)
		cout<< argv[i]<<endl;
		return 0;

	
}
