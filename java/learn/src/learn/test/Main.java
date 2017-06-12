package learn.test;

import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        if(n<3){
        	System.out.println(-1);
        }
        int[] arr = new int[50];
        for(int i=0; i<n; i++){
            int in = s.nextInt();
            arr[i] = in;
        }
        for(int i=0; i<n; i ++){
            for(int j=0; j<n-i-1; j++){
            	if(arr[j] > arr[j+1]){
                    int tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1]  = tmp;
                }
            }
        }
        int j = 0;
        for(int i=0; i<n; i++){
            if(arr[i]<arr[i+1]){
                j += 1;
                if(j == 2){
                    System.out.println(arr[i+1]);
                    break;
                }
            }
        }
        if(j<2){
        	System.out.println(-1);        	
        }
    }
}