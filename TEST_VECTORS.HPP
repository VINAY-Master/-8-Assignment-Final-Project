#ifndef TEST_VECTORS_HPP
#define TEST_VECTORS_HPP

#include <string>
#include <vector>
#include <utility>

// Test vectors from NIST
struct TestVector {
    std::string input;
    std::string expected_hash;
};

std::vector<TestVector> test_vectors = {
    // Empty string
    {"", "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855"},
    
    // Simple string
    {"abc", "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"},
    
    // Longer test
    {"abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq",
     "248d6a61d20638b8e5c026930c3e6039a33ce45964ff2167f6ecedd419db06c1"},
};

#endif
