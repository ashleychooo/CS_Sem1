// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int width = 0;
	cout << "Enter box width: ";
	cin >> width;
	
	char b = 0;
	cout << "Enter border char: ";
	cin >> b;
	
	int height = 0;
	cout << "Enter box height: ";
	cin >> height;
	
	for(int x = 1; x <= height; x++){
		for(int y = 1; y <= width; y++){
			cout << "" << b;
		}
		cout << endl;
	}
	
	
}