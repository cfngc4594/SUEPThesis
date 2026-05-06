#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

int main(void) {
  int sock = socket(AF_INET, SOCK_STREAM, 0);
  if (sock < 0) {
    return 1;
  }

  struct sockaddr_in addr;
  addr.sin_family = AF_INET;
  addr.sin_port = htons(80);
  inet_pton(AF_INET, "1.1.1.1", &addr.sin_addr);

  int ret = connect(sock, (struct sockaddr *)&addr, sizeof(addr));
  close(sock);

  return ret == 0 ? 0 : 1;
}
