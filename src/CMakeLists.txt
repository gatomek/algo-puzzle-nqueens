set( HEADER_LIST "${NQUEENS_PUZZLE_SOURCE_DIR}/include/nqueens_puzzle/nqueens_puzzle.h")

add_library( nqueens_puzzle nqueens_puzzle.cpp ${HEADER_LIST})

target_include_directories( nqueens_puzzle PUBLIC ../include )

target_compile_features( nqueens_puzzle PUBLIC cxx_std_17)





