#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter first natural number: " << endl;
    int nat1, nat2;
    cin >>nat1;
    cout<<"Now enter 2nd natural"<<endl;
    cin >>nat2;
    if (nat1>0&&nat2 >0)
        cout<<"You entered correctly, you have 10 points"<<endl;
    else
        cout<<"You dont know natural numbers, please revise the topic"<<endl;
    return 0;

}
