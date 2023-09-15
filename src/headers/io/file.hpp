/**
 * @author (Mats Richard Hellstrand)
 * @version (14th of September, 2023)
 */

#ifndef FILE_HPP_
#define FILE_HPP_

#include <string>

#include "../io/path.hpp"

using namespace std;

class File: public Path {
	private:
		string name;

	public:
		File(string name);
		void setName(string name);
		string getName();
};

#endif /* FILE_HPP_ */
