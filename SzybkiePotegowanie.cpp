#include <iostream>
using namespace std;
int main() {  
    int wynik = 1;
    int n;
    int a;
    
    cout << "Podaj baze (a): ";
    cin >> a;
    cout << "Podaj wykladnik (n): ";
    cin >> n;
    
    cout << a << "do potegi" << n << " = ";
    
    while (n > 0) {
    	if(n%2 == 1) {
    		wynik = wynik * a;  		
		} 
		a = a * a;
		n = n/2;  		       
    }
    
    cout << wynik;
        
    return 0;
}