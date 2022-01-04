// Multi Utility Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
#include<cmath>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class ADV_SCI_CALC {       // The class for Scientific calculator
public:             // Access specifier
    void addition() {  // Method/function defined inside the class
        double a, b;
        cout << "Enter A and B\n";
        cin >> a;
        cin >> b;
        printf("%.4lf", a + b);
    }
    void substraction()
    {
        printf("Enter the numbers to be subtracted:");
        double a, b;
        scanf_s("%lf %lf", &a, &b);
        printf("The DIFFERENCE of a & b is %.4lf\n", a - b);
    }
    void multiplication()
    {
        printf("Enter the numbers to be multiplied:");
        double a, b;
        scanf_s("%lf %lf", &a, &b);
        printf("The PRODUCT of a & b is %.4lf\n", a * b);
    }
    void division()
    {
        printf("Enter the numbers to be divided:");
        double a, b;
        scanf_s("%lf %lf", &a, &b);
        printf("The DIVISION of a & b is %.4lf\n", (float)a / (float)b);
    }
    void modulus()
    {
        printf("Enter the numbers you want to find modulus of:");
        int a, b;
        scanf_s("%d %d", &a, &b);
        printf("The MODULUS of a & b is %d\n", a % b);
    }
    void power()
    {
        printf("Enter the base and the power:");
        double a, b;
        scanf_s("%lf %lf", &a, &b);
        printf("The POWER is %.1lf\n",pow(a, b));
    }
    void factorial()
    {
        printf("Enter the number you want to find factorial of:");
        int n;
        double factorial;
        scanf_s("%d", &n);
        factorial = 1;
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i; //factorial*=i;
        }
        printf("The FACTORIAL of %d is %.4lf", n, factorial);
    }
    void square() {
        double a = 0;
        cout << "Enter the number for Square :";
        cin >> a;
        cout << "\nSquare of " << a << " is " << a*a;

    }
    void cube() {
        double a = 0;
        cout << "Enter the number for Cube :";
        cin >> a;
        cout << "\nSquare of " << a << " is " << a*a*a;
    }
    void squareRoot() {
        double a = 0;
        cout << "Enter the number for Square root :";
        cin >> a;
        cout << "\nSquare root of " << a << " is " << sqrt(a);
    }
    void cubeRoot() {
        double a = 0;
        cout << "Enter the number for cube root : ";
        cin >> a;
        cout << "\ncube root " << a << " is " << cbrt(a);
    }
    void sin() {
        system("CLS");
        int a = 0;
        cout << "Enter the number for sin(in Degrees) : ";
        // converting degrees to radians
        cin >> a;
        // Below Switch tree defines the Pre-defined values for Trigonometric functions.
        switch (a)
        {
            case 360:
                printf("Value of Sin for %d%c is %d\n",a,248,0);
                break;
            case 45:
                printf("Value of Sin for %d%c is 1/%c2\n",a,248,251);
                break;
            case 30:
                printf("Value of Sin for %d%c is 1/2\n",a,248);
                break;
            case 60:
                printf("Value of Sin for %d%c is %c3/2\n", a,248, 251);
                break;
        }
        if (a != 360)
        {
            double x = a * 3.14159 / 180;
            long double result = std::sin(x);
            printf("Sin of %d%c is %.2f", a,248, result);
        }
    }
    void cos() {
        system("CLS");
        int a = 0;
        cout << "Enter the number for Cos(in Degrees) : ";
        // converting degrees to radians
        cin >> a;
        // Below Switch tree defines the Pre-defined values for Trigonometric functions.
        switch (a)
        {
        case 90:
            printf("Value of Cos for %d%c is %d\n", a, 248, 0);
            break;
        case 360:
            printf("Value of Cos for %d%c is %d\n", a, 248, 1);
            break;
        case 30:
            printf("Value of Cos for %d%c is %c3/2\n", a, 248, 251);
            break;
        case 60:
            printf("Value of Cos for %d%c is 1/2\n", a, 248);
            break;
        case 45:
            printf("Value of Cos for %d%c is 1/%c2\n", a, 248, 251);
            break;
        }
        if (a != 90)
        {
            double x = a * 3.14159 / 180;
            long double result = std::cos(x);
            printf("Cos of %d%c is %.2f", a,248, result);
        }
   
    }
    void tan() {
        system("CLS");
        int a = 0;
        cout << "Enter the number for Tan(in Degrees) : ";
        // converting degrees to radians
        cin >> a;
        // Below Switch tree defines the Pre-defined values for Trigonometric functions.
        switch (a)
        {
        case 0:
            printf("Value of Tan for %d%c is %d\n", a, 248, 0);
            break;
        case 45:
            printf("Value of Tan for %d%c is %d\n", a, 248, 1);
            break;
        case 30:
            printf("Value of Tan for %d%c is 1/%c3\n", a, 248,251);
            break;
        case 60:
            printf("Value of Tan for %d%c is %c3\n", a, 248,251);
            break;
        case 90:
            printf("Value of Tan for %d%c is Not Defined!\n",a,248);
            break;
        case 180:
            printf("Value of Tan for %d%c is 0\n",a,248);
            break;
        case 360:
            printf("Value of Tan for %d%c is 1\n",a,248);
            break;

        }
        if (a != 360 && a !=90 && a != 180)
        {
            double x = a * 3.14159 / 180;
            long double result = std::tan(x);
            printf("Tan of %d%c is %.3f", a, 248,result);
        }

    }
    void cot() {
        system("CLS");
        int a = 0;
        cout << "Enter the number for Cot(in Degrees) : ";
        // converting degrees to radians
        cin >> a;
        // Below Switch tree defines the Pre-defined values for Trigonometric functions.
        switch (a)
        {
        case 90:
            printf("Value of Cot for %d%c is %d\n", a, 248, 0);
            break;
        case 45:
            printf("Value of Cot for %d%c is %d\n", a, 248, 1);
            break;
        case 60:
            printf("Value of Cot for %d%c is 1/%c3\n", a, 248, 251);
            break;
        case 30:
            printf("Value of Cot for %d%c is %c3\n", a, 248, 251);
            break;
        case 0:
            printf("Value of Cot for %d%c is Not Defined!\n", a, 248);
            break;
        case 180:
            printf("Value of Cot for %d%c is Not Defined!\n", a, 248);
            break;
        case 360:
            printf("Value of Cot for %d%c is Not Defined!\n", a, 248);
            break;

        }
        if (a != 360 && a != 0 && a != 180)
        {
            double x = a * 3.14159 / 180;
            long double result = std::tan(x);
            printf("Cot of %d%c is %.3f", a, 248, result);
        }
    }
    void sec() {
        system("CLS");
        int a = 0;
        cout << "Enter the number for Sec(in Degrees) : ";
        // converting degrees to radians
        cin >> a;
        // Below Switch tree defines the Pre-defined values for Trigonometric functions.
        switch (a)
        {
        case 0:
            printf("Value of Sec for %d%c is %d\n", a, 248, 1);
            break;
        case 90:
            printf("Value of Sec for %d%c is Not defined!\n", a, 248);
            break;
        case 360:
            printf("Value of Sec for %d%c is %d\n", a, 248, 1);
            break;
        case 30:
            printf("Value of Sec for %d%c is 2/%c3\n", a, 248, 251);
            break;
        case 60:
            printf("Value of Sec for %d%c is 2\n", a, 248);
            break;
        case 45:
            printf("Value of Sec for %d%c is %c2\n", a, 248, 251);
            break;
        case 180:
            printf("Value of Sec for %d%c is -1\n", a, 248);
            break;
        }
        if (a != 90 && a!=270)
        {
            double x = a * 3.14159 / 180;
            long double result = 1/std::cos(x);
            printf("Sec of %d%c is %.2f", a, 248, result);
        }
    }
    void cosec() {
        double a = 0;
        cout << "Enter the number for cosec :";
        cin >> a;
    }
    void radian_to_degree() {

    }
    void degree_to_radian() {

    }
    void log() {

    }
    void perc() {

    }
    void grade() {

    }
    void binary_to_decimal() {

    }
    void decimal_to_binary() {

    }
    void octal_to_hexadecimal() {

    }
    void hexadecimal_to_decimal() {

    }
    void rect_to_pol() {

    }
    void pol_to_rect() {

    }
};
void submenu_ADV_SCI_CALC()
{
    system("CLS");
    ADV_SCI_CALC calc;
    int choice;
    system("Color 0B");
    cout << "ADVANCED SCIENTIFIC CALCULATOR \n\n";
    cout << "BASICS :\n";
    printf("Enter 1 for ADDITION:\n");
    printf("Enter 2 for SUBTRACTION:\n");
    printf("Enter 3 for MULTIPLICATION:\n");
    printf("Enter 4 for DIVISION:\n");
    printf("Enter 5 for MODULUS:\n");
    printf("Enter 6 to calculate POWER:\n");
    printf("Enter 7 to calculate FACTORIAL:\n");
    printf("Enter 8 to find SQUARE:\n");
    printf("Enter 9 to find CUBE:\n\n\n");
    cout << "ADVANCED TRIGONOMETRIC\n\n";
    printf("Enter 10 to find SQUARE ROOT:\n\n");
    printf("Enter 11 to find CUBE ROOT:\n\n");
    printf("Enter 12 to find value of sin of angle in terms of degree:\n\n");
    printf("Enter 13 to find value of cos of angle in terms of degree:\n\n");
    printf("Enter 14 to find value of tan of angle in terms of degree:\n\n");
    printf("Enter 15 to find value of cot of angle in terms of degree:\n\n");
    printf("Enter 16 to find value of sec of angle in terms of degree:\n\n");
    printf("Enter 17 to find value of cosec of angle in terms of degree:\n\n\n");
    cout << "CONVERSIONS\n\n";
    printf("Enter 18 to convert from radian to degree:\n");
    printf("Enter 19 to convert from degree to radian:\n"); //exponential
    printf("Enter 20 to find LOG OF REAL NUMBERS:\n");
    printf("Enter 21 to find percentage:\n");
    printf("Enter 22 to find grade according to percentage:\n");
    printf("Enter 23 to convert from Binary to Decimal:\n");
    printf("Enter 24 to convert from Decimal to Binary:\n");
    printf("Enter 25 to convert from Octal to Hexadecimal:\n");
    printf("Enter 26 to convert from Hexadecimal to Decimal:\n");
    printf("Enter 27 to convert from Rectangular form to Polar form:\n");
    printf("Enter 28 to convert from Polar form to Rectangular form:\n");
    cout << "\n";
    cout << "Enter Choice: \n";
    cin >> choice;
    switch(choice)
    {
    case 1:
        calc.addition();
        break;
    case 2:
        calc.substraction();
        break;
    case 3:
        calc.multiplication();
        break;
    case 4:
        calc.division();
        break;
    case 5:
        calc.modulus();
        break;
    case 6:
        calc.power();
        break;
    case 7:
        calc.factorial();
        break;
    case 8:
        calc.square();
        break;
    case 9:
        calc.cube();
        break;
    case 10:
        calc.squareRoot();
        break;
    case 11:
        calc.cubeRoot();
        break;
    case 12:
        calc.sin();
        break;
    case 13:
        calc.cos();
        break;
    case 14:
        calc.tan();
        break;
    case 15:
        calc.cot();
        break;
    case 16:
        calc.sec();
        break;
    default:
        printf("INVALID INPUT.");

    }
}
class Tax_Calculation {
public :
    #include<stdlib.h>
    void incomeTax(void)
    {
        int basic;
        float tax{};
        cout << "ENTER THE AMOUNT OF BASIC:" << endl;
        cin >> basic;
        if (basic < 250000)
        {
            cout << "tax not applied on income less than 2.5lakh" << endl;
        }
        else
            if (basic > 250000 && basic < 500000)
                tax = basic * 5 / 100;
            else if (basic > 500000 && basic < 750000)
                tax = basic * 10 / 100;
            else if (basic > 750000 && basic < 1000000)
                tax = basic * 15 / 100;
            else if (basic > 1000000 && basic < 1250000)
                tax = basic * 20 / 100;
            else if (basic > 1250000 && basic < 1500000)
                tax = basic * 25 / 100;
            else if (basic > 1500000)
                tax = basic * 30 / 100;
        printf("\nTHE AMOUNT OF TAX IS %0.2f\n",tax);
    }
    void entertainmentTax(void)
    {
        system("Color 0D");
        cout << "INSTRUCTONS TO USE -> " << endl;
        cout << "The State in same cases have same entertainment tax : " << endl;
        system("CLS");
        int state, entertainmenttax, tkt;
        cout << "\n1: Uttar pradesh" << endl;
        cout << "\n2: Maharastra" << endl;
        cout << "\n3: Karnataka : Kerala : West Bengal: " << endl;
        cout << "\n4: Delhi : M.P : Gujrat : Andhra Pradesh:" << endl;
        cout << "\n5: Rajasthan : Jammu Kashmir : Himanchal Pradesh :" << endl;
        cout << "\n6: Jharkhand:" << endl;
        cout << "\n7: Bihar:" << endl;


        cout << "Enter the state Choice : " << endl;
        cin >> state;
        cout << "\nEnter the price of Ticket : " << endl;
        cin >> tkt;
        switch (state)
        {
        case 1:
            entertainmenttax = tkt * 0.6;
            cout << "The entertainment tax in these state is = " << entertainmenttax << endl;
            cout << "Your total bill is = " << entertainmenttax + tkt << endl;
            break;

        case 2:
            entertainmenttax = tkt * 0.45;
            cout << "The entertainment tax in these state is = " << entertainmenttax << endl;
            cout << "Your total bill is = " << entertainmenttax + tkt << endl;
            break;


        case 3:
            entertainmenttax = tkt * 0.3;
            cout << "The entertainment tax in = " << entertainmenttax << endl;
            cout << "Your total bill is = " << entertainmenttax + tkt << endl;
            break;


        case 5:
            entertainmenttax = tkt * 0;
            cout << "No Tax is required in these states = " << entertainmenttax;
            cout << "\nYour total bill is = " << entertainmenttax + tkt << endl;
            break;


        case 4:
            entertainmenttax = tkt * 0.20;
            cout << "The entertainment tax in these state is = " << entertainmenttax << endl;
            cout << "Your total bill is = " << entertainmenttax + tkt << endl;
            break;


        case 6:
            entertainmenttax = tkt * 1.1;
            cout << "The entertainment tax in these state is = " << entertainmenttax;
            cout << "Your total bill is = " << entertainmenttax + tkt << endl;
            break;

        case 7:
            entertainmenttax = tkt * 0.5;
            cout << "The Entertainment tax in bihar is " << entertainmenttax;
            cout << "Your total bill is = " << entertainmenttax + tkt << endl;
            break;
        }
    }
};
void submenu_tax()
{   
    system("CLS");
    system("Color 0E");
    Tax_Calculation tax;
    int choice;
    cout << "ADVANCED TAX CALCULATOR\n\n";
    printf("Enter 1 for Income Tax [Multiple Users]:\n");
    printf("Enter 2 for Entertainment:\n");
    printf("Enter 3 for VAT:\n");
    printf("Enter 4 for Security Taxation Tax:\n");
    printf("Enter 5 for GST:\n");
    printf("Enter 6 for Service TAX:\n");
    printf("Enter 7 for Customs Tax:\n");
    cout << "\n";
    cout << "Enter Choice: \n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        #include<stdlib.h>
        int i, n;
        system("CLS");
        cout << "\nENTER THE NUMBER OF THE EMPLOYEES:" << endl;
        cin >> n;
        for (i = 1; i <= n; i++)
            tax.incomeTax();
        break;
    case 2:
        system("CLS");
        tax.entertainmentTax();
        break;
    default:
        printf("INVALID INPUT.");

    }
}
int main()
{   

    int choice;
    cout << "Multi Utlity Application\n\n";
    cout << "1. ADVANCED SCIENTIFIC CALCULATOR\t";
    cout << "2. ADVANCED TAX CALCULATOR\t";
    cout << "3. MANAGEMENT TASKS\t";
    cout << "4. PASSWORD MANAGER\n";
    cout << "5. Help\n";
    cout << "6. About Application\n";
    cout << "\n";
    cout << "Enter Choice: \n";
    cin >> choice;
    switch (choice)
    {
        case 1 :
            submenu_ADV_SCI_CALC();
            break;
        case 2 :
            submenu_tax();
            break;
        case 3 :
            cout << "Works";
        case 4:
            cout << "Works";
        case 5:
            cout << "Works";
        case 6:
            cout << "Works";
             
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
