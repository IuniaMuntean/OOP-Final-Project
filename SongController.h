#pragma once
#include "Repository.h"

class SongController
{
public:
	SongController();
	void add_new_song(std::string artist, std::string title, std::string lyrics, std::string year, std::string url);
	
private:
	Repository* repo;
};

