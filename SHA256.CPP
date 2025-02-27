#include <iostream>
#include <iomanip>
#include "sha256.cpp"
#include "test_vectors.hpp"

void runTests() {
    SHA256 sha256;
    int passed = 0;
    int total = test_vectors.size();
    
    std::cout << "Running SHA-256 tests...\n\n";
    
    for (const auto& test : test_vectors) {
        std::string result = sha256.hash(test.input);
        bool pass = (result == test.expected_hash);
        
        std::cout << "Test: \"" << (test.input.empty() ? "empty string" : test.input) << "\"\n";
        std::cout << "Expected: " << test.expected_hash << "\n";
        std::cout << "Got:      " << result << "\n";
        std::cout << "Status:   " << (pass ? "PASSED" : "FAILED") << "\n\n";
        
        if (pass) passed++;
    }
    
    std::cout << "Summary: " << passed << "/" << total << " tests passed\n";
}

int main() {
    runTests();
    return 0;
}
