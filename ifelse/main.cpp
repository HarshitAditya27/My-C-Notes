#include <iostream> 
using namespace std;
int main() { 
     int num{}; 
     const int target{10}; 
     cout<<" Enter a number and i'll compare to it "<< target<<":"; 
     cin>>num; 
     if(num >=target){ 
       cout<<"=================="<<endl; 
       cout<<num<<" is grater than or eaual to "<<target<<endl; 
       int diff{num-target}; 
       cout<<num<<" is "<<diff<<" greater than "<<target<<endl; 
     }else{ 
         cout<<"=============="<<endl; 
         cout<<num<<"is less than"<<target<<endl;
         int diff{target-num}; 
         cout<<num<<" is "<<diff<<" less than "<<target<<endl;
         } 
         cout<<endl;
    return 0; 
}   