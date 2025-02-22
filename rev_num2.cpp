#include<iostream> 
#include<string>    
using namespace std;

int main() {
    int n; // Declare a variable to store the input number
    cin >> n; // Take input from the user
    
    // Convert the integer `n` to a string for easier manipulation
    string str = to_string(n); 
    
    // Initialize an empty string to store the reversed version of the number
    string revStr = ""; 
    
    // Loop through the original string in reverse order
    for (int i = str.length() - 1; i >= 0; i--) {
        revStr += str[i]; // Append each character to the reversed string
    }
    
    // Convert the reversed string back to an integer
    int rn = stoi(revStr); 
    
    // Output the reversed number
    cout << rn; 
    
    return 0; 
}
