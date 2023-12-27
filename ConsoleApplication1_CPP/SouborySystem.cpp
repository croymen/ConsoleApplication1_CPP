#include "SouborySystem.h"
#include <iostream>

#include <fstream>

#include <cstdint>

#include <filesystem>

namespace fs = std::filesystem;



void pathExists(const fs::path& pth, fs::file_status s = fs::file_status{})

{

    std::cout << pth;
    if (fs::status_known(s) ? fs::exists(s) : fs::exists(pth))
        std::cout << " Found\n";
    else
        std::cout << "Not Found\n";
}

void souborovySystemDemo()
{
    const fs::path Filebox{ "Filebox" };
    fs::create_directory(Filebox);
    std::ofstream{ Filebox / "file" };
    fs::create_symlink("Not Exists", Filebox / "symlink");
    pathExists(Filebox);
    for (const auto& entry : fs::directory_iterator(Filebox))
        pathExists(entry, entry.status());
    fs::remove_all(Filebox);
}