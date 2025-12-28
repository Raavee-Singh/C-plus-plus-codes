#include<iostream>
#include<string>
using namespace std;
int main() {
    int num1=7;
    double num2=7.5;
    char ch='A';
    string str="Hello World!";
    bool num3=true;
    auto sum=num1+num2;//auto can't be used for string and char types; auto needs to be needed a value that can be deduced.
    cout<<"Integer: "<<num1<<endl;
    cout<<"Double: "<<num2<<endl;
    cout<<"Character: "<<ch<<endl;
    cout<<"String: "<<str<<endl;    
    cout<<"Boolean: "<<num3<<endl;
    cout<<"Sum: "<<sum<<endl;
    return 0;
}