#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>

class ATarget;

class ASpell {
	private:
		std::string _name;
		std::string _effects;

	public:
		ASpell(const ASpell &other);
		ASpell &operator=(const ASpell &other);
		ASpell();
		virtual ~ASpell();
		ASpell(std::string const &name, std::string const &effects);
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell *clone() const = 0;
		void launch(const ATarget &target) const;
};

#include "ATarget.hpp"

#endif