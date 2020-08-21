#include <iostream>
using namespace std;

int main()
{
    char value;
    cin >> value;
    value = tolower(value);
    switch (value)
    {
    case 'p':
        cout << "PrepBytes";
        break;
    case 'z':
        cout<<"Zenith";
        break;
    case 'e':
        cout<<"Expert Coder";
        break;
    case 'd':
        cout<<"Data Structure";
        break;
    default:
        break;
    }
    return 0;
}