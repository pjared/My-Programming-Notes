#include <iostream>
#include <filesystem>

int main(int argc, char* argv[]) {
    for(const auto & entry : std::filesystem::recursive_directory_iterator("all-notes")) {
        if(entry.is_directory()) { // Only look at directories
            std::cout << entry.path() << std::endl;
        }
    }
    return 0;
}