#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

class File
{
   private:
	   fstream fileStream;
	   string fileLine;

   public:
	   File() {}

	   void Create(string fileName, string fileContent) 
	   {
		   fileStream.open(fileName, ios::out);
		   fileStream << fileContent;
		   fileStream.close();
	   }


	   bool Read(string fileName, string &file) 
	   {
		   fileStream.open(fileName, ios::in);

		   if (fileStream.is_open())
		   {
			   while (getline(fileStream, fileLine))
			   {
				   file += fileLine;
			   }
			   fileStream.close();
			   return true;
		   }
		   return false;
	   }
};


