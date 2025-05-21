#include <iostream>
#include <ios>
#include <string>

using namespace std;

int sec3(){
    /*
short 2 bytes -32,768 to 32,767 
int 4 bytes -2,147,483,648 to 2,147,483,647
long 4 bytes -2,147,483,648 to 2,147,483,647
float 4 bytes approximately 10-38 to 1038 7 digits
double 8 bytes approximately 10-308 to 10308 15 digits
long double 10 bytes approximately 10-4932 to 104932 19 digits
*/

auto number = 111111;
cout<<number<<endl;
    return 0;
}
int sec2(){
    float price = 1234.567;
    int price1;

    cout<<price<<endl;

    // cout.precision(2);
    cout<<price<<endl;

    // cout.setf(ios::fixed);
    cout<<price<<endl;

    // cout.setf(ios::showpoint);
    cout<<price<<endl;

    //8
    cout<<"The answer to the question of\nLife, the Universe, and Everything is 42."<<endl;

    //9
    int number1;
    cout<<"enter a whole number: ";
    cin>>number1;

    //10
    double idk = 123.456;
    cout.precision(1);
    cout<<idk<<endl;
    return 0;

}
int sec1()
{
    //self-test excersize;
    //1
    int feet = 0,inches = 0;
    cout<<feet<<" "<<inches<<endl;

    //2
    int count = 0;
    double distance = 1.5;
    cout<<count<<" " <<distance<<endl;
    
    //3
    cout<<"give 2 values to sum up"<<endl;
    int n1, n2;
    cin>> n1;
    cin >> n2;

    //4
    int sum = n1 + n2;
    cout<<sum<<endl;

    //5
    int product = 1;
    cout<<"previous product value: "<< product<<endl;

    cin>>product;
    cout<<product<<endl;
      
    //6
    int zero,one,two,three,four,five;

    cout<<zero<<endl;
    //Apparently this is printint out garbage or a random looking value.
    return 0;
}

int main(){
    int arg = sec3();
    return arg;
}
