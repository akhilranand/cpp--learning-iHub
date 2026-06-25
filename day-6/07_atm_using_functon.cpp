#include <iostream>

float deposit(float balance, float depositAmount) {
    return balance + depositAmount;
}

float withdraw(float balance, float amount) {
    return balance - amount;
}

void showBalance(float balance) {
    std::cout << "Current Balance: " << balance << std::endl;
}

int main() {
    char selection;
    float balance = 25000;

    std::cout << "Welcome to the ATM" << std::endl;
    std::cout << "a -> Deposit" << std::endl;
    std::cout << "b -> Balance" << std::endl;
    std::cout << "c -> Withdraw" << std::endl;
    std::cout << "Choose an option: ";
    std::cin >> selection;

    switch (selection) {
        case 'a': {
            float depositAmount;
            std::cout << "How much do you want to deposit: ";
            std::cin >> depositAmount;

            balance = deposit(balance, depositAmount);
            std::cout << "New Balance: " << balance << std::endl;
            break;
        }

        case 'b':
            showBalance(balance);
            break;

        case 'c': {
            float withdrawAmount;
            std::cout << "How much do you want to withdraw: ";
            std::cin >> withdrawAmount;

            balance = withdraw(balance, withdrawAmount);
            std::cout << "New Balance: " << balance << std::endl;
            break;
        }

        default:
            std::cout << "Invalid option!" << std::endl;
    }

    return 0;
}