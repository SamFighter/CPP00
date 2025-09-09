#include "PhoneBook.hpp"

PhoneBook::PhoneBook()  : _nbContacts(0), _index(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::print_char_search(const std::string& str) const{
    if (str.length() > 10) {
        for (int i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << ".";
    } else {
        std::cout << std::setw(10) << str;
    }
}

void PhoneBook::print_contacts() const {
    for (int i = 0; i < _nbContacts; i++) {
        std::cout << i << "         " <<"|";
        print_char_search(_Contacts[i].getFirstName());
        std::cout << "|";
        print_char_search(_Contacts[i].getLastName());
        std::cout << "|";
        print_char_search(_Contacts[i].getNickName());
        std::cout << std::endl;
    }
}

void PhoneBook::contact_details(int i) const {
	if (i < _nbContacts && !_Contacts[i].getFirstName().empty()) {
		std::cout << "CONTACT {" << i << "} INFO :" << std::endl;
		std::cout << _Contacts[i].getFirstName() << std::endl;
		std::cout << _Contacts[i].getLastName() << std::endl;
		std::cout << _Contacts[i].getNickName() << std::endl;
		std::cout << _Contacts[i].getPhoneNumber() << std::endl;
		std::cout << _Contacts[i].getDarkestSecret() << std::endl;
	}
	else {
		system("clear");
		std::cout << "Error : Contact out of the range or inexistant" << std::endl;
	}
}

void	PhoneBook::search_contact() {
	std::string cmd;

	system("clear");
	while (true)
	{
		std::cout << "                SEARCHING ...              " << std::endl;
		print_contacts();
		std::cout << "                                           " << std::endl;
		std::cout << "                                           " << std::endl;
		std::cout << "                                           " << std::endl;
		std::cout << "                                         type \"q\" to leave  " << std::endl;
		std::cin >> cmd;
		if (cmd == "q")
			break;
		else if (cmd.size() == 1 && std::isdigit(cmd[0]))
			contact_details(std::atoi(cmd.c_str()));
		else {
			system("clear");
			std::cout << "Error : cmd is not digit retry..." << std::endl;
		}
	}
}


void PhoneBook::add() {
    Contact c;
    std::string cmd;

    std::cout << "Firstname: ";
    std::cin >> cmd;
    c.setFirstName(cmd);
    std::cout << "Lastname: ";
    std::cin >> cmd;
    c.setLastName(cmd);
    std::cout << "Nickname: ";
    std::cin >> cmd;
    c.setNickName(cmd);
    std::cout << "PhoneNumber: ";
    std::cin >> cmd;
	for (size_t i = 0; i < cmd.size(); i++)
        if (!std::isdigit(cmd[i])) {
			system("clear");
			std::cout << "ERROR : PhoneNumber must contain only digit" << std::endl;
			return ;
		}
    c.setPhoneNumber(cmd);
    std::cout << "DarkestSecret: ";
    std::cin >> cmd;
	c.setDarkestSecret(cmd);
    _Contacts[_index] = c;
    _index = (_index + 1) % _max;
	system("clear");
	std::cout << "Contact added !" << std::endl;
    if (_nbContacts < _max)
        _nbContacts++;
}

