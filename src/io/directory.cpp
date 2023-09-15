/**
 * @author (Mats Richard Hellstrand)
 * @version (15th of September, 2023)
 */

#include <list>
#include <string>

#include "../headers/io/path.hpp"
#include "../headers/io/directory.hpp"
#include "../headers/io/file.hpp"

using namespace std;

Directory::Directory(string name) {
	this->name = name;
}

Directory::Directory(string name, list<File> files) {
	this->name = name;
	this->files = files;
}

//Directory::~Directory() {
//	delete files;
//}

void Directory::setName(string name) {
	this->name = name;
}

string Directory::getName() {
	return name;
}

void Directory::setFiles(list<File> files) {
	this->files = files;
}

list<File> Directory::getFiles() {
	return files;
}
