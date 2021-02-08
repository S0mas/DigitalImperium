cmake_minimum_required(VERSION 3.18)

set(PROJECT "DigitalImperium")
project(${PROJECT} LANGUAGES CXX)

#SETTING ICON FOR WINDOWS #######################################################
set(APP_ICON_RESOURCE_WINDOWS "${CMAKE_CURRENT_SOURCE_DIR}/gui/resources/images/icons/DigitalImperium.rc")

#BUILD FLAGS ####################################################################
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options("$<$<CONFIG:RELEASE>:/O2>")

#FINDING PACKAGES ################################################################
find_package(Qt5 COMPONENTS Core Quick Network Concurrent Multimedia LinguistTools REQUIRED)

#SOURCES AND RESOURCES DEFINITION ################################################
set(TS_FILES gui/resources/translations/DigitalImperium_pl_PL.ts)
set(SOURCES
    main.cpp
    gui/qml.qrc
    ${TS_FILES})

#CREATING EXEC + LINK IT MANUALLY CREATED SOURCES AND RESOURCES ##################
add_executable(${PROJECT} ${SOURCES} ${APP_ICON_RESOURCE_WINDOWS})
SET_TARGET_PROPERTIES(${PROJECT} PROPERTIES LINK_FLAGS "/SUBSYSTEM:WINDOWS")
set_property(TARGET ${PROJECT} PROPERTY WIN32_EXECUTABLE true)

#LINKING STUFF ###################################################################
target_compile_features(${PROJECT} PRIVATE cxx_std_20)
target_compile_definitions(${PROJECT} PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(${PROJECT} PRIVATE Qt5::Core Qt5::Quick)

#TRANSLATION STUFF ###############################################################
qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
