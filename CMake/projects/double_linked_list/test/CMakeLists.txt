set(SOURCES
    	tests_list.cpp
	templates_list.cpp
)

add_executable(tests_list ${SOURCES})
target_link_libraries(tests_list
	db_lib
    	gtest_main
    	gmock_main
)
add_test(tests_list tests_list)