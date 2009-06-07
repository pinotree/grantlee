/*
    Copyright (c) 2009 Stephen Kelly <steveire@gmail.com>
*/

#ifndef LOADNODE_H
#define LOADNODE_H

#include "node.h"

using namespace Grantlee;

class LoadNodeFactory : public AbstractNodeFactory
{
public:
  LoadNodeFactory();

  Node* getNode( const QString &tagContent, Parser *p, QObject *parent ) const;

};

class LoadNode : public Node
{
  Q_OBJECT
public:
  LoadNode( QObject *parent );

  QString render( Context *c );
};

#endif
