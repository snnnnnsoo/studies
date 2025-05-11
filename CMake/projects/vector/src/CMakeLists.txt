target_sources(vec_lib
    PRIVATE
        vector.cpp)

target_include_directories(vec_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR})
    