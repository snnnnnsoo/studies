project(bubble_sort)

target_sources(bubble_sort_lib
	PRIVATE
		bubble_sort.cpp
	PUBLIC
		bubble_sort.hpp
)

target_include_directories(bubble_sort_lib PUBLIC
	"${PROJECT_SOURCE_DIR}/src"
)

add_executable(bubble_sort main.cpp bubble_sort.cpp)
