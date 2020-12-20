#include <iostream>
#include <cstdint>
#include <vector>

using namespace std;

//A function for exponents.
std::int_fast64_t pow(int base, int exp)
{
    std::int_fast64_t result{1};
    while (exp)
    {
        if (exp & 1)
            result *= base;
            exp >>= 1;
            base *= base;
        }
        return result;
    }
    
void message(int p, int q, int d) 
{
    vector<int> myMessage;

    int n {p * q};
    cout <<"Enter the string of numbers in the message. Press q when finished. "<<endl;
    
    int input {};
    int j{};
    //While loop that accepts user input until q is pressed. 
    while(cin >> input){
        if(input == 'q') break;
        myMessage.push_back(input);
        }

    while(myMessage.size() > j){
        int result = pow(myMessage.at(j), d) % 33;
        //cout<<result<<endl;
        switch(result)
        {
            case 1: cout<<'a';
            break;
            case 2: cout<<'b';
            break;
            case 3: cout<<'c';
            break;
            case 4: cout<<'d';
            break;
            case 5: cout<<'e';
            break;
            case 6: cout<<'f';
            break;
            case 7: cout<<'g';
            break;
            case 8: cout<<'h';
            break;
            case 9: cout<<'i';
            break;
            case 10: cout<<'j';
            break;
            case 11: cout<<'k';
            break;
            case 12: cout<<'l';
            break;
            case 13: cout<<'m';
            break;
            case 14: cout<<'n';
            break;
            case 15: cout<<'o';
            break;
            case 16: cout<<'p';
            break;
            case 17: cout<<'q';
            break;
            case 18: cout<<'r';
            break;
            case 19: cout<<'s';
            break;
            case 20: cout<<'t';
            break;
            case 21: cout<<'u';
            break;
            case 22: cout<<'v';
            break;
            case 23: cout<<'w';
            break;
            case 24: cout<<'x';
            break;
            case 25: cout<<'y';
            break;
            case 26: cout<<'z';
            break;
            case 32: cout<<" ";
            break;
            default: cout<< "Should not run";
        
        }
        ++j;
    }
      
}
        
    


int main() 
{
    int p{};
    int q{};
    int d{};
   
    cout <<"Enter the value of P: "<<endl;
    cin >> p;
    
    cout <<"Enter the value of Q: "<<endl;
    cin >> q;
    
    cout <<"Enter the value of D: "<<endl;
    cin >> d;
    
    message(p,q,d);
    
    
}
