#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	private:
		std::string name;
		std::string effects;
	public:
		ASpell(std::string name, std::string effects);
		ASpell(ASpell const &src);
		ASpell &operator=(ASpell const &src);
		virtual ~ASpell();
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell *clone() const = 0;

		void launch(ATarget const &target) const;
};

#endif
