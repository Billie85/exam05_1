#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>

class ASpell;

class ATarget {
	private:
		std::string _type;

	public:
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);
		ATarget();
		virtual ~ATarget();
		ATarget(std::string const &type);
		std::string getType() const;
		virtual ATarget *clone() const = 0;
		void getHitBySpell(const ASpell &aspell) const;
};

#include "ASpell.hpp"

#endif