#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const &src);
		Warlock &operator=(Warlock const &src);

		std::map<std::string, ASpell *> arrSpell;
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &title);

		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget &target);
};

#endif
