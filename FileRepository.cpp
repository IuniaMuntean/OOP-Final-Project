#include "FileRepository.h"
#include <fstream>

void FileRepository::load() {
	std::ifstream MyFile(filepath);

	if (!MyFile)
		throw std::runtime_error("File could not be open.");

	// the file wil have the following format:
	// ARTIST
	// SONG TITLE
	// YEAR it was released 
	// URL
	// LYRICS
	// there will be an empty line between songs

	std::string artist;
	std::string title;
	std::string year, url, lyrics;

	while (!MyFile.eof()) {
		std::getline(MyFile, artist);
		std::getline(MyFile, title);
		std::getline(MyFile, year);
		std::getline(MyFile, url);

		std::string line;
		std::getline(MyFile, line);
		lyrics += line;
		while (line != "\n" and !MyFile.eof()) {
			std::getline(MyFile, line);
			lyrics += '\n';
			lyrics += line;
		}
		lyrics += '\n';

		if (artist != "" and title != "" and lyrics != "" and year != "" and url != "") {
			// artist, title, lyrics, year, url
			store(Song{ artist, title, lyrics, year, url });
		}
		else throw SongException(" Missing song attributes at loading.");
		artist = ""; title = ""; lyrics = ""; year = ""; url = "";
	}
	MyFile.close();
}
void FileRepository::save() {
	std::ofstream MyFile(filepath);

	if (!MyFile)
		throw std::runtime_error("Songs could not be saved.");

	if(m_repo.begin() == m_repo.end())
		throw std::runtime_error("Repo is empty.");

	for (auto s : m_repo) {
		MyFile << s.getArtist() << "\n" << s.getTitle() << "\n" << s.getYear() << "\n" << s.getUrl() << "\n";
		for (auto word : s.getLyrics())
			/*if (word == "\n") 
				MyFile << "\n";
			else*/ MyFile << word << " ";
		MyFile << "\n";
	}
	MyFile.close();
}

void FileRepository::store(const Song& s) {
	Repository::store(s);
	save();
}
void FileRepository::remove(const Song& s) {
	Repository::remove(s);
	save();
}