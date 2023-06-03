//
// Created by jjy84 on 2023-06-03(003).
//

#include "main.hpp"

int main(int argc, char **argv)
{
	Validator	validator;
	std::string line;

	validator.argValidator(argc, argv);
	Reader reader(validator);
	while (std::getline(reader.readFile, line))
	{
		size_t idx = line.find(validator.getS1());
		while (idx != std::string::npos)
		{
			line.insert(idx, validator.getS2());
			line.erase(idx + validator.getS2().length(), validator.getS1().length());
			idx = line.find(validator.getS1(), idx + validator.getS2().length());
		}
		reader.writeFile << line << std::endl;
	}
	reader.readFile.close();
	reader.writeFile.close();

	return (0);
}