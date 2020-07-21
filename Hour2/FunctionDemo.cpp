#include <iostream>

using namespace std;

void helloWorld(string name);

int main()
{
    helloWorld("Leo");
    helloWorld("Christian");

    cout << "Normal hello world" << endl;
    return 0;
}


void helloWorld(string name)
{
    cout << "Hello World but with function" << endl;
    cout << "Your name is " << name << ", right?" << endl; 
}