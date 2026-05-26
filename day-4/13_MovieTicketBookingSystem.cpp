// 13. Movie Ticket Booking System
// • Seat booking
// • Age restriction validation
// • VIP ticket pricing

#include <iostream>
int main()
{

    int age;
    // char selectedSeat;
    char book;
    char ticketType;
    float ticketCost;
    std::cout << "Enter your age : ";
    std::cin >> age;

    if (age >= 15)
    {

        std::cout << "a -> VIP      - 399 " << std::endl;
        std::cout << "b -> Standerd - 249 " << std::endl;
        ;
        std::cout << "Enter ticket type : ";
        ;
        std::cin >> ticketType;

        switch (ticketType)
        {
        case 'a':
            std::cout << "you selected VIP" << "endl";
            ticketCost = 399;
            std::cout << "your cost will be : " << ticketCost << std::endl;

            std::cout << "press 'y' to book the sceet : ";
            std::cin >> book;
            if (book == 'y')
            {
                std::cout << "your VIP ticket has been booked";
            }
            else
            {
                std::cout << "EXIT - Canceled";
            }

            break;

        case 'b':
            std::cout << "you selected Standerd" << "endl";
            ticketCost = 249;
            std::cout << "your cost will be : " << ticketCost << std::endl;

            std::cout << "press 'y' to book the sceet : ";
            std::cin >> book;
            if (book == 'y')
            {
                std::cout << "your Standerd ticket has been booked";
            }
            else
            {
                std::cout << "EXIT - Canceled";
            }

            break;

        default:
            break;
        }
    }
    else
    {
        std::cout << "Sorry you are not allowed to watch this movie ";
    }

    return 0;
}