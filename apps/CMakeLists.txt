add_executable (demo_nqueens_puzzle demo_nqueens_puzzle.cpp)

target_compile_features(demo_nqueens_puzzle PRIVATE cxx_std_17)

target_link_libraries (demo_nqueens_puzzle nqueens_puzzle)
