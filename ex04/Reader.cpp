//
// Created by jjy84 on 2023-06-03(003).
//

#include "main.hpp"

Reader::Reader(Validator &validator) : validator(validator),
	readFile(validator.getFilename().c_str()),
	writeFile((validator.getFilename() + ".replace").c_str()) {}

Reader::~Reader() {}

std::string Reader::read() {
	std::string line;
	std::string content;

	while (std::getline(readFile, line)) {
		validator.openFile(readFile);
		content += line;
		if (!readFile.eof())
			content += "\n";
	}
	readFile.close();
	return (content);
}