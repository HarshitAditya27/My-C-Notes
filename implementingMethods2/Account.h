#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{ 
private: 
//attributes 
std::string name;   
double balance;
public: 
//methods 
//decleared inline 
void set_balance(double bal){balance = bal;} 
double get_balance() {return balance;} 
//methods will be decleared outside the class declaration 
void set_name(std::string n); 
std::string get name(); 
bool deposite(double amount); 
bool withdraw(double amount); 
};

#endif // _ACCOUNT_H_
