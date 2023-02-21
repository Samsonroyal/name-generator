#include <libxl.h>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    Book* book = xlCreateXMLBook();
    if (book) {
        if (book->load("KAMPALA.xlsx")) {
            Sheet* sheet = book->getSheet(0);
            int num_rows = sheet->lastRow();
            std::vector<std::string> names;
            for (int i = 0; i < num_rows; i++) {
                std::string name = sheet->readStr(i+1, 0);
                if (!name.empty()) {
                    names.push_back(name);
                }
            }
            int num_names = names.size();
            for (int i = 0; i < 10; i++) {
                int random_index = rand() % num_names;
                std::string random_name = names[random_index];
                std::cout << random_name << std::endl;
            }
        }
        book->release();
    }
    return 0;
}

