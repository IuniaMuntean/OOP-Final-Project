#include "Song.h"

Song::Song(std::string artist, std::string title, std::string lyrics, std::string year, std::string url) {
	m_artist = artist;
	m_title = title;
    m_year = year;
    m_url = url;

	// converting to lowercase 
	
	for (int i = 0; i < lyrics.size(); i++)
		if (lyrics[i] >= 'A' && lyrics[i] <= 'Z')
			lyrics[i] = lyrics[i] + ('a' - 'A');

    std::string word = "";
    unsigned int word_counter = 0;
    for (auto x : lyrics)
    {
        if (!(x >= 'a' && x <= 'z') && x != ' ' && x != '\n')
            continue;
        if (x == ' ')
        {
            m_lyrics.push_back(word); 
            word_counter++;
            word = "";
        }
        else if (x == '\n') {
            m_lyrics.push_back(word);
            m_lyrics.push_back("\n");
            word_counter++;
            word = "";
        }
        else {
            word = word + x;
        }
    }
    m_lyrics.push_back(word);
    word_counter++;
}

std::string Song::getArtist() const {
    return m_artist;
}
std::string Song::getTitle() const {
    return m_title;
}
std::string Song::getYear() const {
    return m_year;
}
std::string Song::getUrl() const {
    return m_url;
}
std::vector<std::string> Song::getLyrics() const  {
    return m_lyrics;
}

bool Song::operator==(const Song& other) {
    return (this->m_artist == other.m_artist) && (this->m_title == other.m_title);
}