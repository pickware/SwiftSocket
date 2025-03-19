#ifndef YUDPSOCKET_H
#define YUDPSOCKET_H

#ifdef __cplusplus
extern "C" {
#endif

int yudpsocket_server(const char *address, int port);
int yudpsocket_recive(int socket_fd, char *outdata, int expted_len, char *remoteip, int *remoteport);
int yudpsocket_close(int socket_fd);
int yudpsocket_client();
void enable_broadcast(int socket_fd);
int yudpsocket_get_server_ip(char *host, char *ip);
int yudpsocket_sentto(int socket_fd, char *msg, int len, char *toaddr, int topotr);

#ifdef __cplusplus
}
#endif

#endif // YUDPSOCKET_H
