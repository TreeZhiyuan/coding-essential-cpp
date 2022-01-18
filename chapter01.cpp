#include <iostream>
#include <string>
using namespace std;
int main()
{
     string _firstname, _lastname;
     int k = 0;
     int i = 0;
     cout << "please input your firstname: ";
     cin >> _firstname;
     cout << "\r\n";
     cout << "please input your lastname: ";
     cin >> _lastname;
     cout << "\r\n";
     cout << "hello " << _lastname << " " << _firstname << "\r\n";
     cout << "k++" << k++ << "\n\r";
     cout << "++i" << ++i << "\n\r";
}
