#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(std::string type) : type(type) {}

ATarget::ATarget(ATarget const &src) {
	*this = src;
}

ATarget &ATarget::operator=(ATarget const &src) {
	if (this != &src)
        type = src.type;
    return *this;
}

ATarget::~ATarget() {}

std::string const &ATarget::getType() const { return type; }

void ATarget::getHitBySpell(ASpell const &spell) const{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
