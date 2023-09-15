/**
 * @author (Mats Richard Hellstrand)
 * @version (14th of September, 2023)
 */

#ifndef IO_IO_MANAGER_UTIL_HPP_
#define IO_IO_MANAGER_UTIL_HPP_

#include <string>
#include <list>
#include <string_view>

#include "../io/directory.hpp"
#include "../io/file.hpp"

using namespace std;

class IOManagerUtil {
	public:
		IOManagerUtil();
		Directory getDirectory(string path, string_view extension);
		list<File> getFiles(string path, string_view extension);
		bool endsWith(string fileName, string_view extension);
};

#endif /* IO_IO_MANAGER_UTIL_HPP_ */
