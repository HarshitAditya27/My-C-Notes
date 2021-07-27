#include <iostream> 
#include "Account.h" 
using namespace std;
int main() { 
Account frank_account; 
frank_account.set_name("Frank's account"); 
frank_account.set_balance(1000.0); 
if(frank_account.deposite(200.0)) 
cout<<"Depsit OK"<<endl; 
else 
cout<<"Deposit Not Allowed"<<endl; 
if (frank_account.withdraw(500.0)) 
cout<<"Withdraw OK"<<endl; 
else 
cout<<"Not sufficient funds"<<endl; 
if(frank_account.withdraw(1500.0)) 
cout<<"Withdraw OK"<<endl; 
else     
    cout<<"Not suffcienrt funds"<<endl;
    return 0;
}   