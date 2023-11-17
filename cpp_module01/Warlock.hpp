#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
	private:
		std::string _name;
		std::string _title;
		//not use
		Warlock();
		Warlock(Warlock const &piyo);
		Warlock &operator=(Warlock const &piyo);
		std::map < std::string, ASpell *> _book;
	public:
		Warlock(std::string const &name, std::string const &title);
		const std::string &getName() const;
		const std::string &getTitle() const;
		void setTitle(const std::string &newTitle);
		void introduce() const;
		~Warlock();

		//new
		void learnSpell(ASpell *aspell);
		void forgetSpell(std::string name);
		void launchSpell(std::string name, const ATarget &target);
};

#endif