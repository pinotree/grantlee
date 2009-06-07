/*
    Copyright (c) 2009 Stephen Kelly <steveire@gmail.com>
*/

#ifndef FIRSTOFNODE_H
#define FIRSTOFNODE_H

#include "node.h"

using namespace Grantlee;

class FirstOfNodeFactory : public AbstractNodeFactory
{
public:
  FirstOfNodeFactory();

  Node* getNode( const QString &tagContent, Parser *p, QObject *parent ) const;

};

class FirstOfNode : public Node
{
  Q_OBJECT
public:
  FirstOfNode( QList<FilterExpression> list, QObject *parent );

  QString render( Context *c );

private:
  QList<FilterExpression> m_variableList;
};

#endif
