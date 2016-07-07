#ifndef _client_h_
#define _client_h_

class Client {
  public:
    char *name;
    int id;

    //Socket stuff
    int sock;

  public:
    Client();
    void SetName(const char *name);
    void SetId(int id);
};

#endif
