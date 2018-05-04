cmake_minimum_required(VERSION 3.5)
project( Token VERSION 0.1.0 )

add_library(Token STATIC src/Token.c)

target_include_directories( Token PUBLIC ${PROJECT_SOURCE_DIR}/include )
target_sources( Token PRIVATE ${PROJECT_SOURCE_DIR}/src/Token )
target_sources( Token PUBLIC ${PROJECT_SOURCE_DIR}/include/Token )

set_target_properties(Token
	PROPERTIES
	ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib"
	LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib"
	RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
)
