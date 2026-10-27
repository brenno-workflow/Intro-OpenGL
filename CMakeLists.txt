cmake_minimum_required(VERSION 3.24...3.30)
project(MyGame)

include(FetchContent)

# Utilizar C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Gerar compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Desativar componentes opcionais da GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

# Baixar o código-fonte da GLFW
FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG 3.4
    GIT_SHALLOW TRUE
)

FetchContent_MakeAvailable(glfw)

# Baixar o código-fonte do GLAD
FetchContent_Declare(
    glad
    GIT_REPOSITORY https://github.com/Dav1dde/glad.git
    GIT_TAG v2.0.8
    GIT_SHALLOW TRUE
    SOURCE_SUBDIR cmake
)

FetchContent_MakeAvailable(glad)

# Gerar as funções do OpenGL 3.3 Core
glad_add_library(
    glad_gl_core_33
    REPRODUCIBLE
    API gl:core=3.3
)

# Criar o executável
add_executable(${PROJECT_NAME})

# Adicionar o código-fonte
add_subdirectory(src)

# Vincular as bibliotecas
target_link_libraries(${PROJECT_NAME} PRIVATE glfw glad_gl_core_33)

# Avisar o compilador que estamos usando C++23
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)