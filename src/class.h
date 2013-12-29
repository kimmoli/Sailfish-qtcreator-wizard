#ifndef %cClassName:u%_H
#define %cClassName:u%_H
#include <QObject>

class %cClassName:c% : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString variable READ readVar WRITE writeVar(QString) NOTIFY varChanged())

public:
    explicit %cClassName:c%(QObject *parent = 0);
    ~%cClassName:c%();

    QString readVar();
    void writeVar(QString);
	
	Q_INVOKABLE void readInitParams();
    Q_INVOKABLE void clearVar();

signals:
    void varChanged();

private:
    QString m_var;
};


#endif // %cClassName:u%_H
