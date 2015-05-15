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
    Q_PROPERTY(int value READ readValue WRITE writeValue NOTIFY valueChanged())

public:
    explicit %cClassName:c%(QObject *parent = 0);
    ~%cClassName:c%();
    
    Q_INVOKABLE void incrementValue();

	QString readVersion();
    int readValue();
    void writeValue(int val);

signals:
	void versionChanged();
    void valueChanged();

private:
    int _value;

};


#endif // %cClassName:u%_H
