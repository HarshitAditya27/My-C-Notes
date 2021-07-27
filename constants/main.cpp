#include <iostream> 
using namespace std;
int main() { 
    cout<<"Hello welcome to Frank's Carpet Cleaning Service"<<endl; 
    cout <<"\nHow many small rooms would you like cleaned?"; 
    int number_of_small_rooms{0}; 
    cin>>number_of_small_rooms;  
    cout <<"\nHow many large rooms would you like cleaned?"; 
    int number_of_large_rooms{0}; 
    cin>>number_of_large_rooms;
    cout<<"\nEstimate for carpet cleaning service"<<endl; 
    cout<<"Number of small rooms:"<<number_of_small_rooms<<endl; 
    cout<<"Number of large rooms:"<<number_of_large_rooms<<endl; 
    cout<<"Price per small room:$25"<<endl; 
     cout<<"Price per large room:$35"<<endl;
    cout<<"Cost:$"<<35*number_of_large_rooms + 25*number_of_small_rooms<<endl;  
    cout<<"Tax:$"<<35*number_of_large_rooms*0.06 + 25*number_of_small_rooms*0.06<<endl;  
    cout<<"======================"<<endl; 
    cout<<"Total estimate:$"<<(35*number_of_large_rooms + 25*number_of_small_rooms)-(35*number_of_large_rooms*0.06 + 25*number_of_small_rooms*0.06)<<endl; 
    cout<<"This estimate is valid for"<<30<<" days"<<endl; 
    return 0; 
}   