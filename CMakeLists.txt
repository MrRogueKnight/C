cmake_minimum_required(VERSION 3.5.0)
project(C_Lab VERSION 0.1.0 LANGUAGES C)

add_executable(C_Lab 0. demo.c 1. Data Types.c 2. Name Storing in Data Types.c 3. Celsius to Fahrenheit No Brackets (Cx9by5+32).c 4. Celsius to Fahrenheit (Cx(9by5)+32).c 5. i. Addition using int.c 5. ii. Addition using double.c 6. Division of Two Nmbers.c 7. Array.c 8. BODMAS.c)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
