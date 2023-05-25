#include "hotel_management.hpp"

void Hotel::quantityItems()
{
    std::cout << "\n\t Quantity of items we have";
    std::cout << "\n Rooms available: ";
    std::cin >> quantityRooms;
    std::cout << "\n Quantity of pasta: ";
    std::cin >> quantityPasta;
    std::cout << "\n Quantity of burger: ";
    std::cin >> quantityBurger;
    std::cout << "\n Quantity of noodles: ";
    std::cin >> quantityNoodles;
    std::cout << "\n Quantity of shake: ";
    std::cin >> quantityShake;
    std::cout << "\n Quantity of chicken: ";
    std::cin >> quantityChicken;
}

void Hotel::Menu()
{
    while (choice != EXIT)
    {
        std::cout << "\n\t\t\t Please select from the menu options";
        std::cout << "\n\n1) Rooms";
        std::cout << "\n2) Pasta";
        std::cout << "\n3) Burger";
        std::cout << "\n4) Noodles";
        std::cout << "\n5) Shake";
        std::cout << "\n6) Chicken";
        std::cout << "\n7) Information regarding sales and collection";
        std::cout << "\n8) Exit";

        std::cout << "\n\n Please enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case ROOMS:
            std::cout << "\n\n Enter the number of rooms you want: ";
            std::cin >> quantity;
            if (quantityRooms - soldRooms >= quantity)
            {
                soldRooms += quantity;
                totalRooms += quantity * 1200;
                std::cout << "\n\n\t\t" << quantity << " room/rooms have been allotted to you";
            }
            else
            {
                std::cout << "\n\tOnly " << quantityRooms - soldRooms << " Rooms remaining in the hotel";
            }
            break;
        case PASTA:
            std::cout << "\n\n Enter pasta quantity: ";
            std::cin >> quantity;
            if (quantityPasta - soldPasta >= quantity)
            {
                soldPasta += quantity;
                totalPasta += quantity * 250;
                std::cout << "\n\n\t\t" << quantity << " pasta is the order";
            }
            else
            {
                std::cout << "\n\tOnly " << quantityPasta - soldPasta << " Pasta remaining in the hotel";
            }
            break;
        case BURGER:
            std::cout << "\n\n Enter burger quantity: ";
            std::cin >> quantity;
            if (quantityBurger - soldBurger >= quantity)
            {
                soldBurger += quantity;
                totalBurger += quantity * 120;
                std::cout << "\n\n\t\t" << quantity << " burger is the order";
            }
            else
            {
                std::cout << "\n\tOnly " << quantityBurger - soldBurger << " Burger remaining in the hotel";
            }
            break;
        case NOODLE:
            std::cout << "\n\n Enter noodle quantity: ";
            std::cin >> quantity;
            if (quantityNoodles - soldNoodles >= quantity)
            {
                soldNoodles += quantity;
                totalNoodles += quantity * 140;
                std::cout << "\n\n\t\t" << quantity << " noodles is the order";
            }
            else
            {
                std::cout << "\n\tOnly " << quantityNoodles - soldNoodles << " Noodles remaining in the hotel";
            }
            break;
        case SHAKE:
            std::cout << "\n\n Enter shake quantity: ";
            std::cin >> quantity;
            if (quantityShake - soldShake >= quantity)
            {
                soldShake += quantity;
                totalShake += quantity * 120;
                std::cout << "\n\n\t\t" << quantity << " shake is the order";
            }
            else
            {
                std::cout << "\n\tOnly " << quantityShake - soldShake << " Shake remaining in the hotel";
            }
            break;
        case CHICKEN:
            std::cout << "\n\n Enter chicken quantity: ";
            std::cin >> quantity;
            if (quantityChicken - soldChicken >= quantity)
            {
                soldChicken += quantity;
                totalChicken += quantity * 150;
                std::cout << "\n\n\t\t" << quantity << " chicken is the order";
            }
            else
            {
                std::cout << "\n\tOnly " << quantityChicken - soldChicken << " Chicken remaining in the hotel";
            }
            break;
        case INFORMATION:
            salesInformation();
            break;
        case EXIT:
            if (choice == EXIT)
            {
                std::cout << "Exit successful";
                break;
            }
        default:
            std::cout << "\n Please select the numbers mentioned above";
            break;
        }
    }
}

void Hotel::salesInformation() const
{
    std::cout << "\n\t\tDetails of sales and collection";
    std::cout << "\n\n Number of rooms we had: " << quantityRooms;
    std::cout << "\n\n Number of rooms we gave for rent: " << soldRooms;
    std::cout << "\n\n Remaining rooms: " << quantityRooms - soldRooms;
    std::cout << "\n\n Total rooms collection for the day: " << totalRooms;

    std::cout << "\n\n Number of pastas we had: " << quantityPasta;
    std::cout << "\n\n Number of pastas we sold: " << soldPasta;
    std::cout << "\n\n Remaining pastas: " << quantityPasta - soldPasta;
    std::cout << "\n\n Total pasta collection for the day: " << totalPasta;

    std::cout << "\n\n Number of burgers we had: " << quantityBurger;
    std::cout << "\n\n Number of burgers we sold: " << soldBurger;
    std::cout << "\n\n Remaining burgers: " << quantityBurger - soldBurger;
    std::cout << "\n\n Total burger collection for the day: " << totalBurger;

    std::cout << "\n\n Number of noodles we had: " << quantityNoodles;
    std::cout << "\n\n Number of noodles we sold: " << soldNoodles;
    std::cout << "\n\n Remaining noodles: " << quantityNoodles - soldNoodles;
    std::cout << "\n\n Total noodles collection for the day: " << totalNoodles;

    std::cout << "\n\n Number of shakes we had: " << quantityShake;
    std::cout << "\n\n Number of shakes we sold: " << soldShake;
    std::cout << "\n\n Remaining shakes: " << quantityShake - soldShake;
    std::cout << "\n\n Total shake collection for the day: " << totalShake;

    std::cout << "\n\n Number of chickens we had: " << quantityChicken;
    std::cout << "\n\n Number of chickens we sold: " << soldChicken;
    std::cout << "\n\n Remaining chickens: " << quantityChicken - soldChicken;
    std::cout << "\n\n Total chicken collection for the day: " << totalChicken;

    std::cout << "\n\n\n Total Collection for the day: " << totalRooms + totalBurger + totalPasta + totalNoodles + totalShake + totalChicken;
}
