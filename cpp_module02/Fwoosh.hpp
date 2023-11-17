#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh: public ASpell {
	public:
		Fwoosh();
		~Fwoosh();
		ASpell *clone() const;
};

#endif

// * Fireball (Name: "Fireball", Effects: "burnt to a crisp")
// * Polymorph (Name: "Polymorph", Effects: "turned into a critter")