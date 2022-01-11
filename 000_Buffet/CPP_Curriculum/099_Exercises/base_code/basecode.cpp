// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	//Make the first loop print out numbers from 5 until 25.
	int x = 5;          			//starting at five
	while(true){
		cout << x << endl;          //prints out x (5)
		if(x == 25){
			break;
		}
		x = x + 1;      			//5 starts adding up (5,6,7,8,9,...25)
	}
	
	//Make the second loop print out numbers 15 to 5.
	cout << endl;   			//to make line
	x = 15;
	while (true){
		cout << x << endl;
		if (x == 5){
			break;
		}
		x = x - 1;
	}
    //goal: to get from 5 to 25
    cout << endl;   
    for(int i = 5; i <= 25; i = i + 1){
    	cout << i << endl;
    }
    //goal: to get from 15 to 5
    cout << endl;   
    for(int i = 15; i >= 5; i = i - 1){
    	cout << i << endl;
    	
     cout << endl;

    }
    
    //loop get from 123 to 200 and add every two (123, 125, 127,...200
    int a = 123;
    while(true){
    	if (a >= 200){
    		break;
    	}
    	cout << a << endl;
    	a = a + 2;
    }
    
    cout << endl;
    for(int z = 123; z <= 200; z = z + 2){
    	cout << z << endl;
    }
    
    //from 1253 to 55 every 7
    cout << endl;

    cout << endl;
    for(int b = 1253; b >= 55; b = b - 7){
    	cout << b << endl;
    }
}
