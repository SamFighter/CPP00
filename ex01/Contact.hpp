#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>

class Contact {
	private:
	  std::string _firstname;
	  std::string _lastname;
	  std::string _nickname;
	  std::string _phonenumber;
	  std::string _darkestsecret;

	public:
	  Contact();
	  ~Contact();

	  std::string getFirstName() const;
	  std::string getLastName() const;
	  std::string getNickName() const;
	  std::string getPhoneNumber() const;
	  std::string getDarkestSecret() const;
	  void setFirstName(const std::string FirstName);
	  void setLastName(const std::string LastName);
	  void setNickName(const std::string NickName);
	  void setPhoneNumber(const std::string PhoneNumber);
	  void setDarkestSecret(const std::string DarkestSecret);
};

#endif
