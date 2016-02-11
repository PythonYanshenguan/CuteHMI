include(../common.pri)

TEMPLATE = lib
TARGET = $$qtLibraryTarget(cutehmi_base)

QT -= gui
QT += qml

# Configure the library for building.
VER_MAJ = $$CUTEHMI_BASE_MAJOR
VER_MIN = 0
VER_PAT = 0
DEFINES += CUTEHMI_BASE_BUILD
DEFINES += CUTEHMI_BASE_DYNAMIC
#CONFIG += dynamic

# Translations.
TRANSLATIONS = locale/cutehmi_base_pl.ts

unix {
    target.path = /usr/lib
    INSTALLS += target
}

SOURCES += \
    src/base/ProjectModel.cpp \
    src/base/XMLProjectBackend.cpp \
    src/base/Error.cpp \
    src/base/PluginLoader.cpp \
    src/base/ScreenObject.cpp \
    src/base/ScreenVisitorDelegate.cpp

HEADERS += \
    src/platform.hpp \
    src/utils/NonCopyable.hpp \
    src/utils/NonMovable.hpp \
    src/utils/Singleton.hpp \
    src/base/ProjectModel.hpp \
    src/base/XMLProjectBackend.hpp \
    src/base/Error.hpp \
    src/base/PluginLoader.hpp \
    src/plugin/IXMLBackend.hpp \
    src/plugin/IPLCClient.hpp \
    src/base/ScreenObject.hpp \
    src/base/ScreenVisitorDelegate.hpp \
    src/plugin/IProjectModelVisitor.hpp
    src/debug/DestructorTest.hpp

DISTFILES +=

RESOURCES +=