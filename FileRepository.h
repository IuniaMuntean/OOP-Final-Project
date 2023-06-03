#pragma once
#include "Repository.h"


class FileRepository : public Repository {
public:
	FileRepository(std::string f)
		: filepath(f) {}
	void load();
	void save();

	void store(const Song& s) override;
	//const Song& find(std::string title, std::string artist) override;
	void remove(const Song& s) override;
private:
	std::string filepath;
};

