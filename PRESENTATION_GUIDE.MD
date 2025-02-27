# SHA-256 Implementation for Book of Mark
## Code Structure and Implementation Guide

### 1. Project Components

#### a) SHA-256 Implementation (sha256.hpp & sha256.cpp)
- Header file defines the SHA-256 class with constants and helper functions
- Implementation includes:
  - Core SHA-256 functions (ch, maj, ep0, ep1)
  - Message processing and padding
  - Hash computation in 512-bit blocks

#### b) Text Fetcher (text_fetcher.hpp & text_fetcher.cpp)
- Handles web content retrieval using libcurl
- Cleans HTML content to extract pure text
- Manages HTTP connections and error handling

#### c) Main Program (main.cpp)
- Orchestrates the process:
  1. Fetches Book of Mark text
  2. Processes text through SHA-256
  3. Outputs final hash

### 2. How to Test the Code

#### Local Testing
```bash
# Compile the code
g++ -o main main.cpp sha256.cpp text_fetcher.cpp -lcurl -I/path/to/curl/include

# Run the program
./main
```

#### Alternative Test Methods
1. Test with different input texts:
   - Modify the URL in main.cpp
   - Use local text files
   - Test with known SHA-256 test vectors

2. Verify hash output:
   - Compare with online SHA-256 calculators
   - Use OpenSSL command line: `echo -n "text" | openssl sha256`

### 3. Presentation Structure

#### Introduction
- Explain SHA-256's role in blockchain
- Show the Book of Mark hashing requirement

#### Code Demonstration
1. Show the main components:
   - SHA-256 implementation
   - Text fetching and cleaning
   - Main program flow

2. Live Execution
   - Compile and run the program
   - Show the hash generation process
   - Demonstrate with different inputs

#### Verification
- Compare results with other tools
- Show consistency across runs
- Demonstrate security properties

### 4. Key Features to Highlight

1. Security Features:
   - Message padding
   - Block processing
   - Hash finalization

2. Performance Considerations:
   - Efficient bit operations
   - Memory management
   - Error handling

3. Code Quality:
   - Clean architecture
   - Error handling
   - Documentation

### 5. Testing Guidelines

1. Unit Tests:
   - Test individual SHA-256 functions
   - Verify known test vectors
   - Check edge cases

2. Integration Tests:
   - Full pipeline testing
   - Network error handling
   - Memory leak checking

3. Validation:
   - Compare with standard implementations
   - Verify against online tools
   - Test with different text sizes
