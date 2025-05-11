set(SOURCES
    	test_vector.cpp
	templates_vector.cpp
)

add_executable(test_vector ${SOURCES})
target_link_libraries(test_vector
	vec_lib
    	gtest_main
    	gmock_main
)
add_test(test_vector test_vector)
