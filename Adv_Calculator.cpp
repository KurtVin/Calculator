#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <math.h>
#include <windows.h>

using namespace std;

int main ()
{

    string input;
    system("Color 09");
    printf ("for windows only\n");
    
    cout << "__________________________" << endl << endl;
    cout << "Arithmetic Operators:"<< endl << endl;
    cout << "[+] Addition" << endl;
    cout << "[-] Subtraction" << endl;
    cout << "[*] Multiplication" << endl;
    cout << "[/] Division" << endl;
    cout << "[%] Modulo" << endl;
    cout << "_________________________" << endl << endl;
    
    cout << "Trigonometric Functions" << endl << endl;
    cout << "[sin] Sine" << endl;
    cout << "[cos] Cosine" << endl;
    cout << "[tan] Tangent" << endl;
    cout << "[acos] Acos" << endl;
    cout << "[asin] Arcsine" << endl;
    cout << "[atan] Arc Tangent" << endl;
    cout << "[atan2] Arc Tangent  2" << endl;
    cout << "[tanh] Hyperbolic Tangent" << endl;
    cout << "[cosh] Hyperbolic cosine" << endl;
    cout << "_________________________" << endl << endl;
    
    cout << "[exp] Exponential" << endl;
    cout << "[sqrt] Square Root" << endl;
    cout << "[log] Logarithms" << endl;
    cout << "[hyp] Pythagorean Theorem" << endl;
    cout << "[ke] Kinetic Energy" << endl;
    cout << "[rad] Area of a circle" << endl;
    cout << "_________________________" << endl << endl;
        
    
    cout << "Enter Operator: ";
    cin >> input;
    cout << "_________________________" << endl << endl;

    while (input == "%")
    {
        cout << "Modulo";
        long int x, y, res, q;
        cout << endl;

        cout << "Enter a number: ";
        cin >> x;

        cout << "Enter a number: ";
        cin >> y;

        cout << "_________________________" << endl << endl;

        res = x % y;
        cout << "Result: [" << res << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "tanh")
    {
        cout << "Hyperbolic Tangent";
        double x;
        cout << endl;

        cout << "Enter tanh value in degrees: ";
        cin >> x;

        cout << "_________________________" << endl << endl;

        cout << "Hyperbolic tangent value of " << x << " is: [" << tanh(x) << "]"<< endl;
        cout << "_________________________" << endl << endl;
    }
    while (input == "cosh")
    {
        cout << "Hyperbolic Cosine";
        double x;
        cout << endl;

        cout << "Enter cosh value in degrees: ";
        cin >> x;

        cout << "_________________________" << endl << endl;

        cout << "Hyperbolic cosine value of " << x << " is: [" << cosh(x) << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "atan2")
    {
        cout << "Arc Tangent 2";
        double x, z;
        cout << endl;

        cout << "Enter arc tangent 2 1st value: ";
        cin >> x;

        cout << "Enter arc tangent 2 2nd value: ";
        cin >> z;
        
        cout << "_________________________" << endl << endl;

        cout << "Arc tangent value of " << x << " is: [" << atan2(x,z) << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "atan")
    {
        cout << "Arc Tangent";
        double x;
        cout << endl;

        cout << "Enter arc tangent value: ";
        cin >> x;

        cout << "_________________________" << endl << endl;

        cout << "Arc tangent value of " << x << " is: [" << atan(x) << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "asin")
    {
        cout << "Arcsine";
        double x;
        cout << endl;

        cout << "Enter arcsine value: ";
        cin >> x;

        cout << "_________________________" << endl << endl;

        cout << "Arcsine value of " << x << " is: [" << asin(x) << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while ( input == "acos")
    {
        cout << "Arc Cosine";
        double x;
        cout << endl;

        cout << "Enter arc cosine value: ";
        cin >> x;
    
        cout << "_________________________" << endl << endl;

        cout << "Arccosine value of " << x << " is: [" << acos(x) << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "tan")
    {
        cout << "Tangent";
        double x;
        cout << endl;

        cout << "Enter tangent value: ";
        cin >> x;

        cout << "_________________________" << endl << endl;

        cout << "Tangent value of " << x << " is: [" << tan(x) << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "cos")
    {
        cout << "Cosine";
        double x;
        cout << endl;

        cout << "Enter cosine value: ";
        cin >> x;

        cout << "_________________________" << endl << endl;

        cout << "Cosine value of " << x << " is: ["<< cos(x) << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "sin")
    {
        cout << "Sine";
        double x;
        cout << endl;

        cout << "Enter sine valude: ";
        cin >> x;

        cout << "_________________________" << endl << endl;

        cout << "Sine value of " << x << " is: [" << sin(x) << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "*")
    {
        cout << "Multiplication";
        long int n1, n2, sum;
        cout << endl;
        
        cout << "Enter a number: ";
        cin >> n1;

        cout << "Enter a number: ";
        cin >> n2;
        
        cout << "_________________________" << endl << endl;
        
        sum = n1 * n2;
        cout << "Result: " << "[" << sum << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }   
    while (input == "/")
    {
        cout << "Division";
        long int n1, n2, sum;
        cout << endl;
        
        cout << "Enter a number: ";
        cin >> n1;

        cout << "Enter a number: ";
        cin >> n2;
        
        cout << "_________________________" << endl << endl;
        
        sum = n1 / n2;
        cout << "Result: " << "[" << sum << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "-")
    {
        long int n1, n2, sum;

        cout << "Subtraction";
        cout << endl;
        
        cout << "Enter a number: ";
        cin >> n1;

        cout << "Enter a number: ";
        cin >> n2;
        cout << "_________________________" << endl << endl;

        sum = n1 - n2;
        cout << "Result: " << "[" << sum << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "+")
    {
        cout << "Addition";
        long int n1, n2, sum;
        cout << endl;
        
        cout << "Enter a number: ";
        cin >> n1;

        cout << "Ente a number: ";
        cin >> n2;
        cout << "_________________________" << endl << endl;
        
        sum = n1 + n2;
        cout << "Result: " << "[" << sum << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "exp")
    {
        cout << "Exponential";
        long int x;
        double res;
        cout << endl;

        cout << "Enter a number: ";
        cin >> x;
        cout << "_________________________" << endl << endl;

        res = exp(x);
        cout << "Result: " << "[" << res << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl; 
        
    }
    while (input == "sqrt")
    {
        cout << "Square Root";
        float r;
        cout << endl;

        cout << "Enter a number: ";
        cin >> r;
        cout << "_________________________" << endl << endl;

        cout << "Square root of " << r << " : ["<< sqrt(r) << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }  
    while (input == "log")
    {
        cout << "Logarithms";
        double a, brrt, zwk;
        cout << endl;
        
        cout << "Enter value of K : ";
        cin >> a;
        cout << "_________________________" << endl << endl;
        
        brrt = log(a);
        zwk = log10(a);
        
        cout << "log(k) = [" << brrt << "]" << endl;
        cout << "log10(k) = [" << zwk << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    } 
    while (input == "rad")
    {
        cout << "Area of a circle";
        float rad, area;
        cout << endl;
        
        cout << "Enter the diameter: ";
        cin >> rad;
        cout << "_________________________" << endl << endl;
        
        area = 3.14 * pow(rad,2);
        cout << "Area of the circle: [" << area << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
    while (input == "ke")
    {
        cout << "Kinetic Energy";
        double m = 0;
        double v = 0;
        double ke = 0;
        cout << endl;
        
        cout << "Enter mass: ";
        cin >> m;

        cout << "Enter velocity: ";
        cin >> v;
        cout << "_________________________" << endl << endl;
        
        ke = (.5 * m) * (pow(v,2));
        cout << fixed << setprecision(2) << "[" << ke << "]" << "Joules";
        cout << "_________________________" << endl << endl << endl << endl; 
    }  
    while (input == "hyp")
    {
        cout << "Pythagorean Theorem";
        float a;
    	float b;
    	float c;
        cout << endl;
        
        cout << "Enter a value for a: ";
        cin >> a;
    
        cout << "Enter a value for b: ";
        cin >> b;
        cout << "_________________________" << endl << endl;
        
    	float a2 = pow(a, 2);
    	float b2 = pow(b, 2);
    	c = sqrt(a2 + b2);

        cout << "Hypotenuse: [" << c  << "]" << endl;
        cout << "_________________________" << endl << endl << endl << endl;
    }
}
