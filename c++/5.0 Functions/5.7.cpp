#include <iostream>
#include <math.h>
int print(std::string s);
int print(double dvalue);
int print(double dvalue, int prec); 

int main(int argc, char *argv[]) {
    
    const double d = 893094.2987;

    if (argc < 2) {
        print("This program requires one argument.");
        print("The argument specifies the number of");
        print("digits precision for the second number");
        print("printed.");
        exit(0);
    }

    print(d);

    // Invoke print( double dvalue, int prec ).
    print(d, atoi(argv[1]));

    return 0;
}

int print(std::string s) {
    std::cout << s << std::endl;
    return std::cout.good();
}

int print(double dvalue) {
    std::cout << dvalue << std::endl;
    return std::cout.good();
}

int print(double dvalue, int prec)
{
    // Use table-lookup for rounding/truncation.
    static const double rgPow10[] = {
        10E-7, 10E-6, 10E-5, 10E-4, 10E-3, 10E-2, 10E-1,
        10E0, 10E1,  10E2,  10E3,  10E4, 10E5,  10E6 };
    const int iPowZero = 6;

    // If precision out of range, just print the number.
    if (prec < -6 || prec > 7)
    {
        return print(dvalue);
    }
    // Scale, truncate, then rescale.
    dvalue = floor(dvalue / rgPow10[iPowZero - prec]) *
        rgPow10[iPowZero - prec];
    std::cout << dvalue << std::endl;
 
    return std::cout.good();
}