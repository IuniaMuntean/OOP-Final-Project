#include "Song.h"

Song::Song(std::string artist, std::string title, std::string lyrics, std::string year) {
	m_artist = artist;
	m_title = title;

	// converting to lowercase 
	
	for (int i = 0; i < lyrics.size(); i++)
		if (lyrics[i] >= 'A' and lyrics[i] <= 'Z')
			lyrics[i] = lyrics[i] + ('a' - 'A');

    std::string word = "";
    unsigned int word_counter = 0;
    for (auto x : lyrics)
    {
        if (!(x >= 'a' and x <= 'z') and x != ' ')
            continue;
        if (x == ' ')
        {
            m_lyrics.push_back(word); 
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
std::vector<std::string> Song::getLyrics() const  {
    return m_lyrics;
}