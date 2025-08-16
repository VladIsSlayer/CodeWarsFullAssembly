# Указывает минимальную требуемую версию CMake (3.30)
cmake_minimum_required(VERSION 3.30)

# Задает имя проекта
project(gtest_program)

# Устанавливает целевую платформу для vcpkg (64-битная Windows)
set(VCPKG_TARGET_TRIPLET x64-windows)

# Подключает систему сборки vcpkg для управления зависимостями
include("C:\\lib\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")

# Создает исполняемый файл program из указанных исходников:
add_executable(program 
    src/main.cpp 
    src/functions.cpp 
    include/functions.hpp)

# Добавляет директорию include в пути поиска заголовочных файлов
include_directories(include)
include_directories(include/kyu8)

# Включает поддержку тестирования в CMake (позволяет использовать ctest)
enable_testing()

# Ищет установленный пакет Google Test (GTest)
find_package(GTest CONFIG REQUIRED)

# Создает исполняемый файл для тестов gtest_program из:
add_executable(gtest_program 
    test/tests.cpp 
    src/functions.cpp 
    include/functions.hpp)

add_executable(gtestCountByX
    test/kyu8/Tests_CountByX.cpp
    src/kyu8/CountByX.cpp
    include/kyu8/CountByX.hpp
)

# Связывает тестовую программу с библиотеками GTest:
target_link_libraries(gtest_program PRIVATE GTest::gtest GTest::gtest_main)
target_link_libraries(gtestCountByX PRIVATE GTest::gtest GTest::gtest_main)

# Регистрирует тест в системе CTest:
# - NAME all_tests: имя теста для запуска через ctest
# - COMMAND gtest_program: команда для выполнения теста
add_test(NAME all_tests COMMAND gtest_program)
add_test(NAME kyu8 COMMAND gtestCountByX)