#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
void* memset(void*, int, size_t);
void* memcpy(void* dest, const void* src, size_t n);
int strcmp(const char* str1, const char* str2);
void* memmove(void* to, const void* from, size_t numBytes);
#ifdef __cplusplus
}
#endif
