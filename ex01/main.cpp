#include "PhoneBook.hpp"

int main() {
	PhoneBook		book;
	std::string		cmd;

	system("clear");
	while (cmd != "EXIT")
	{
		std::cout << "                       Welcome                       " << std::endl;
		std::cout << "ADD                    SEARCH                    EXIT" << std::endl;
		std::cout << "                                                     " << std::endl;
		std::cout << "                  Choose your Option                 " << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
            book.add();
        else if (cmd == "SEARCH") {
            book.search_contact();
			system("clear");
		}
        else if (cmd == "EXIT")
            break;
        else {
			system("clear");
            std::cout << "Unknown command!" << std::endl;
			std::cout << "                                                 " << std::endl;
		}
    }
	return (0);
}
