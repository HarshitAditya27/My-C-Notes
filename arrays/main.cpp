//Arrays
#include <iostream> 
using namespace std;
int main() { 
    char vowels[]{'a','e','i','o','u'}; 
    cout<<"\n The first vowel is"<<vowels[0]<<endl; 
    cout<<"The last vowel is: "<<vowels[4]<<endl; 
    //cin>>vowels[5]; out of bonds 
    double hi_temps[]{90.1,89.8,77.5,81.6}; 
    cout<<"\nThe first high temperature is :"<<hi_temps[0]<<endl; 
    hi_temps[0]=100.7; 
    cout<<"The first high temperature is now:"<<hi_temps[0]<<endl; 
// 
    int test_scores [5] {100,90}; 
    cout<<"\nFirst score at index 0:"<<test_scores[0]<<endl; 
    cout<<"Second core at index 1:"<<test_scores[1]<<endl; 
    cout<<"Third score at index 2:"<<test_scores[2]<<endl; 
    cout<<"Fourth score at index 3:"<<test_scores[3]<<endl; 
    cout<<"Firth score at index 4:"<<test_scores[4]<<endl; 
    return 0; 
}   