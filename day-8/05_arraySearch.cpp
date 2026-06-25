#include <iostream>
#include <array>
int main()
{
    int toFind = 3;
    bool find = false;
    int position;
    int arr[5] = {2, 4, 3, 7, 8};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == toFind)
        {
            find = true;
            position = i;
            break;
        }
    }

    if (find == true)
    {
        std::cout << "found" << "at " << position << std::endl;
    }
    else
    {
        std::cout << "donot exist";
    }

    return 0;
}