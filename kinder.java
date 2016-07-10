import java.util.*;
import java.lang.*;
import java.util.*;
class  Arr{
public static void main(String args[] ) throws Exception {
Scanner in=new Scanner(System.in);
int n=in.nextInt();
int i,j,t;
int num[]=new int[n];
int count[]=new int[n];
for(i=0;i<n;i++)
num[i]=in.nextInt();
count[i]=Integer.bitCount(num[i]);
  }
  for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
  if(num[i]<num[j]){
  t=num[i];
  num[i]=num[j];
  num[j]=t;
  t=count[i];
  count[i]=count[j];
  count[j]=t;
  }
  }
  }    
  for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
  if(count[i]<count[j]){
  t=num[i];
  num[i]=num[j];
  num[j]=t;
  t=count[i];
  count[i]=count[j];
  count[j]=t;
  }
  }
  }    
  for(i=0;i<n;i++){
  System.out.print(num[i]+" ");
  }    
}
    
