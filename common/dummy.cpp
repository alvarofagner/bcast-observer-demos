/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -p dummy.h:dummy.cpp ../xml/dummy.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "dummy.h"

/*
 * Implementation of interface class OrgBluezDummyInterface
 */

OrgBluezDummyInterface::OrgBluezDummyInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgBluezDummyInterface::~OrgBluezDummyInterface()
{
}
