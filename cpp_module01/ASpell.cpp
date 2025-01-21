#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects) {}

ASpell::ASpell(ASpell const &src) {
	*this = src;
}

ASpell &ASpell::operator=(ASpell const &src) {
	if (this != &src)
    {
        name = src.name;
        effects = src.effects;
    }
    return *this;
}

ASpell::~ASpell() {}

std::string ASpell::getName() const { return name; }

std::string ASpell::getEffects() const { return effects; }

void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
}
