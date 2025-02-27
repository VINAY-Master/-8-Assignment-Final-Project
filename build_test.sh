#!/bin/bash

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'

echo "Building main program..."
g++ -o main main.cpp sha256.cpp text_fetcher.cpp -lcurl -I/nix/store/36kr91f8s509z2r8hqvpayw5bqyqgyzr-curl-8.7.1/include

if [ $? -eq 0 ]; then
    echo -e "${GREEN}Main program built successfully${NC}"
else
    echo -e "${RED}Main program build failed${NC}"
    exit 1
fi

echo -e "\nBuilding test suite..."
g++ -o test_sha256 test_sha256.cpp sha256.cpp -I/nix/store/36kr91f8s509z2r8hqvpayw5bqyqgyzr-curl-8.7.1/include

if [ $? -eq 0 ]; then
    echo -e "${GREEN}Test suite built successfully${NC}"
else
    echo -e "${RED}Test suite build failed${NC}"
    exit 1
fi

echo -e "\nRunning tests..."
./test_sha256

echo -e "\nRunning main program..."
./main
