#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class SpellBook {
	private:
		std::map<std::string, ASpell *> _book;
		SpellBook(const SpellBook &other);
		SpellBook &operator=(const SpellBook &other);

	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell*);
		void forgetSpell(string const &);
		ASpell* createSpell(string const &);
}

#endif