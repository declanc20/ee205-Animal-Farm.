cmake_minimum_required(VERSION 3.22)
project(ee205_lab_08d_animal_farm_1_to_clion)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205_lab_08d_animal_farm_1_to_clion main.cpp addCats.cpp addCats.h config.h catDataBase.cpp catDataBase.h deleteCats.cpp deleteCats.h reportCats.cpp reportCats.h updateCats.cpp updateCats.h convertenum.cpp convertenum.h Cat.cpp Cat.h gender.h Color.h Weight.cpp Weight.h Node.cpp Node.cpp Node.h List.cpp List.h)
