# The name of your app.
# NOTICE: name defined in TARGET has a corresponding QML filename.
#         If name defined in TARGET is changed, following needs to be
#         done to match new name:
#         - corresponding QML filename must be changed
#         - desktop icon filename must be changed
#         - desktop filename must be changed
#         - icon definition filename in desktop file must be changed
TARGET = %ProjectName%

CONFIG += sailfishapp

SOURCES += src/%ProjectName%.cpp \
	src/%cClassName:l%.cpp
	
HEADERS += src/%cClassName:l%.h

OTHER_FILES += qml/%ProjectName%.qml \
    qml/cover/CoverPage.qml \
    qml/pages/%EkaSivu:c%.qml \
    rpm/%ProjectName%.spec \
    rpm/%ProjectName%.yaml \
	%ProjectName%.png \
    %ProjectName%.desktop
