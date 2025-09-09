#include "Contact.hpp"

Contact::Contact() : _firstname(""), _lastname(""), _nickname(""), _phonenumber(""), _darkestsecret("") {}
Contact::~Contact() {}

std::string Contact::getFirstName() const {
	return this->_firstname;
}

std::string Contact::getLastName() const {
	return this->_lastname;
}

std::string Contact::getNickName() const {
	return this->_nickname;
}

std::string Contact::getPhoneNumber() const {
	return this->_phonenumber;
}

std::string Contact::getDarkestSecret() const {
	return this->_darkestsecret;
}

void Contact::setFirstName(const std::string FirstName) {
	if (FirstName.empty()) {
		std::cout << "Error : fild musn't be empty !" << std::endl;
		return;
	}
	this->_firstname = FirstName;
}

void Contact::setLastName(const std::string LastName) {
	if (LastName.empty()) {
		std::cout << "Error : field musn't be empty !" << std::endl;
		return;
	}
	this->_lastname = LastName;
}

void Contact::setNickName(const std::string NickName) {
	if (NickName.empty()) {
		std::cout << "Error : field musn't be empty !" << std::endl;
		return;
	}
	this->_nickname = NickName;
}

void Contact::setPhoneNumber(const std::string PhoneNumber) {
	if (PhoneNumber.empty()) {
		std::cout << "Error : field musn't be empty !" << std::endl;
		return;
	}
	this->_phonenumber = PhoneNumber;
}

void Contact::setDarkestSecret(const std::string DarkestSecret) {
	if (DarkestSecret.empty()) {
		std::cout << "Error : field musn't be empty !" << std::endl;
		return;
	}
	this->_darkestsecret = DarkestSecret;
}

