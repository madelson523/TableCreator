#ifndef TABLECREATOR_H
#define TABLECREATOR_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class TableCreator {
public:

	// 2 columns
	static void CreateTable(const char* fileName, std::vector<std::string> attribute1, std::vector<std::string> attribute2);

	// 3 columns
	static void CreateTable(const char* fileName, std::vector<std::string> attribute1, std::vector<std::string> attribute2, 
					std::vector<std::string> attribute3); 
	// 4 columns
	static void CreateTable(const char* fileName, std::vector<std::string> attribute1, std::vector<std::string> attribute2, 
					std::vector<std::string> attribute3, std::vector<std::string> attribute4); 
	// 5 columns
	static void CreateTable(const char* fileName, std::vector<std::string> attribute1, std::vector<std::string> attribute2,
					std::vector<std::string> attribute3, std::vector<std::string> attribute4, std::vector<std::string> attribute5);
	// 6 columns
	static void CreateTable(const char* fileName, std::vector<std::string> attribute1, std::vector<std::string> attribute2,
					std::vector<std::string> attribute3, std::vector<std::string> attribute4, std::vector<std::string> attribute5, 
					std::vector<std::string> attribute6);

};

#endif