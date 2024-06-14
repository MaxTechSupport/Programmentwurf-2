#include "../include/developer.hpp"
#include "../include/junior_developer.hpp"
#include "../include/senior_developer.hpp"
#include <gtest/gtest.h>
#include <fstream>

/**
 * @brief Test Fixture for Developer related tests.
 */
class DeveloperTest : public ::testing::Test {
protected:
    JuniorDeveloper* juniorDev; ///< Pointer to a JuniorDeveloper object
    SeniorDeveloper* seniorDev; ///< Pointer to a SeniorDeveloper object
    const std::string logo_file_path = "test_logo.txt"; ///< Path to the test logo file

    /**
     * @brief Sets up the test environment.
     * Creates instances of JuniorDeveloper and SeniorDeveloper.
     * Creates a test logo file.
     */
    void SetUp() override {
        juniorDev = new JuniorDeveloper("Peter Parker", "Spiderman");
        seniorDev = new SeniorDeveloper("Diana Prince", "Wonder Woman");
        
        // Create a mock logo file for testing
        std::ofstream outfile(logo_file_path);
        outfile << "Test Logo";
        outfile.close();
    }

    /**
     * @brief Tears down the test environment.
     * Deletes the instances of JuniorDeveloper and SeniorDeveloper.
     * Removes the test logo file.
     */
    void TearDown() override {
        delete juniorDev;
        delete seniorDev;

        // Remove the mock logo file
        remove(logo_file_path.c_str());
    }
};