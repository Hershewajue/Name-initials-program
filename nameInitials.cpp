// Main function of the C++ program.

#include <iostream>
using namespace std;

int main()
{
    string myString, initials, surname;
    cout << "What is your full name?\n";
    getline(cin, myString); //Will display inputs after the spacebar
    //cin >> myString;  //will not display anything after the spacebar
    cout << myString.length() << endl;
    cout << "Your name is " << myString << endl;
    
    for(int i = 0; i < myString.length(); i++){
        if(myString[i] == 32){
            initials += myString[i+1]; 
            initials += ". ";
        }
    }
    for(int i = 0; i < myString.length(); i++)
        if(myString[i] == 32){
            for(int j = 0; j < i; j++)
                surname += myString[j];
                break;
        }
        
    cout << surname << " " << initials << endl;
}
