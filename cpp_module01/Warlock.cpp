#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : name(name), title(title) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const { return name; }

std::string const &Warlock::getTitle() const { return title; }

void Warlock::setTitle(std::string const &title) {
	this->title = title;
}

void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell){
	if (spell)
		arrSpell[spell->getName()] = spell;
}

void Warlock::forgetSpell(std::string spellName){
	if (arrSpell.find(spellName) != arrSpell.end())
		arrSpell.erase(spellName);	
}

void Warlock::launchSpell(std::string spellName, ATarget &target){
	if (arrSpell.find(spellName) != arrSpell.end())
		arrSpell[spellName]->launch(target);
}
