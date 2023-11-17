#include "Fireball.cpp"

Fwoosh::Fireball(): ASpell("Fireball", "burnt to a crisp"){}
Fireball::~Fireball(){}

ASpell *Fireball::clone() const{
	return (new Fireball());
}