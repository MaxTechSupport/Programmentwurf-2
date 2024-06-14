#include "../include/developer.hpp"
#include "../include/junior_developer.hpp"
#include "../include/senior_developer.hpp"


#include <iostream>
#include <memory>
#include <vector>

auto main() -> int {
    std::vector<std::shared_ptr<Developer>> developers; ///< Vector to hold shared pointers to Developer objects

    auto senior = std::make_shared<SeniorDeveloper>("Walter White", "Heisenberg"); ///< Create a SeniorDeveloper
    auto junior = std::make_shared<JuniorDeveloper>("Carl Johnson", "CJ"); ///< Create a JuniorDeveloper

    // Load logos from files
    senior->load_logo_from_file("../assets/senior_logo.txt");
    junior->load_logo_from_file("../assets/junior_logo.txt");

    // Add developers to the vector
    developers.push_back(senior);
    developers.push_back(junior);

    // Iterate over each developer and solve problem
    for (const auto& dev : developers) {
        std::cout << "Solving a problem:" << std::endl;
        dev->solve_problem();
    }
    return 0;
}
