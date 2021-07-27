#include <iostream> 
using namespace std;
int main() {  
char selection {}; 
    do{
    cout<<"\n--------------"<<endl; 
    cout<<"1. Do this"<<endl; 
    cout<<"3. Do something else"<<endl; 
    cout<<"Q. Quit"<<endl; 
    cout<<"\n Enter your selection: "; 
    cin >>selection; 
    if(selection =='1') 
      cout<<"Your chose 1 - doing this"<<endl; 
    else if(selection == '2') 
     cout<<"Your chose 2 - doing this"<<endl; 
      else if(selection == '3') 
     cout<<"Your chose 3 - doing something this"<<endl; 
    else if (selection == 'Q' || selection == 'q')  
        cout<<"Goodbye ......"<<endl; 
     else 
        cout<<"Unknown option --try again..."<<endl; 
} while (selection != 'q' && selection!= 'Q');
    return 0; 
}   