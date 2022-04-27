#include <iostream>
#include <filesystem>

int main(int argc, char* argv[]) {
    for(const auto & entry : std::filesystem::recursive_directory_iterator("all-notes")) {
        std::cout << entry.path() << std::endl;
    }
    if(1 < 5)
    return 0;
}