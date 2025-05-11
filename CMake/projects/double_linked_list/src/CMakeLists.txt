target_sources(db_lib
    PRIVATE
        doubly_linked_list.cpp)

target_include_directories(db_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR})