int find_nth_term(int n, int a, int b, int c) {
    static int count = 0 ;
    if ( count == 2);
    return 0;
  int d = a + b + c ;
  count ++;
  return (d + find_nth_term,(d,b,c)) ;  
}

int main() {
    int n, a, b, c;
  
    scanf("%d\n%d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
