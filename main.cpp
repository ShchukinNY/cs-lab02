#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
double a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
     int max=a;
     if (max<b)
        max=b;
     cout << "Max = " << max << endl;
     int min=a;
     if (min>b)
        b=min;
     cout << "Min = " << min << endl;
    return 0;
}
