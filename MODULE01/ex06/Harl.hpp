#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
	private:
 		void		_debug(void);
		void		_info(void);
		void		_warning(void);
		void		_error(void);
	public:
		int		getLevel(std::string level);
		void	printLevelAndAbove(int level);
};

#endif 