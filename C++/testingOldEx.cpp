#include <iostream>

using namespace std ;

int main(void) {
    float n , m ;
    cout << "Enter M : ";
    cin >> m;
    cout << "Enter N :";
    cin >> n;
    
    float fact =1,power =1;
    float S= 1+ m;
    
    for (float i = 1 ; i <= n ; i++){ 
        power=power * m ;
        fact = fact*(i+1);
        S=S+(power/fact);   //8.5 
    }
    cout << "S = "<<S<<endl ;
}