#include <stdlib.h>
#define true 0
#define false 1
#define SOCKETNAME "./objectstore_530257"

int os_connect(char *name); //Connette con username name. true se OK, false altrimenti

int os_store(char *name, void *block, size_t len);

void *os_retrieve(char *name);

int os_delete(char *name);

int os_disconnect();