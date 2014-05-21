#
# Project %ProjectName%, %Summary%
#

TARGET = %ProjectName%

CONFIG += sailfishapp

DEFINES += "APPVERSION=\\\"$${SPECVERSION}\\\""

message($${DEFINES})

SOURCES += src/%ProjectName%.cpp \
	src/%cClassName:l%.cpp
	
HEADERS += src/%cClassName:l%.h

OTHER_FILES += qml/%ProjectName%.qml \
    qml/cover/CoverPage.qml \
    qml/pages/%EkaSivu:c%.qml \
    qml/pages/AboutPage.qml \
    rpm/%ProjectName%.spec \
	%ProjectName%.png \
    %ProjectName%.desktop
