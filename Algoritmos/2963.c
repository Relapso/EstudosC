int main() {
    
    int n, v, maior, perdeu = 0;
    scanf("%d", &n);
    scanf("%d", &maior);
    while (--n) {
        scanf("%d", &v);
        if (v > maior) {
            perdeu = 1;
            break;
        }
    }
    printf("%c\n", (perdeu? 'N' : 'S'));

    return 0;
}
