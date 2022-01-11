// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	gotoxy(1,2);
	cout << "                                  <<\\           />                 " <<endl;
	cout << "                                     \\>        <</                " <<endl;
	cout << "                                    <<\\      />>                   " <<endl;
	cout << "                                       \\>    </                   " <<endl;
	cout << "                                    . . . . . . .              " <<endl;
	cout << "    ^                               .            .             " << endl;
	cout << "   < >                               .  --   -- .              " << endl;
	cout << "   ***                                .        .               " << endl;
	cout << "   ***                  \\\\//           .  --  .                " << endl;
	cout << "  *****               @@@@@@@@          ......                 " << endl;
	cout << " *******              @@@@@@@@                               " << endl;
	cout << "   | |                @@@@@@@@                               "  << endl;

	cout << endl;
	char symbol;
	for(int i = 0; i < 5; i++){
		gotoxy(3,5);
		cout << symbol << endl;
		sleep(1);
		gotoxy(3,5);
		cout << "o" << endl;
		gotoxy(5,6);
		cout << symbol << endl;
		sleep(1);
		gotoxy(5,6);
		cout << "o" << endl;
		gotoxy(6,5);
		cout << symbol << endl;
		sleep(1);
		gotoxy(6,5);
		cout << "o" << endl;
	}
	
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;

	int width = 0;
	cout << "Enter box width: ";
	cin >> width;
	
	char z = 0;
	cout << "Enter border char: ";
	cin >> z;
	
	int height = 0;
	cout << "Enter box height: ";
	cin >> height;
	
	
	for(int x = 1; x <= height; x++){
		for(int y = 1; y <= width; y++){
			gotoxy(y+width,x+height);
			if(x == 1 || y == 1 || x == height || y == width){
			cout << z << endl;
			}
			else{cout << " ";}
		
		}
	}



}
