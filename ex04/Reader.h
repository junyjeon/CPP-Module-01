//
// Created by jjy84 on 2023-06-03(003).
//

#ifndef READER_H
#define READER_H

#include "main.hpp"

class Reader {
private:
	Validator& validator;
public:
	Reader(Validator& validator);
	~Reader();
	std::string read();
	std::ifstream readFile;
	std::ofstream writeFile;
};

#endif //READER_H