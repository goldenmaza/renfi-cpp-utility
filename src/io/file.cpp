/**
 * @author (Mats Richard Hellstrand)
 * @version (14th of September, 2023)
 */

#include <string>

#include "../headers/io/file.hpp"

using namespace std;

File::File(string name) {
	this->name = name;
}

void File::setName(string name) {
	this->name = name;
}

string File::getName() {
	return name;
}
