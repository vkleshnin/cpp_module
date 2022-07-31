#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Wrong arguments" << std::endl;
		return (1);
	}
	std::ifstream fin(argv[1]);
	if (fin.is_open()) {
		std::string filename = argv[1];
		filename.append(".replace");
		std::ofstream fout(filename);
		std::size_t sPos;
		std::string temp;
		while (std::getline(fin, temp)) {
			sPos = temp.find(argv[2]);
			if (sPos != std::string::npos) {
				temp.erase(sPos, strlen(argv[2]));
				temp.insert(sPos, argv[3]);
			}
			fout << temp << std::endl;
		}
		fin.close();
		fout.close();
	} else {
		std::cout << "File is not opened" << std::endl;
		return 1;
	}
	return 0;
}
