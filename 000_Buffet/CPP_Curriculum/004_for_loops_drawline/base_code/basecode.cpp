// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
 
	char symbol;
	cout<<"Please enter the symbol"<<endl;
	cin>>symbol;

	int length = 0;
	cout<<"Please enter the length"<<endl;
	cin>>length;

	char cond;
	char horizontal = 'h';
	char vertical = 'v';
	cout<<"Please enter h for horizontal and v for vertical"<<endl;
	cin>>cond;
	if(horizontal==cond){
	for(int cond = 1; cond <=length; cond = cond + 1){
	cout<<symbol;
	}
	}
	if(vertical==cond){
	for(int cond = 1; cond <=length; cond = cond + 1){
	cout<<symbol<<endl;
	}
	
	
	}
}
