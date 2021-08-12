#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    //-------------------------------DECLARATION---------------------//
    cout << "FOR ADDTION                    :  PRESS '+' \n";
    cout << "FOR subtraction                :  PRESS '-' \n";
    cout << "FOR multiplication             :  PRESS '*' \n";
    cout << "FOR division                   :  PRESS '/' \n";
    cout << "FOR REMAINDER NUMBER           :  PRESS '%' \n";
    cout << "FOR FACTORIAL NUMBER           :  PRESS '!' \n";
    cout << "FOR PALINDROME NUMBER          :  PRESS 'p' \n";
    cout << "FOR ARMSTRONG NUMBER           :  PRESS 'a' \n";
    cout << "FOR REVERSE NUMBER             :  PRESS 'r' \n";
    cout << "FOR table                      :  PRESS 't' \n";
    cout << "AREA OF RECTANGLE              :  PRESS 'A' \n";
    cout << "SWAP OF TWO NUMBER             :  PRESS 'W' \n";
    cout << "SUM OF N NATURAL NUMBER        :  PRESS 'N' \n";
    cout << "PRODUCT OF N NATURAL NUMBER    :  PRESS 'P' \n";
    cout << "CALCULATE OF PERCENTAGE RESULT :  PRESS 'R' \n";
    cout << "CALCULATE quadratic equation   :  PRESS 'Q' \n";

    while (true)
    {
        int a, b, result;
        char c;
        cout << "\n enter the operator : ";
        cin >> c;

        if (c == '+')
        {
            cout << "enter value a and b : ";
            cin >> a >> b;
            cout << "sum of " << a << " and " << b << " is " << a + b << endl;
        }
        else if (c == '-')
        {
            cout << "enter value a and b : ";
            cin >> a >> b;
            cout << "subtraction of " << a << " and " << b << " is " << a - b << endl;
        }
        else if (c == '/')
        {
            cout << "enter value a and b : ";
            cin >> a >> b;
            cout << "divide of " << a << " and " << b << " is " << a / b << endl;
        }
        else if (c == '%')
        {
            cout << "enter value a and b : ";
            cin >> a >> b;
            cout << "Remainder of " << a << " and " << b << " is " << a % b << endl;
        }
        else if (c == '*')
        {
            cout << "enter value a and b : ";
            cin >> a >> b;
            cout << "multiple of " << a << " and " << b << " is " << a * b << endl;
        }
        //--------------------------------------factorial------------------------------------//
        else if (c == '!')
        {
            int n, fact = 1;
            cout << "enter the number : ";
            cin >> n;
            for (int i = 2; i <= n; i++)
            {
                fact *= i;
            }
            cout << "factorial is " << fact << endl;
        }
        //--------------------------------------Table------------------------------------//
        else if (c == 't')
        {
            int n, i;
            cout << "enter the number you want the table : ";
            cin >> n;
            for (i = 1; i <= 10; i++)
            {
                cout << n << " x " << i << " = " << n * i << endl;
            }
        }
        //--------------------------------------Palindrome------------------------------------//
        else if (c == 'p')
        {
            int d, n, rev = 0, temp;
            cout << "enter a number for palindrome number :";
            cin >> n;
            temp = n;
            while (n > 0)
            {
                d = n % 10;
                rev = rev * 10 + d;
                n /= 10;
            }
            if (rev == temp)
            {
                cout << temp << " is palindrome number " << endl;
            }
            else
            {
                cout << temp << " is not palindrome number " << endl;
            }
        }
        //----------------------------------Armstrong---------------------//
        else if (c == 'a')
        {
            int n;
            cout << "enter the number to check armstrong number or not : ";
            cin >> n;
            int temp;
            int sum = 0, d;
            temp = n;
            while (n > 0)
            {
                d = n % 10;
                sum = sum + d * d * d;
                n /= 10;
            }
            cout << " Armstrong = " << sum << endl;
            if (temp == sum)
            {
                cout << temp << " is armstrong number" << endl;
            }
            else
            {
                cout << temp << " is not armstrong number" << endl;
            }
        }
        else if (c == 'r')
        {
            int n;
            cout << "enter the number : ";
            cin >> n;
            int rev = 0, d;
            while (n > 0)
            {
                d = n % 10;
                rev = rev * 10 + d;
                n /= 10;
            }
            cout << "your reverse number is " << rev << endl;
        }

        //------------------------AREA OF RECTANGLE------------------------//
        else if (c == 'A')
        {
            int l, b, area;
            cout << "enter the length and breadth of rectangle : ";
            cin >> l >> b;
            area = l * b;
            cout << "area of rectangle = " << area << endl;
        }

        //----------------------------SWAP OF TWO NUMBER----------------------//
        else if (c == 'S')
        {
            int a, b, c;
            cout << "Enter two integer number : ";
            cin >> a >> b;
            cout << "a = " << a << "\n"
                 << "b = " << b << endl;
            c = a;
            a = b;
            b = c;
            cout << "after swapping \n";
            cout << "a = " << a << "\n"
                 << "b = " << b << endl;
        }
        //-----------------------------SUM OF N NATURAL NUMBER----------------------//
        else if (c == 'N')
        {
            double n, ans = 0;
            cout << "enter the number : ";
            cin >> n;
            for (double i = 0; i <= n; i++)
            {
                ans += i;
            }
            cout << ans << endl;
        }

        //------------------------------PRODUCT OF N NATURAL NUMBER------------------//
        else if (c == 'P')
        {
            double n, p = 1;
            cout << "Enter the number : ";
            cin >> n;
            for (double i = 1; i <= n; i++)
            {
                p *= i;
            }
            cout << p << endl;
        }

        //---------------------- CALCULATE PERCENTAGE OF 5 SUBJECTS ------------------//
        else if (c == 'R')
        {
            float p, c, m, e, h, total, average, percentage;
            char subject[50];

            cout << "Enter the marks of physics : ";
            cin >> p;
            cout << "Enter the marks of chemistry : ";
            cin >> c;
            cout << "Enter the marks of math : ";
            cin >> m;
            cout << "Enter the marks of English : ";
            cin >> e;
            cout << "Enter the marks of history : ";
            cin >> h;
            cout << "Marks are :\n ";
            cout << "physics : " << p << endl;
            cout << "chemistry : " << c << endl;
            cout << "math : " << m << endl;
            cout << "english : " << e << endl;
            cout << "history : " << h << endl;
            cout << "\n";
            // Calculate total, average and percentage
            total = p + c + m + e + h;
            average = total / 5.0;
            percentage = (total / 500.0) * 100;

            // Output
            cout << "The Total marks   = " << total << "/500\n";
            cout << "The Average marks = " << average << "\n";
            cout << "The Percentage    = " << percentage << "%" << endl;
            if (percentage >= 75)
            {
                cout << "Division = distinction";
            }
            else if (percentage >= 60)
            {
                cout << "Division = 1st division";
            }
            else if (percentage >= 50)
            {
                cout << "Division = 2nd division";
            }
            else if (percentage >= 30)
            {
                cout << "Division = 3rd division";
            }
            else
            {
                cout << "Division = fail";
            }
        }

        else if (c == 'Q')
        {
            int a, b, c, r1, r2, d, realpart, imgpart;
            cout << "enter coefficient of a , b and c ";
            cin >> a >> b >> c;
            d = b * b - 4 * a * c;
            if (d > 0)
            {
                r1 = (-b + sqrt(d)) / (2 * a);
                r2 = (-b - sqrt(d)) / (2 * a);
                cout << "Roots are real and different " << endl;
                cout << "r1 = " << r1 << endl;
                cout << "r2 = " << r2 << endl;
            }
            else if (d > 0)
            {
                cout << "Roots are real and same" << endl;
                r1 = r2 = -b / (2 * a);
                cout << "r1 = " << r1 << endl;
            }
            else
            {
                realpart = -b / (2 * a);
                imgpart = sqrt(-d) / (2 * a);
                cout << "Roots are imaginary and different" << endl;
                cout << "r1 = " << realpart << "+" << imgpart << "i" << endl;
                cout << "r2 = " << realpart << "-" << imgpart << "i" << endl;
            }
        }

        else if (c == '0')
        {
            break;
        }
        else
        {
            cout << "please enter correct operator watch the list carefully.....";
        }
    }

    return 0;
}