#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell *spell) {
	if (spell)
		arrSpell[spell->getName()] = spell;
}

void SpellBook::forgetSpell(std::string const &spellName) {
	if (arrSpell.find(spellName) != arrSpell.end())
		arrSpell.erase(spellName);
}

ASpell *SpellBook::createSpell(std::string const &spellName) {
	ASpell* tmp = NULL;
	if (arrSpell.find(spellName) != arrSpell.end())
		tmp = arrSpell[spellName];
	return (tmp);
}
