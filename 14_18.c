#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int file_min_max(const char* _output, const char* _input) {
    long   n;
    size_t m, n1, n2;
    char* s, * p, * p1, * p2;
    FILE* fp = fopen(_input, "rb");
    if (fp == NULL)
        return 0;

    fseek(fp, 0L, SEEK_END);
    n = ftell(fp);
    if (n <= 0L) {
        fclose(fp);
        return 0;
    }

    s = (char*)malloc((size_t)(n + 1));
    if (s == NULL) {
        fclose(fp);
        return 0;
    }

    fseek(fp, 0L, SEEK_SET);
    m = fread(s, 1, (size_t)n, fp);
    if (m != (size_t)n) {
        fclose(fp);
        free(s);
        return 0;
    }
    s[m] = '\0';

    p = s;
    m = n1 = n2 = 0;
    p1 = p2 = NULL;
    do {
        if (!*p  (*p == '\n')  (*p == '\r')) {
            if ((m > 0) && (!n1 || m < n1)) {
                n1 = m;
                p1 = p - m;
            }

            if (m > n2) {
                n2 = m;
                p2 = p - m;
            }
            m = 0;
        }
        else
            ++m;
    } while (*p++ != '\0');

    m = (size_t)((p1 != NULL) && (p2 != NULL));
    if (m) {
        fp = freopen(_output, "w+", fp);
        m = (fp != NULL);
        if (m) {
            fprintf(fp, "%.*s\n%.*s", n1, p1, n2, p2);
            fflush(fp);
        }
    }
    fclose(fp);
    free(s);
    return (m == 1);
}

int main(void) {
    char fin[] = "input.txt";
    char fout[] = "output.txt";
    if (!file_min_max(fout, fin))
        puts("error!");
    getchar();
    return 0;
}