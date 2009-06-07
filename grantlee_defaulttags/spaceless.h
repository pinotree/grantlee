/*
    Copyright (c) 2009 Stephen Kelly <steveire@gmail.com>
*/

#ifndef SPACELESSNODE_H
#define SPACELESSNODE_H

#include "node.h"
#include "interfaces/taglibraryinterface.h"


using namespace Grantlee;


class SpacelessNodeFactory : public AbstractNodeFactory
{
  Q_OBJECT
public:
  SpacelessNodeFactory();

  Node* getNode( const QString &tagContent, Parser *p, QObject *parent ) const;

};

class SpacelessNode : public Node
{
  Q_OBJECT
public:
  SpacelessNode( NodeList nodeList, QObject *parent );

  QString render( Context *c );

  NodeList getNodesByType( const char * className );

private:
  QString stripSpacesBetweenTags( const QString &input );

  NodeList m_nodeList;

};

#endif
