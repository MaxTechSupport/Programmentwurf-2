#include "../include/developer.hpp"

/**
 * @brief Constructs a Developer object.
 * @param name The name of the developer.
 * @param alias The alias of the developer.
 */
Developer::Developer(const std::string& name, const std::string& alias)
    : name_(name), alias_(alias) {}

/**
 * @brief Simulates drinking coffee.
 * Prints a message to the console indicating that the developer has drunk coffee.
 */
void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!" << "\n" << std::endl;
}
