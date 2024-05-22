public class Midpointsum{
    public static void main(String[] args){
        int[] arr = {1, 1, 3, 2, 4};
        int prevSum = 0;
        int totalSum = 0;
        int val = 0;
        boolean flag = false;
        for(int i = 0; i < arr.length; i++){
            totalSum += arr[i];
        }
        for(int i = 0; i < arr.length; i++){
            if(prevSum == totalSum-(prevSum+arr[i])){
                val = i;
                flag = true;
                break;
            }
            prevSum += arr[i];
        }
       if(flag == true){
        System.out.println(val);
       }else{
        System.out.println(-1);
       }
    }
}