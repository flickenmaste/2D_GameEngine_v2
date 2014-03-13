// Will Gilstrap - Game Engine
// 3/13/2014

#include <XML2.h>

using namespace tinyxml2;

void tiny2::parseDoc(const char * filename)
{
	XMLDocument doc;
	doc.LoadFile(filename);

	int loadOkay = doc.LoadFile("settings.xml");

	if(loadOkay != 0)
	{
		std::cout << "File is missing." << std::endl;
		std::cin.get();
		std::cin.get();
		return;
	}

	// Get node
	const char* settings;
	const char* title = doc.FirstChildElement("settings")->FirstChildElement("difficulty")->FirstAttribute()->Value();
}

void tiny2::parseText(const char * filename)
{

}