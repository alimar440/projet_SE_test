cmake_minimum_required(VERSION 3.19)
project(projet_SE_test LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)
find_package(Qt6 REQUIRED COMPONENTS Widgets Charts)


qt_standard_project_setup()

qt_add_executable(projet_SE_test
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    fifo.h file.h liste.h pcte.h pcter.h priorite_avec_requisition.h priorite_sans_requisition.h processus.h tourniquet.h
    fifo.cpp file.cpp liste.cpp pcte.cpp pcter.cpp priorite_avec_requisition.cpp priorite_sans_requisition.cpp processus.cpp tourniquet.cpp
)

target_link_libraries(projet_SE_test
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS projet_SE_test
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET projet_SE_test
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})

target_link_libraries(projet_SE_test PRIVATE Qt6::Widgets Qt6::Charts)
