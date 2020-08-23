#define true 1
#define false 0
void process(int * P, int N) {

  int i;

  for (i = 1; i <= N; i ++) {
    printf("%d ", P[i]);
  }
  printf("\n");
}
void swap (int * x, int * y) {

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
int B(int N, int c) {

  return ( (N % 2) != 0 ? 1 : c );
}

void permutations(int * P, int N) {

  int c[N];
  int i;

  for (i = N; i > 1; i --) {
    c[i] = 1;
  }
  process(P,N);
  do {
    if  (c[i] < i) {
      swap(&P[B(N,c[i])], &P[i]);
      process(P,N);
      c[i] = c[i] + 1;
      i = 2;
    } else {
      c[i] = 1;
      i ++;
    }
  } while (i <= N);
}

int main() {

  int P[4] = {0,1,2,3};
  permutations(P,3);
  return 0;
}

void
lexperms(int * P, int N);
void lexperms (int * P, int N) {

  int i;
  int c[N];

  for (i = N; i > 1; i --) {
    c[i] = 1;
  }
  i = 2;
  process(P,N);
  do {
    if (c[i] < i) {
      swap(&P[i],&P[c[i]]);
      reverse(P,i-1);
      c[i] ++;
      i = 2;
      process(P,N);
    } else {
      c[i] = 1;
      i ++;
    }
  } while (i <= N);
}
void reverse (int * P, int N) {
 int i = 1;

 while ( i < (N+1-i) ) {
  swap(&P[i], &P[N+1-i]);
  i ++;
 }
}
