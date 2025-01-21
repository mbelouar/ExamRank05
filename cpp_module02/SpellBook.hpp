#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;

class SpellBook {
	private:
		SpellBook(SpellBook const &src);
		SpellBook &operator=(SpellBook const &src);

		std::map<std::string, ASpell *> arrSpell;
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellName);
		ASpell *createSpell(std::string const &spellName);
};

#endif
