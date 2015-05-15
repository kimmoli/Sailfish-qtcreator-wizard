/*
    %ProjectName%, %Summary%
*/

#include "%cClassName:l%.h"

%cClassName:c%::%cClassName:c%(QObject *parent) :
    QObject(parent)
{
    emit versionChanged();
    
    _value = 0;
    emit valueChanged();
}

%cClassName:c%::~%cClassName:c%()
{
}

QString %cClassName:c%::readVersion()
{
	return APPVERSION;
}

void %cClassName:c%::writeValue(int val)
{ 
    _value = val; 
    emit valueChanged(); 
}

int %cClassName:c%::readValue()
{
    return _value;
}

void %cClassName:c%::incrementValue()
{
    _value++;
    emit valueChanged();
}