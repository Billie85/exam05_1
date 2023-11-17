#include "SpellBook.hpp"

SpellBook::SpellBook(const SpellBook &other){
	*this = other;
}
SpellBook &SpellBook::operator=(const SpellBook &other){
	_book = other._book;
	return (*this);
}

SpellBook::SpellBook(){}

void SpellBook::learnSpell(ASpell *aspell){
	if (aspell)
		_book[aspell->getName()] = aspell->clone();
}

void SpellBook::forgetSpell(std::string const &name){
	std::map<std::string, ASpell *>::iterator it = _book.find(name);
	if (it != _book.end()){
		delete it->second;
		_book.erase(it);
	}
}

ASpell* SpellBook::createSpell(std::string const &name){
	ASpell *tmp = NULL;
	if (_book.find(name) != _book.end())
			tmp = _book[name];
		return (tmp);
}

SpellBook::~SpellBook(){

	for(std::map<std::string, ASpell *>::iterator it = _book.begin(); it != _book.end(); ++it){
		delete it->second;
	}
	_book.clear();
}