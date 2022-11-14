#include <iostream>
#include "my_lib.h"
#include "config.hpp"
#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>
#include <fmt/format.h>
#include <cxxopts.hpp>

using namespace std;

int main(int argc, char **argv)
{
    auto welcome_message = fmt::format("Welcome to {} v{}\n", project_name, project_version);
    cout << endl;
    spdlog::info(welcome_message);


    cout << "\n hello CMake World  \n";

    cout << "JSON LIB VERSION: " << NLOHMANN_JSON_VERSION_MAJOR << ".";
    cout << NLOHMANN_JSON_VERSION_MINOR << ".";
    cout << NLOHMANN_JSON_VERSION_PATCH << endl;

    add(3, 4);

    cxxopts::Options options(project_name.data());
    options.add_options("arguments")("h,help", "Print usage");

    auto result = options.parse(argc, argv);

    if (result.count("help"))
    {
        cout << options.help() << "\n";
    }


    cout << endl;
    return 0;
}
