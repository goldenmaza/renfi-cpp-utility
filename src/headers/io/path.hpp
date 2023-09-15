/**
 * @author (Mats Richard Hellstrand)
 * @version (14th of September, 2023)
 */

#ifndef PATH_HPP_
#define PATH_HPP_

#include <string>

#include "../io/path.hpp"

using namespace std;

class Path {
	private:
		string destination;

	public:
		Path();
		Path(string destination);
		string getDestination();
};

#endif /* PATH_HPP_ */
