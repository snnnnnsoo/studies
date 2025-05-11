set(SOURCES
    	test_list.cpp
	templates_list.cpp
)

add_executable(test_list ${SOURCES})
target_link_libraries(test_list
	db_lib
    	gtest_main
    	gmock_main
)
add_test(test_list test_list)