#include <stdio.h>
int main() {
    int n,i,j,a[50],flag=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j])
                flag=1;
        }
    }
    if(flag)
        printf("true");
    else
        printf("false");
    return 0;
}
/*
output:
Enter size: 5
Enter elements:
1
2
4
2
3
true
  */
