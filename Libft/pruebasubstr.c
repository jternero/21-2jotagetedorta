char* substr(const char *src, int m, int n)
{
    // obtener la longitud de la string de destino
    int len = n - m;
 
    // asignar (len + 1) caracteres para destino (+1 para carácter nulo adicional)
    char *dest = (char*)malloc(sizeof(char) * (len + 1));
 
    // extrae caracteres entre m'th y n'th índice de la string de origen
    // y copiarlos en la string de destino
    for (int i = m; i < n && (*(src + i) != '\0'); i++)
    {
        *dest = *(src + i);
        dest++;
    }
 
    // terminación nula de la string de destino
    *dest = '\0';
 
    // devuelve la string de destino
    return dest - len;
}