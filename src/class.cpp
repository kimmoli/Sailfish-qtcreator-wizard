#include "%cClassName:l%.h"
#include <QSettings>
#include <QCoreApplication>

%cClassName:c%::%cClassName:c%(QObject *parent) :
    QObject(parent)
{
	m_var = "";
}

void %cClassName:c%::readInitParams()
{
    QSettings settings;
    m_var = settings.value("var", "").toString();

    emit varChanged();
}

%cClassName:c%::~%cClassName:c%()
{
}


QString %cClassName:c%::readVar()
{
    return m_var;
}

void %cClassName:c%::writeVar(QString s)
{
    m_var = s;
	
	emit varChanged();	
}

void %cClassName:c%::clearVar()
{
	m_var = "";
	
	emit varChanged();
}
	