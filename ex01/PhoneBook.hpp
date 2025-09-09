#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
	  static const int		_max = 8;
	  Contact				_Contacts[_max];
	  int					_nbContacts;
	  int					_index;

	  void print_char_search(const std::string& str) const;

	public:
		PhoneBook();
		~PhoneBook();

		void search_contact();
		void print_contacts() const;
		void contact_details(int i) const;
		void add();
};

#endif
