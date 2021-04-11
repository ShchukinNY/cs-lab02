#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
int a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
     int max=a;
     if (max<b)
        max=b;
     cout << "Max = " << max;
    return 0;
}
