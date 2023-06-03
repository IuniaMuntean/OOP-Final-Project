#pragma once

#include "Repository.h"
#include "FileRepository.h"

class Repo_TEST {
	void test_find_create_delete() {
		Repository r;
		try {
			// artist, title, lyrics, year, url
			r.store(Song{ "David J", "The Vicious Cabaret" , "This Vicious Cabareeet", "1980", "https//spotify" });
			r.store(Song{ "Queen", "Boh Rap.", "Mamaaa uuu uuuuuu didn't mean to make u cryy", "1975", "https//bs" });
			//r.store(Song{ "Queen", "Boh Rap.", "Mamaaa uuu uuuuuu didn't mean to make u cryy", "1975", "https//bs" });
			
			// title, artist
			r.find("Boh Rap.", "Queen");
			r.find("The Vicious Cabaret", "David J");

			// 
			r.remove(Song{ "Queen", "Boh Rap.", "Mamaaa uuu uuuuuu didn't mean to make u cryy", "1975", "https//bs" });
			//r.remove(Song{ "Queen", "Boh Rap.", "Mamaaa uuu uuuuuu didn't mean to make u cryy", "1975", "https//bs" });
		}
		catch (SongException e) {
			std::cout << e.what();
		}
	}

	void test_load_save() {
	//	Repository r;
		FileRepository test1{ "test1.txt" };
		try {

			test1.load();
			test1.save();

			Song s{ "David J", "The Vicious Cabaret" , "...This Vicious Cabareeet\n nananaaa", "1980", "https//spotify" };
			test1.store(s);
			test1.store(Song{ "Queen", "Boh Rap.", "Mamaaa uuu uuuuuu didn't mean to make u cryy", "1975", "https//bs" });
			//test1.remove(s);
		}
		catch (std::runtime_error r) {
			std::cout << r.what();
		}
		catch (SongException e) {
			std::cout << e.what();
		}
	}
public:
	void testALL() {
		test_find_create_delete();
		test_load_save();
	}
};
