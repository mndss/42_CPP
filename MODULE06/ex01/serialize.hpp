#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <stdint.h>
# include <iostream>

typedef struct s_data { int num; } Data;
uintptr_t	seralize(Data* ptr);
Data *		deserialize(uintptr_t raw);

#endif