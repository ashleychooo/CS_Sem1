// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x = 0;
	int y = 0;
	
	cout<<"Enter a number"<<endl;
	cin>>x;
	cout<<"Enter another number"<<endl;
	cin>>y;
	char z;
	cout<<"What operation do you want to use? "<<endl;
	cin >> z;
	if(z =='+'){cout<<"Your answer is: " <<x+y;}
	else if(z =='-'){cout<<"Your answer is: " <<x-y;}
	else if(z =='*'){cout<<"Your answer is: " <<x*y;}
	else if(z=='/'){cout<< "Your answer is: " <<x/y;}
	else{cout<< "There is an error, please check your operation" <<endl;}
}
