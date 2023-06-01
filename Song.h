#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstring>

class Song
{
private:
	std::string m_artist;
	std::string m_title;
	std::string m_year;
	std::string m_url;
protected:
	std::vector<std::string> m_lyrics;
public:
	Song(std::string, std::string, std::string, std::string, std::string);
	std::string getArtist() const;
	std::string getTitle() const;
	std::string getYear() const;
	std::string getUrl() const;
	std::vector<std::string> getLyrics() const;

};

