    #include <iostream>
    using namespace std;
    int reverseDigits (int num);
    int main ()
    {
    int num;
    cout << "Enter an integer number:" << endl;
    cin >> num;

    cout << "The reverse number is" << reverseDigits (num) << endl;


    }

    int reverseDigits (int num)
    {
    int digit;
    int revnum = 0;
    while (num=! 0)
    {
    digit = num% 10;
    num = num / 10;
    revnum = (revnum * 10) + digit;
    cin >> num;
    }

    return revnum;
    }

