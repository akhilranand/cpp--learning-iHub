#include <iostream>
using namespace std;

int main()
{

    int enteredNum = 123321;

    string numStr = to_string(enteredNum);

    cout << "OG -> " << numStr << endl;

    string new_str = "";
    cout << "empty -> " << new_str << endl;
    int finalnum;

    for (int i = numStr.size() - 1; i >= 0; i--)
    {
        new_str += numStr[i];
    }

    cout << "not empty -> " << new_str << endl;
    finalnum = stoi(new_str);

    if (enteredNum == finalnum)
    {
        cout << " palindrome";
    }
    else
    {
        cout << " not palindrome";
    }

    return 0;
}