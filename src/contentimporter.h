#ifndef CONTENTIMPORTER_H
#define CONTENTIMPORTER_H

#include <QtCore>

#include "domnode.h"

class ContentImporter
{
public:
	ContentImporter();
	~ContentImporter();

    virtual bool CanImport(const QByteArray& buffer, QString extension, QPointer <DOMNode> props) = 0;
    virtual QPointer<QObject> Import(const QByteArray& buffer, QPointer <DOMNode> props) = 0;

};

#endif
