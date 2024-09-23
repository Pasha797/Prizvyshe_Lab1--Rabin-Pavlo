#include <iostream>

using namespace std; 

int main() {
	
	
	double a, b, c;
	
	cout << "Введіть довжину першої сторони трикутника: ";
    cin >> a;
    cout << "Введіть довжину другої сторони трикутника：";
    cin >> b;
    cout << "Введіть довжину третьої сторони трикутника: ";
    cin >> c;
    
    if ( a + b > c && a + c > b && b + c > a) {
    	if ( a == b && b ==c ) {
    		cout << "Трикутник рівностороній" << endl;
        }
        else if ( a == b || b == c || a == c ) {
        	cout << "Трикутник рівнобедрений" << endl;
		}
		else {
            cout << "Tрикутник різностороній" << endl;
	    }
    } else {
        cout << "Error" << endl;
    }
 
    return 0; 
}