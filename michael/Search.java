import java.util.Arrays;
public class Search{
    public static void main(String[] args){
        int[] arr={3,1,4,1,5,9};
        arr=Arrays.sort(arr);
        System.out.println(linearSearch(arr,3));
        System.out.println(binarySearch(arr,3));
    }
    
    public static int binarySearch(int[] arr, int x){
        int min, max, med;
        int[] temp;
        med=arr.length/2;
        min=0;
        max=arr.length-1;
        for (int i=0;i<=arr.length/2;i++){
            if (x<arr[med]){
                max=med;
                med=max/2;
            }
            else if (x>arr[med]){
                min=med;
                med=(max-min)/2;
            }
            else return med;
        }
        return -1;
    }
    
    public static int linearSearch(int[] arr, int x){
        for(int i=0;i<arr.length;i++){
            if (arr[i]==x) return i;
        }
        return -1;
    }
}