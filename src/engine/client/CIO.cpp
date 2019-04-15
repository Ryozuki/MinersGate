#include "CIO.hpp"
#include <fstream>
#include <streambuf>
#include <filesystem>
namespace fs = std::filesystem;

std::string CIO::LoadFile(std::string &path)
{
	std::ifstream t(ASSET_PATH + path);
	std::string str((std::istreambuf_iterator<char>(t)),
					std::istreambuf_iterator<char>());
	t.close();
	return str;
}

std::vector<unsigned char> CIO::LoadBinaryFile(std::string &path)
{
	std::ifstream t(ASSET_PATH + path, std::ios::binary);
	return std::vector<unsigned char>(std::istreambuf_iterator<char>(t), {});
}
