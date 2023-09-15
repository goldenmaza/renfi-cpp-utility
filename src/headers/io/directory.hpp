/**
 * @author (Mats Richard Hellstrand)
 * @version (15th of September, 2023)
 */

#ifndef DIRECTORY_HPP_
#define DIRECTORY_HPP_

#include <list>
#include <string>

#include "../io/path.hpp"
#include "../io/directory.hpp"
#include "../io/file.hpp"

using namespace std;

class Directory: public Path {
	private:
		string name;
		list<File> files;

	public:
		Directory(string name);
		Directory(string name, list<File> files);
//		~Directory();
		void setName(string name);
		string getName();
		void setFiles(list<File> files);
		list<File> getFiles();
};

#endif /* DIRECTORY_HPP_ */
