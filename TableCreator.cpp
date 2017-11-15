#include "TableCreator.h"

void TableCreator::CreateTable(const char* fileName, std::vector<std::string> attribute1, std::vector<std::string> attribute2) {
	std::ofstream outfile;
	outfile.open(fileName, std::ios::out | std::ios::trunc);
	for (int i = 0; i < attribute1.size(); i++)
		outfile << attribute1.at(i) << "," << attribute2.at(i) << std::endl;
	outfile.close();
}

void TableCreator::CreateTable(const char* fileName, std::vector<std::string> attribute1, std::vector<std::string> attribute2, std::vector<std::string> attribute3) {
	std::ofstream outfile;
	outfile.open(fileName, std::ios::out | std::ios::trunc);
	for (int i = 0; i < attribute1.size(); i++)
		outfile << attribute1.at(i) << "," << attribute2.at(i) << "," << attribute3.at(i) << std::endl;
	outfile.close();
}

void TableCreator::CreateTable(const char* fileName, std::vector<std::string> attribute1, std::vector<std::string> attribute2, std::vector<std::string> attribute3, std::vector<std::string> attribute4) {
	std::ofstream outfile;
	outfile.open(fileName, std::ios::out | std::ios::trunc);
	for (int i = 0; i < attribute1.size(); i++)
		outfile << attribute1.at(i) << "," << attribute2.at(i) << "," << attribute3.at(i) << "," << attribute4.at(i) << std::endl;
	outfile.close();
}

void TableCreator::CreateTable(const char* fileName, std::vector<std::string> attribute1, std::vector<std::string> attribute2, std::vector<std::string> attribute3, std::vector<std::string> attribute4, std::vector<std::string> attribute5) {
	std::ofstream outfile;
	outfile.open(fileName, std::ios::out | std::ios::trunc);
	for (int i = 0; i < attribute1.size(); i++)
		outfile << attribute1.at(i) << "," << attribute2.at(i) << "," << attribute3.at(i) << "," << attribute4.at(i) << "," << attribute5.at(i) << std::endl;
	outfile.close();
}

void TableCreator::CreateTable(const char* fileName, std::vector<std::string> attribute1, std::vector<std::string> attribute2, std::vector<std::string> attribute3, std::vector<std::string> attribute4, std::vector<std::string> attribute5, std::vector<std::string> attribute6) {
	std::ofstream outfile;
	outfile.open(fileName, std::ios::out | std::ios::trunc);
	for (int i = 0; i < attribute1.size(); i++)
		outfile << attribute1.at(i) << "," << attribute2.at(i) << "," << attribute3.at(i) << "," << attribute4.at(i) << "," << attribute5.at(i) << "," << attribute6.at(i) << std::endl;
	outfile.close();
}