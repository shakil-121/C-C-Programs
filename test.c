
//*Problem StatementOne day Bablu went to the supermarket to buy a new phone. He was eagerly waiting for the launch of the Alien phone. It has a 15000 mAh battery. Finally he bought it! The salesman told him that, if the charge is less than 60% then it will take 1 minute to charge for every 1%. If the charge is less than 80% then it will take 2 minute to charge for every 1%. And finally from 80% it will take 3 minutes to charge 1%.
Now he wants to calculate if the current charge is X% then how many minutes it will take to charge completely. Can you calculate for him?
Input Format
The first line will contain an integer T, the number of test case.
For every test case, one line will contain an integer X, current percentage of charge in the battery.
Constraints

T (1 <= T <=101)
X (0 <= X <= 100)
Output Format

Output a single line for every test case, how many minutes it will take to charge completely.

Sample Input 0

5
35%
88%
0%
100%
68%
Sample Output 0

125 minutes
36 minutes
160 minutes
0 minutes
84 minutes
Explanation 0
For the first test case, from 35% to 60% it will take 25 minutes. From 60% to 80% it will take 40 minutes and from 80% to 100% it will take 60 minutes. In total 25+40+60=125 minutes.//*



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j,c,sub,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c);
    }
    for(j=0;j<n;j++)
    {
        if(35>c || c<60)
            sub=c-100;
            t=sub*1;
            printf("%d minutes\n",t);
        if(60>c || c<80)
             sub=c-100;
             t=sub*2;
            printf("%d minutes\n",t);
        if(80>c || <c100) {
            sub=c-100;
             t=sub*3;
            printf("%d minutes\n",t);
        }
    if(c==100) {
       printf("0 minutes\n");
        }
    }
    return 0;
}

