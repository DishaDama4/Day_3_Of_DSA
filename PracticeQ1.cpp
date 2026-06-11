// Find character lowercase or uppercase .
#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter a character :- ";
    cin >> a;
    // if (a >= 65 && a <= 90)
    // {
    //     cout << "Uppearcase character";
    // }
    // else if (a >= 97 && a < 123)
    // {
    //     cout << "Lowṇercase character ";
    // }
    // else
    // {
    //     cout << "The character dosn't belong to alphabet";
    // }
    // --------- Another logic-------//
    if (a >= 'A' && a <= 'Z')
    {
        cout << "Uppearcase character";
    }
    else if (a >= 'a' && a < 'z')
    {
        cout << "Lowercase character ";
    }
    else
    {
        cout << "The character dosn't belong to alphabet";
    }
    return 0;
}