#ifndef _server_h_
#define _server_h_

#include <vector>
#include <sys/socket.h>
#include <netinet/in.h>

using namespace std;

class Client;

class Server {

  private:
    static vector<Client> clients;

    //Socket stuff
    int serverSock, clientSock;
    struct sockaddr_in serverAddr, clientAddr;
    char buff[256];

  public:
    Server();
    void AcceptAndDispatch();
    static void * HandleClient(void *args);

  private:
    static void ListClients();
    static void SendToAll(char *message);
    static int FindClientIndex(Client *c); 
};

#endif
