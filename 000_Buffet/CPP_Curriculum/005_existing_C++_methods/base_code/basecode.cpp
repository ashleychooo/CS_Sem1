// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char symbol;
	cout << "Please enter the symbol" << endl;
	cin >> symbol;

	int length = 0;
	cout << "Please enter the length" << endl;
	cin >> length;

	char cond;
	char horizontal = 'h';
	char vertical = 'v';
	char diagonal = 'd';
	cout << "Please enter h for horizontal v for vertical and d for diagonal" << endl;
	cin >> cond;
	if(horizontal == cond){
	for(int cond = 1; cond <= length; cond = cond + 1) {
	cout << symbol;
	}
	}
	if(vertical == cond){
	for(int cond = 1; cond <= length; cond = cond + 1) {
	cout << symbol << endl;
	}
	}
	if(diagonal == cond){
	for(int cond = 1; cond <= length; cond = cond + 1){
	gotoxy(cond ,cond + 7 );
	cout << symbol << endl;
	}

	}

}
