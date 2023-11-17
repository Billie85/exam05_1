#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock {
	private:
		std::string _name;
		std::string _title;
		//not use
		Warlock();
		Warlock(Warlock const &piyo);
		Warlock &operator=(Warlock const &piyo);
	public:
		Warlock(std::string const &name, std::string const &title);
		const std::string &getName() const;
		const std::string &getTitle() const;
		void setTitle(const std::string &newTitle);
		void introduce() const;
		~Warlock();
};

#endif