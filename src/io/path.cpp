/**
 * @author (Mats Richard Hellstrand)
 * @version (14th of September, 2023)
 */

#include <list>
#include <string>

#include "../headers/io/path.hpp"

using namespace std;

Path::Path() {}

Path::Path(string destination) {
	this->destination = destination;
}

string Path::getDestination() {
	return destination;
}
