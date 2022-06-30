// import java.io.*;
// import java.util.*;

// public class Main {
   
//    static int []parent;
//    static int[]rank;
//    public static void main(String[] args) throws Exception {
//       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

//       int n = Integer.parseInt(br.readLine());
//       int k = Integer.parseInt(br.readLine());
//       int [][]relations=new int[k][2];
//       for(int i=0;i<k;i++)
//       {
//           String line=br.readLine();
//           int v1=Integer.parseInt(line.split(" ")[0]);
//           int v2=Integer.parseInt(line.split(" ")[1]);
//           relations[i][0]=v1;
//           relations[i][1]=v2;
//       }
      
//       parent=new int[n];
//       rank=new int[n];
//       for(int i=0;i<n;i++)
//       {
//           parent[i]=i;
//           rank[i]=0;
//       }
      
//       for(int i=0;i<relations.length;i++)
//       {
//           union(relations[i][0],relations[i][1]);
//       }

//       // To print the ans 
//       HashMap<Integer,Integer> hs=new HashMap<>();
      
//       for(int i=0;i<parent.length;i++)
//       {
//           hs.put(parent[i],hs.getOrDefault(parent[i],0)+1);
//       }
//       int ans[]=new int[hs.size()];
//       int i=0;
//       for(int vl:hs.values())
//       {
//           ans[i]=vl;
//           i++;
//       }
//       int sum=0;
//       for(i=0;i<ans.length-1;i++)
//       {
//           for(int j=i+1;j<ans.length;j++)
//           {
//               sum+=ans[i]*ans[j];
//           }
//       }
//       System.out.println(sum);
//    }
//    public static int find(int x)
//    {
//        if(parent[x]==x)
//        return x;
//        int st=find(parent[x]);
//        parent[x]=st;
//        return st;
//    }
//    public static void union(int u,int v)
//    {
//        int leadU=find(u);
//        int leadV=find(v);
       
//        if(leadU!=leadV)
//        {
//            int rankU=rank[leadU];
//            int rankV=rank[leadV];
           
//            if(rankU<rankV)
//            {
//                parent[leadU]=leadV;
//            }
//            else if(rankV<rankU)
//            {
//                parent[leadV]=leadU;
//            }
//            else
//            {
//                parent[leadU]=leadV;
//                rank[leadV]++;
//            }
//        }
//    }

// }