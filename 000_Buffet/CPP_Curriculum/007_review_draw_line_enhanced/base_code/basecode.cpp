// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int length;
	cout << "Enter length: ";
	cin >> length;
	
	char s;
	cout << "Enter symbol: ";
	cin >> s;
	
	int a;
	cout << "Enter x coordinate: ";
	cin >> a;
	
	int b;
	cout << "Enter y coordinate: ";
	cin >> b;
	
	
	for(int a = 1; a <= length; a++){
		gotoxy(a,b);
		cout << ""  << s;
	}


	
}