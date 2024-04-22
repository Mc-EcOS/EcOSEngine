cmake_minimum_required(VERSION 3.10)
project(EcOSEngine)

# Ajoutez le répertoire de construction à CMAKE_MODULE_PATH
list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})


# Spécifiez les bibliothèques dont vous avez besoin ici
# Notez que le nom de la bibliothèque est en minuscules
find_package(SDL2 REQUIRED)

# Ajoutez tous les fichiers source de votre projet ici
file(GLOB SOURCES "src/*/*.cpp")
list(APPEND SOURCES "src/main.cpp")
add_executable(EcOSEngine ${SOURCES})

# Liez les bibliothèques à votre exécutable
# Notez que le nom de la bibliothèque est en minuscules
find_package(SDL2 REQUIRED)
target_link_libraries(EcOSEngine ${SDL2_LIBRARIES})