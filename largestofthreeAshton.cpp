#include <iostream>
using namespace std;

//Reference: https://www.programiz.com/cpp-programming/examples/largest-number-among-three

int main() {
    
    double n1, n2, n3;

    cout << "Pick 3 Numbers: ";
    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)
        cout << "Largest: " << n1;

 
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest: " << n2;
    
    else 
        cout << "Largest: " << n3;
  
    return 0;
}