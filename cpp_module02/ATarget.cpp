#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(const ATarget &other){
	*this = other;
}

ATarget &ATarget::operator=(const ATarget &other){
	this->_type = other._type;
	return (*this);
}

ATarget::ATarget(std::string const &type){
	this->_type = type;
}

std::string ATarget::getType() const{
	return (this->_type);
}

void ATarget::getHitBySpell(const ASpell &aspell) const{
	std::cout << this->_type << " has been " << aspell.getEffects() << "!" << std::endl;
}

ATarget::~ATarget(){}