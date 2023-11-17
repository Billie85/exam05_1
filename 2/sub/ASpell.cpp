#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(const ASpell &other){
	*this = other;
}

ASpell &ASpell::operator=(const ASpell &other){
	this->_name = other._name;
	this->_effects = other._effects;
	return (*this);
}

ASpell::ASpell(std::string const &name, std::string const &effects){
	this->_name = name;
	this->_effects = effects;
}

std::string ASpell::getName() const{
	return(this->_name);
}

std::string ASpell::getEffects() const{
	return(this->_effects);
}

void ASpell::launch(const ATarget &target) const {
	target.getHitBySpell(*this);
}

ASpell::~ASpell(){}