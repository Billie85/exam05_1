#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title){
	this->_title = title;
	this->_name = name;

	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}
const std::string &Warlock::getName() const{
	return (this->_name);
}
const std::string &Warlock::getTitle() const {
	return (this->_title);
}
void Warlock::setTitle(const std::string &newTitle){
	this->_title = newTitle;
}

void Warlock::introduce() const {
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

Warlock::~Warlock(){
	std::cout << this->_name << ": My job here is done!" << std::endl;

	std::map<std::string , ASpell *>::iterator start = this->_book.begin();
	std::map<std::string, ASpell *>::iterator end = this->_book.end();

	while(start != end)
	{
		delete start->second;
		++start;
	}
	this->_book.clear();
}