cmake_minimum_required(VERSION "3.22.1")


project("HelloWorld")

add_executable("${PROJECT_NAME}" "main.cpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin) #${CMAKE_INSTALL_PREFIX}/bin
install(FILES "main.cpp" DESTINATION src/cpp) #${CMAKE_INSTALL_PREFIX}/src