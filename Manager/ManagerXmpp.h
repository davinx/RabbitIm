#ifndef MANAGERXMPP_H
#define MANAGERXMPP_H
#include "Manager.h"
#include "Client/ClientXmpp.h"
#include "Global/GlobalUserQXmpp.h"

class CManagerXmpp
{
public:
    CManagerXmpp();
    
    virtual QSharedPointer<CClient> GetClient();
    virtual QSharedPointer<CGlobalUser> GetGlobalUser();
    
private:
    QSharedPointer<CClientXmpp> m_Client;
    QSharedPointer<CGlobalUserQXmpp> m_User;
};

#endif // MANAGERXMPP_H
