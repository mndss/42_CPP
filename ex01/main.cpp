#include <Contact.hpp>
#include <PhoneBook.hpp>


int	main(void) {
	std::string line;
	PhoneBook	phonebook;
	bool		runPhonebook;

	runPhonebook = true;
	while (runPhonebook) {
		std::cout << "Command: "; 
		std::getline(std::cin, line);
		runPhonebook = phonebook.ParseInput(line);
	}
	return 0;
}

// I have to implement two classes:
// Inside this class i need be able store 8 contacts (if the user
// tries add the 9th contact, replace the oldest one by new contact)
// Dynamic allocation is forbidden

//--------------------------------------------------------------------------

// - pegar o imput do ususario no terminal [x]
// - parsear e descobrir qual comando é (add, search, exit) [x]
// - encaminhar pro workflow certo [x]
// - ter os algoritmos para cada comando
	// - ADD: 
		// uma função que vai setar na minha classe os inputs vindos do terminal e vai retornar essa classe pra mim 
		// e atribuir a um index do meu array de contatos 
	// -SEARCH 
		// printa todos os contatos da lista 
		// espera um segundo comando para mostrar detalhadatemente um contato 
		// printa todas as informações desse contato
	// - EXIT 
		// sai do loop
