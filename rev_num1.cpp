#include<iostream>  
using namespace std; 

int main() {
    int n; // Declare a variable to store the input number
    cin >> n; // Take input from the user
    int rn = 0; // Initialize a variable to store the reversed number
    
    // Loop until the original number becomes 0
    while(n > 0) { 
        int ld = n % 10; // Extract the last digit of the number
        rn = (rn * 10) + ld; // Append the last digit to the reversed number
        n = n / 10; // Remove the last digit from the original number
    }
    
    cout << rn; // Output the reversed number
    return 0; 
}
