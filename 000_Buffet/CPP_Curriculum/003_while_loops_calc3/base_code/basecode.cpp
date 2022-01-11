// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int a = 0;
	int b = 0;
			
	cout<<"Enter a number"<<endl;
	cin>>a;
	cout<<"Enter another number"<<endl;
	cin>>b;
	cout<<"What operation do you want to use?"<<endl;
	char c;
	cin >> c;
	if(c =='+'){cout<<"Your answer is: " <<a+b;}
	else if(c =='-'){cout<<"Your answer is: " <<a-b;}
	else if(c =='*'){cout<<"Your answer is: " <<a*b;}
	else if(c=='/'){cout<< "Your answer is: " <<a/b;}
	else{cout<< "There is an error, please check your operation" <<endl;}
		
	int d = 0;
	char e = 'q';
	while(true){
		cout << " Would you like to continue? enter y to continue and e to end";
		cin >> e;
		if(e=='e'){
			cout << "Thank you for your time";
			break;
		}
				cout << "Please enter a number"<<endl;
	cin>>a;
	cout<<"Enter another number"<<endl;
	cin>>b;
	cout<<"What operation do you want to use?"<<endl;
	char c;
	cin >> c;
	if(c =='+'){cout<<"Your answer is: " <<a+b;}
	else if(c =='-'){cout<<"Your answer is: " <<a-b;}
	else if(c =='*'){cout<<"Your answer is: " <<a*b;}
	else if(c=='/'){cout<< "Your answer is: " <<a/b;}
	else{cout<< "There is an error, please check your operation" <<endl;}
	
		
	}
}
