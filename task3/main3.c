#include <stdio.h>
#include <stdlib.h>

struct Human {
  char first_name[20];
  char second_name[20];
  int height;
} typedef Human;
int main() {
  int n;
  int ans = scanf("%d", &n);
  if (ans == 1) {
    ans = 1;
    Human b_humans[n];
    for (int i = 0; i < n; i++) {
      scanf("%20s %20s %i", &b_humans[i].first_name, &b_humans[i].second_name,
            &b_humans[i].height);
    }
    int h = 0;
    scanf("%d", &h);
    int flag = 0;
    for (int i = 0; i < n; i++) {
      if (b_humans[i].height >= n) {
        printf("%s %s", b_humans[i].first_name, b_humans[i].second_name);
        if (i < n - 1) {
          printf(", ");
        }
        flag = 1;
      }
    }
    if (!flag) {
      printf("Nothing")
    }
  } else
    printf("n/a");
  return ans;
}