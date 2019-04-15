#ifndef MINERSGATE_CIO_HPP
#define MINERSGATE_CIO_HPP

#include <string>
#include <vector>

#define ASSET_PATH "assets/"

class CIO
{
public:
	static std::string LoadFile(std::string &path);
	static std::vector<unsigned char> LoadBinaryFile(std::string &path);
};


#endif //MINERSGATE_CIO_HPP
