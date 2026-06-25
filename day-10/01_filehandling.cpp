#include <iostream>
#include <fstream>
#include <string>

int main() {

    int choice;
    std::string username, password;
    std::string storedUsername, storedPassword;

    std::cout << "1. Register\n";
    std::cout << "2. Login\n";
    std::cout << "Enter Choice: ";
    std::cin >> choice;

    if (choice == 1) {

        std::cout << "Enter Username: ";
        std::cin >> username;

        std::cout << "Enter Password: ";
        std::cin >> password;

        std::ofstream file(username + ".txt");

        file << username << std::endl;
        file << password << std::endl;

        file.close();

        std::cout << "Registration Successful!\n";
    }

    else if (choice == 2) {

        std::cout << "Enter Username: ";
        std::cin >> username;

        std::cout << "Enter Password: ";
        std::cin >> password;

        std::ifstream file(username + ".txt");

        getline(file, storedUsername);
        getline(file, storedPassword);

        file.close();

        if (username == storedUsername &&
            password == storedPassword) {

            std::cout << "Login Successful!\n";
        }
        else {
            std::cout << "Invalid Username or Password!\n";
        }
    }

    return 0;
}