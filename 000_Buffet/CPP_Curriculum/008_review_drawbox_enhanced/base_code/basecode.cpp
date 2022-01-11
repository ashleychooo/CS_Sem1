// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

	int width = 0;
	cout << "Enter box width: ";
	cin >> width;
	
	char z = 0;
	cout << "Enter border char: ";
	cin >> z;
	
	int height = 0;
	cout << "Enter box height: ";
	cin >> height;
	
	int a;
	cout << "Enter x coordinate: ";
	cin >> a;
	
	int b;
	cout << "Enter y coordinate: ";
	cin >> b;
	
	
	for(int x = 0; x <= height-1; x++){
		for(int y = 0; y <= width-1; y++){
			gotoxy(a+y,b+x);
			cout << z;
			
		}
	cout << "" << z;
	}
	

	
}
