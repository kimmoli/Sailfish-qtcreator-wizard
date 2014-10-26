/*
    %ProjectName%, %Summary%
*/

#ifndef %cClassName:u%_H
#define %cClassName:u%_H
#include <QObject>

class %cClassName:c% : public QObject
{
    Q_OBJECT
	Q_PROPERTY(QString version READ readVersion NOTIFY versionChanged())

public:
    explicit %cClassName:c%(QObject *parent = 0);
    ~%cClassName:c%();

	QString readVersion();

signals:
	void versionChanged();

//private:

};


#endif // %cClassName:u%_H
