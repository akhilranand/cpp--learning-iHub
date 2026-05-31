#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    srand(time(0));

    std::string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string lower = "abcdefghijklmnopqrstuvwxyz";
    std::string numbers = "0123456789";
    std::string special = "!@#$%^&*";

    std::string all = upper + lower + numbers + special;

    int passwordLength = 10;

    std::string password = "";

    for(int i = 0; i < passwordLength; i++) {

        int randomIndex = rand() % all.length();

        password += all[randomIndex];
    }

    std::cout << "Generated Password: " << password;

    return 0;
}