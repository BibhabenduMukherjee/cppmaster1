import java.util.*;
class KpathQuery {

public static void main(String[] args){

  Scanner sc = new Scanner(System.in);
  int tt = sc.nextInt();
 while(tt >0)
 {

    int I = Integer.MAX_VALUE;
    int n = sc.nextInt();
    int [][] c= new int [n][n];
     

// near 
  
     int near[] = {I,I,I,I,I,I,I,I};
     
     int [][] t = new int [2][6];
     
     int k=0;
     int i,j,mini=I;

     int u =-1;
     int v = -1;
     // find the mini value from the upper triangular matrix 
     for(i = 1; i <=n; i++){
       for (j = i; j <=n; j++) {
         if(c[i][j] < mini){
           mini = c[i][j];
          u = i;
          v = j;
         }

         
       }
     }
      t[0][0] = u;
      t[1][0] = v;
      near[u] = 0;
      near[v] = 0;

      for(i =1; i<=n; i++){
        if(near[i]!=0) {
        if(c[i][u] <c[i][v])
          near[i] = u;
        else
          near[i] = v;
      }
      }
     
    for(i = 1; i <n-1; i++){
      mini = I;

      for(j = 1; j <=n; j++){
        if(near[j]!=0  && c[j][near[j]] < mini ){
          k = j;
          mini = c[j][near[j]];
        }
      }
      t[0][i] = k;
      t[1][i] = near[k];
      near[k] = 0;

      for( j = 1; j<=n; j++){

        if(near[j]!=0 && c[j][k] < c[j][near[j]])
          near[j] = k;
      }
    }
  for(i = 0; i <n-1; i++){
    System.out.println(t[0][i]+" "+t[1][i]);
  }
  }
}


}