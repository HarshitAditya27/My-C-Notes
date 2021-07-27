#include <iostream>  
#include <vector>
using namespace std;
int main() { 
    cout<<"P - Print numbers"<<endl; 
    cout<<"A - Add a number"<<endl; 
    cout<<"M - Display mean of the numbers"<<endl; 
    cout<<"S - Display the smallest number"<<endl;  
    cout<<"L- Display the largest number"<<endl; 
    cout<<"Q - Quit"<<endl;  
    vector <int> num {}; 
    int n; 
    char alph {}; 
    cin>> alph; 
    if (alph == 'P' ){ 
        if (num.size() == 0) 
            cout<<"List is empty"<<endl; 
            else{ 
                cout<<"["; 
                for (auto x : num) 
                    cout<<x<<" "; 
                  cout<<"]"<<endl; 
                }
        } else if ( alph == 'A'){ 
            cout<<"Enter the number "; 
            cin >> n;   
            num.push_back(n); 
            cout<<n<<" added"<<endl;
            } else { 
                cout<<endl;
                }
    return 0; 
}   