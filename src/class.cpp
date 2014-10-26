/*
    %ProjectName%, %Summary%
*/

#include "%cClassName:l%.h"

%cClassName:c%::%cClassName:c%(QObject *parent) :
    QObject(parent)
{
	emit versionChanged();
}

%cClassName:c%::~%cClassName:c%()
{
}

QString %cClassName:c%::readVersion()
{
	return APPVERSION;
}
