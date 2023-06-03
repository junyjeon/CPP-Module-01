// Created by jjy84 on 2023-06-03(003).
//

#ifndef VALIDATOR_H
#define VALIDATOR_H

#include "main.hpp"

class Validator {
private:
	std::string filename;
	std::string s1;
	std::string s2;
public:
	Validator();
	~Validator();
	void argValidator(int argc, char **argv);
	void openFile(std::ifstream &file);
	void failFile(std::ifstream &file);
	void writeFile(std::ofstream &file);
	std::string	getFilename();
	std::string	getS1();
	std::string	getS2();
};


#endif //VALIDATOR_H