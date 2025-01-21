#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock {
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const &src);
		Warlock &operator=(Warlock const &src);
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &title);

		void introduce() const;
};

#endif
