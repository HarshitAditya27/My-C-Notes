#include <iostream> 
using namespace std;
int main() {  
    //int num;
    //cout<<"Enter a positive integer - start the countdown :"; 
    //cin>>num; 
    //while(num>0){
        //cout<<num<<endl; 
        //--num;
        //}  
        //cout<<"Blastiff!"<<endl; 
       //int i {1}; 
       //while (num >= i){ 
        //cout<<i<<endl; 
        //i++;  
       //} 
       //int number {}; 
       //cout<<"Enter an integer less than 100: "; 
       //cin>>number; 
       //while (number >=100){
           //cout << "Enter an integer less than 100:"; 
           //cin>>number;
           //} 
         //  cout << "Thanks"<<endl; 
         bool done {false}; 
         int number {0};
        while (!done){
            cout<<"Enter an integer between 1 and 5"; 
            cin>>number; 
            if (number<=1||number>=5) 
                cout<<"Out of range,try again"<<endl; 
                else{ 
                    cout<<"Thnaks!"<<endl; 
                    done = true;
                    }
            }
        cout<<endl;
    return 0; 
}   