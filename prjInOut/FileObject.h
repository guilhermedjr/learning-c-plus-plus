#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "File.h"

using namespace std;

class FileObject : public File
{
   private:
	   string fileReader;
   
   public:
	   FileObject() : File() {}

	   void WriteTxt(string fileName, string fileContent) 
	   {
		   this->Create(fileName + ".txt", fileContent);
	   }

	   string ReadTxt(string fileName) 
	   {
		   fileReader = "";
		   if (this->Read(fileName + ".txt", fileReader))
		   {
			   return fileReader;
		   }
		   return "";
	   }
};


