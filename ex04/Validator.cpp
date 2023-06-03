//
// Created by jjy84 on 2023-06-03(003).
//

#include "main.hpp"

Validator::Validator() {
	filename = "";
	s1 = "";
	s2 = "";
}

Validator::~Validator() {}

void Validator::argValidator(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Error: input arguments" << std::endl;
		exit(1);
	}
	this->filename = argv[1];
	this->s1 = argv[2];
	this->s2 = argv[3];
}

void Validator::openFile(std::ifstream &file) {
	file.open(filename.c_str());
	if (file.fail()) {
		std::cerr << "Error: File not found" << std::endl;
		exit(1);
	}
}

void Validator::failFile(std::ifstream &file) {
	file.fail();
	if (!file){
		std::cerr << "Error: File not found" << std::endl;
		exit(1);
	}
}

void Validator::writeFile(std::ofstream &file) {
	file.open((filename + ".replace").c_str());
	if (!file){
		std::cerr << "Error: File not found" << std::endl;
		exit(1);
	}
}

std::string	Validator::getFilename() {
	return (filename);
}

std::string	Validator::getS1() {
	return (s1);
}

std::string	Validator::getS2() {
	return (s2);
}