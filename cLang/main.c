//
//  main.c
//  cLang
//
//  Created by Varun Kumar on 06/11/18.
//  Copyright © 2018 Varun Kumar. All rights reserved.
#include <stdio.h>
#define MAX 5
int top=-1,stack[MAX];
//void push(void);
//void pop(void);
//void new();
int main() {
//    int count = 1;
//    int month = 12;
//    int mn,k=0;
//    char str[] = "0987654321 32143243";
   /* for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }*/
   /* for (int j = count ; j>=1;j++){
        printf("%c",str[j]);
        if (str[j] == ' ') {
            printf("\nvarunkumar\n");
        }*/
    
//    for( k = 0;k>0;k++){
//        if (k == 12){
//            printf("12th month\n");
//        }
//    }
//    while (month>0) {
//        mn = month%10;
//
//        if (mn == 2){
//            printf("\n2nd month\n");
//        }
//        mn = mn/10;
//    }
//    int temp,i,j;
//    int arr[] = {50,40,30,200,10};
//    int n = 5;
//    for ( i = 0;i<n-1;i++)
//    {
//        for ( j=0;j<n-1;j++)
//        {
//            if (arr[j]>arr[j+1]){
//                temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//
//            }
//        }
//
//
//
//    }
//
//
//
//    for (i=0;i<n;i++){
//        printf("%d\n",arr[i]);
//    }
    
//    void quicksort(int number[25],int first,int last){
//        int i, j, pivot, temp;
//
//        if(first<last){
//            pivot=first;
//            i=first;
//            j=last;
//
//            while(i<j){
//                while(number[i]<=number[pivot]&&i<last)
//                    i++;
//                while(number[j]>number[pivot])
//                    j--;
//                if(i<j){
//                    temp=number[i];
//                    number[i]=number[j];
//                    number[j]=temp;
//                }
//            }
//            temp=number[pivot];
//            number[pivot]=number[j];
//            number[j]=temp;
//            quicksort(number,first,j-1);
//            quicksort(number,j+1,last);
//        }
//    }
//
//    int main(){
//        int i, count, number[25];
//
//        printf("How many elements are u going to enter?: ");
//        scanf("%d",&count);
//
//        printf("Enter %d elements: ", count);
//        for(i=0;i<count;i++)
//            scanf("%d",&number[i]);
//
//        quicksort(number,0,count-1);
//
//        printf("Order of Sorted elements: ");
//        for(i=0;i<count;i++)
//            printf(" %d",number[i]);
//
//        return 0;

//    int var[] = {5,4,3,23,1,6,9,8,7};
//    int i,j,temp;
//    int a = sizeof(var)/sizeof(var[0]);
//    //int a =9;
//    printf("size is %lu\n",a);
//    int v = a/2;
//    for (j=0;j<a-1;j++){
//    for(i=0;i<a-1;i++){
//        if (var[i] > var[i+1]){
//            temp = var[i];
//            var[i] = var[i+1];
//            var[i+1] = temp;
//        }}}
//    for (i=0;i<a;i++){
//        printf("%d",var[i]);
//    }
//
//        if (var[a-1]>var[a-2]){
//            printf("\n%d\n",var[a-2]);
//        }
    
    
//    char arr[] = "varunkumar";
//    int count;
//    for (int j = 0;arr[j] != '\0';j++){
//        count++;
//    }
//    //printf("%d",count);
//    for(int i=count-1;i>=0;i--){
//        printf("%c",arr[i]);
//        if (arr[i] == "r"){
//        printf("\n%c",arr[i]);
//        }
//    }

//    char str[] = "india";
//    int count;
//    for(int i=0;str[i] != '\0';i++){
//        count++;
//    }
//    for(int j = 0;j<count-1;j++){
//        if(str[j] == "i"){
//            str[j] = "";
//
//        }
//        printf("\n%c",str[j]);
//
//    }
    
   
    
//    while (leapYear>0) {
//        int a = leapYear%2 ;
//        sum = sum+a;
//        int b = leapYear/
//    }
//    for(int j = 0 ; j<2000;j++){
//
//    if (leapYear%4 == 0){
//        printf("\n This is leap year");
//    }
//    else{
//        printf("\n This is not leap year");
//    }
//    }
//    for(int i=1;i<100;i++){
//        int centuryYears = 100*i;
//        printf("\n%d\n",centuryYears);
//
//
//    int centuryYears = 2003;
//        if (centuryYears%400 == 0){
//            printf("\n This is leap year \n");
//        }
//
//        else{
//            printf("\n This is not leap year \n");
//        }
//
//    }
    
                    /////Finding Leap year//////
    //MARK:Finding Leap year
    
//    int leapYear = 90;
//    int sum = 0;
//    int s = 2;
//    int a = 0,n;
//    int leap;
//    int lastTwoDigits;
//    int arr ;
//    while (s>0)
//    {
//        a = leapYear%10;
//        //printf("\n%d\n",a);
//        n = a+sum+n;
//        leap = leapYear/10;
//        printf("\nlast value is %d\n",a);
//        s--;
//        }
//    if (n==0){
//        if(leapYear%400 == 0){
//            printf("\nthis is leap year\n");
//        }
//        else{
//            printf("\nNot leap year\n");
//        }
//    }
//    else{
//        if (leapYear%400!=0){
//            if(leapYear%4 == 0){
//                printf("\nthis is leap yearn\n");
//            }
//            else{
//                printf("\nthis is not leap year\n");
//            }
//        }
//    }

    
    // -------------------------------------------------------------
                // Finding largest number in array
    //MARK:Finding largest number in array
//    int array[] = {23,543,12,90,1123};
////
//    int largest,i,secondLargest,l ;
//    int size = 5;
//    largest = array[1];
//    secondLargest = array[0];
//    for (i = 2; i < size; i++)
//    {
//        if(array[i]>largest){
//            secondLargest = largest;
//            largest = array[i];
//
//        }
//        else if (array[i]>secondLargest&&array[i]<largest){
//            secondLargest = array[i];
//        }
//
//    }
//    printf("\n largest element present in the given array is : %d\n", largest);
//    printf("\n second largest element present in the given array is : %d\n", secondLargest);
//
//    return 0;

    
 // ---------------------------------------------------------------
    /////////////////Sum of All array elements/////////////////
    //MARK:sum
//    int array[] = {1,2,3,4,5,6};
//    int value = sizeof(array)/sizeof(array[0]);
//    printf("\n%d\n",value);
    
    //----------------------------------------------------------------
    
    ///////////////////Reverse array/////////////////
    
    
    //MARK:Reverse array
    
//    int arr[] = {1,2,3,4,5,6,7};
//    int value = sizeof(arr)/sizeof(arr[0]);
//    for (int i=value-1;i>0;i--){
//        printf("\n%d\n",arr[i]);
//}
    //-----------------------------------------------------------
        
    ////////////////////Freq Char/////////////////////////////////
    
    
    //MARK:Freq Char
        
//    char string[] = "varunkumarvv";
//    int count;
//    int strRepeat;
//    char typedChar = 'v';
//
//    for (int j=0;string[j] != '\0';++j){
//        if (typedChar == string[j]){
//            ++strRepeat;
//        }
//    }
//    printf("\n%d\n",strRepeat);
//
    
      //-------------------------------------------------------
        /////////////////Remove Characters in String /////////////
    //MARK:Remove Characters in String
//    char line[150] = "va1@runku58mar";
//    int i, j;
//
//
//    for(i = 0; line[i] != '\0'; ++i)
//    {
//        while (!( (line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0') )
//        {
//            for(j = i; line[j] != '\0'; ++j)
//            {
//                line[j] = line[j+1];
//            }
//            line[j] = '\0';
//        }
//    }
//    printf("Output String: ");
//    puts(line);
//    return 0;

    //------------------------------------------------------------
    
   /////////////////Program to Check Alphabet /////////////
   
   //MARK:Program to Check Alphabet
    
//    char str = 'A';
//    if(str>='a' && str<='z'||str>='A' && str<='Z')
//    {
//        printf("\nThis is alplabit\n");
//    }
//    else{
//        printf("\nThis is not alphabit\n");
//    }
    
    //------------------------------------------------------------
    
    
    /////////////////Check Vowel or consonant /////////////
    
    
  //MARK:Check Vowel or consonant
    
//    char c = '1';
//    if (c>='a' && c<='z')
//    {
//    if(c == 'a'||c=='e'||c == 'i'||c=='o'||c=='u'){
//        printf("\nThis is volel\n");
//    }
//    else{
//        printf("\nThis is consonent\n");
//    }
//    }
//    else{
//        printf("\nyou enter invalid char\n");
//    }
    
    //-------------------------------------------------------------
    
    
    /////////////////Check Vowel in given string /////////////
    
    
    //MARK:Check Vowel in given string
//    char str[] = "varunkumar";
//    int count;
//    for(int i=0;i<10;i++){
//    if(str[i] == 'a'||str[i]=='e'||str[i] == 'i'||str[i]=='o'||str[i]=='u'){
//        count++;
//        printf("\nThere are %c vowels\n",str[i]);
//    }}
//    printf("\nThere are %d vowels\n",count);
    
    
    //-------------------------------------------------------------
    
    
    /////////////////Print ASCII Value /////////////
    
    
    //MARK:Print ASCII Value
    
//    char va = 'G';
//    printf("\n%d\n",va);
    

    //----------------------------------------------------------
    /////////////////Print India to nda /////////////
    
    
    //MARK:Print India to nda
//    char input[1000];
//    printf("enter char");
//    gets(input);
//    char str[] = "India is my country";
//    int i,j;
//    for(i=0;str[i] != '\0';i++){
//        while (!(str[i]>='a' && str[i] <= 'h'||str[i]>='j' && str[i]<'z')) {
////
//            for(j=i;input[j]!='\0';j++){
//
//                input[j] = input[j+1];
//
//            }
//            input[j] = '\0';
//        }
//    }
//    printf("\n%s\n",str);
//
    //----------------------------------------------------------
    /////////////////find words in para /////////////
    //MARK:find words in para
    
//    char str[] = "varun kumar is good ghfhf ghfhgfhg varun varun is vsf";
//    int temp= 0;
//    for(int i=0;str[i]!='\0';i++){
//
//        if(str[i] == ' '){
//            temp++;
//        }
//    }
//    printf("\n%d\n",temp+1);
   
    
    //----------------------------------------------------------
    
    /////////////////print factorial /////////////
    //MARK:print factorial
    
//    int num = 3;
//    int fact = 1;
//    for(int i =1;i<=num;i++){
//        fact *= i;
//
//    }
//    printf("\n %d \n",fact);
    
    
    //----------------------------------------------------------
    
    /////////////////print reverse string /////////////
    //MARK:print reverse string
//    char str[] = "The question mark is used to declare the property as it tells the compiler that this property isoptional the property is oprtional the property may hold the values";
//    int length = strlen(str);
//
//
//    int i;
//    for (i = length - 1; i >= 0; i--) {
//        if (str[i] == ' ') {
//            str[i] = '\0';
//            printf("\n%s\n ", &(str[i])+1);
//        }
//    }
//     printf("%s", str);
    
//----------------------------------------------------------
    
//    char str[] = "varun kumar lksafs";
//    char p ;
//    int i;
//    for( i =0;str[i]!='\0';i++){
//        if(str[i] == ' '){
//            str[i] = '\0';
//           // printf("%s",&(str[i])+1);
//        }
//    }
//    printf("%s", str);
    
    
//    int value = 1234;
//    while (value>1) {
//        value/=10;
//    }
//    printf("%d",value);
    
//    int arr = 512;
//    int arr1 = 213;
//    int i,j,temp,k,l;
//    int d = 3;
//    while (d>0) {
//        int a = arr%10;
//        arr = arr/10;
//        //printf("%d",a);
//        int b = arr1%10;
//        arr1 = arr1/10;
//        d--;
//        if (a==b){
//            printf("equal");
//        }
//        else{
//            temp++;
//            printf("\n%d\n",temp);
//        }
//    }
    
//    int a[] = {1,3,4,2,6};
//    int i,j,temp,o;
//    int x =1;
//    for(i=0;i<5;i++){
//        for(j=i;j<5;j++){
//            if(a[i]>a[j]){
//                temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//    }
////    for (i=0; i<5; i++) {
////        printf("%d",a[i]);
////
////    }
//    for(o=0;o<5;o++){
//        if(a[o]== x){
//            //printf("\n%d\n",a[o]);
//            x++;
//        }
//        else{
//            printf("\nmissing elements %d\n",x);
//            x++;
//        }
//    }
    
//    int arr[] = {9,5,1,2,4,3,5};
//    int i,j,temp;
//    int min = 0;
//    int value=0;
//    int value1=0;
//    int count = 0;
//    for(i=0;i<=6;i++){
//        
//        for(j=i+1;j<=6;j++){
//        
//        if((arr[i]+arr[j])==10){
//            value = arr[i];
//            value1 = arr[j];
//            count++;
//            printf("\n%d\n",value);
//            printf("\n%d\n",value1);
//        }}
//    }
//    printf("\n%d\n",count);
//    
//    
//    
//MARK:QUICK SORT
//    void quicksort(int number[25],int left,int right){
//        int i, j, pivot, temp;
//        if(left<right){
//            pivot=left;
//            i=left;
//            j=right;
//            while(i<j){
//                while(number[i]<=number[pivot]&&i<right)
//                    i++;
//                while(number[j]>number[pivot])
//                    j--;
//                if(i<j){
//                    temp=number[i];
//                    number[i]=number[j];
//                    number[j]=temp;
//                }
//            }
//            temp=number[pivot];
//            number[pivot]=number[j];
//            number[j]=temp;
//            quicksort(number,left,j-1);
//            quicksort(number,j+1,right);
//
//        }
//    }
//
//int main(){
//    int i, count, number[25];
//
//    printf("How many elements are u going to enter?: ");
//    scanf("%d",&count);
//
//    printf("Enter %d elements: ", count);
//    for(i=0;i<count;i++)
//        scanf("%d",&number[i]);
//    quicksort(number,0,count-1);
//    printf("Order of Sorted elements: ");
//    for(i=0;i<count;i++)
//        printf(" %d",number[i]);
//
//    return 0;

//    int a[] = {1,1,2,4,6,6,7,4,3,2};
//    int i,j,temp;
//    //int l=0;
//    for (i=0;i<=9;i++){
//        for(j=i;j<=9;j++){
//            if(a[i]>a[j]){
//                temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//
//            }
//        }
//    }
//    for (i=0; i<=9; i++) {
//        printf("%d",a[i]);
//    }
//    char str[] = "xarunkumarz";
//    int i,j,temp;
//    for(i=0;i<=10;i++){
//        for(j=i;j<=10;j++){
//            if(str[i]>str[j]){
//                temp = str[i];
//                str[i] = str[j];
//                str[j] = temp;
//            }
//        }
//    }
//    for(int k=0;k<=10;k++){
//        printf("\n%c\n",str[k]);
//    }
//    char str[] = "varunKUMAR";
//    int i =0;
//
//    while(str[i] != 0)
//    {
//        while(str[i]>='a'&& str[i]<='z')
//        {
//        str[i] += -32;
//        i++;
//        }
//        while (str[i]>='A'&&str[i]<='Z')
//        {
//            str[i]+= 32;
//            i++;
//        }
//
//    }
//    printf("%s\n",str);
    
//    char str[] = "alkj iopl";
//    int count,i,j;
//    for(i=0;i<=9;i++){
//        for(j=i;j<=9;j++){
//            if(str[i]>str[j]){
//                count = str[i];
//                str[i] = str[j];
//                str[j] = count;
//            }
//        }
//    }
//    for(int k = 0;k<=9;k++){
//        printf("%c",str[k]);
//    }
    
    
    
    
    
//    int arr[] = {1,2,3,4,5,6,7,8,9};
//    int count = 0;
//    int sumValue =0;
//    for(int i=0;i<=8;i++){
//        if (arr[i]+arr[i+1]==5){
//            count++;
//        }
//
//    }
//    printf("%d",count);
    
//    int a[] = {1,2,3,4,5,6,7,18,19};
//    int value = sizeof(a)/sizeof(a[1]);
//    printf("\n%d\n",value);
//    int index = value-1;
//    int count =0;
//    int i;
//    for( i=0;i<value;)
//    {
//        if(i<index){
//            if(a[i]+a[index]==20){
//                count++;
//            }
//            index -=1;
//            continue;
//        }
//        else{
//            i=i+1;
//            index=value-1;
//        }
//    }
//   printf("\n%d\n",count);
    
//    int value[] = {5,4,2,6,1,2,4,0};
//    int i,j,count;
//    for(i=0;i<=7;i++){
//        for(j=i;j<=7;j++){
//            if (value[i] == value[j]){
//                printf("\n%d\n",value[i]);
//
//            }
//        }
//    }

//    int arr[] = {90,3,2,111,234,78,96};
//    int largest = arr[0];
//    int secondlargest = arr[1];
//    int length = 6;
//    int i,j;
//    for(i=0;i<=length;i++){
//        if(largest<arr[i]){
//            secondlargest = largest;
//            largest = arr[i];
//        }
//        else if(arr[i]>secondlargest){
//            secondlargest = arr[i];
//        }
//    }
//
//
//    printf("%d\n",largest);
//    printf("%d\n",secondlargest);
    
    
//
//    char arr[] = "varunkumar";
//    int lenght = 9;
//    for(int i=lenght;i>0;i--){
//        printf("%c",arr[i]);
//    }
    
//    int arr[] = {1,2,3,4,5,6,7};
//    int length = 6;
//    int arr1;
//    int i;
//    for(i=0;i<=length;i++){
//        while(arr[i]>2){
//            printf("%d",arr[i]);
//            i++;
//        }
//    }
    
//    int arr[] = {1,2,3,4,5,6,7,8};
//    int i;
//    int length = 8;
//    int first = arr[0];
//    int second = arr[1];
//    int third = arr[2];
//    for(i=0;i<length;i++){
//        arr[i] = arr[i+(length-5)];
//
//        if (arr[i] == arr[length-1]){
//            arr[length-1] = third;
//        }
//        else if (arr[i] == arr[length-2]){
//            arr[length-2] = second;
//        }
//        else if (arr[i] == arr[length-3]){
//            arr[length-3] = first;
//        }
//    }
//    for(i=0;i<length;i++){
//    printf("\n%d\n",arr[i]);
//    }
    
    
//    int arr[] = {8,5,444,222,1,9,123};
//    int i,j;
//    int big = arr[0];
//    int small=arr[1];
//
//    for (i = 0; i <= 6; i++)
//            {
//                if(big<arr[i]){
//                    small = big;
//                    big = arr[i];
//
//                }
//                else if(small <big){
//                    small = big;
//                }
//
//            }
//    printf("big element is %d\n",big);
//      printf("small element is %d",small);

    
    
//
    
//    int arr[] = {23,544,12,90,1,345};
//    int size = 6;
//    int i,j;
//    int big = arr[1];
//    int small = arr[0];
//    for(i = 2 ;i<size;i++){
//        if(big<arr[i]){
//            small = big;
//            big = arr[i];
//
//        }
//        else if (small<arr[i]){
//            small = arr[i];
//        }
//    }
//    printf("big number is %d\n",big);
//    printf("small number is %d\n",small);

    //MARK:small to caps
//    char a[] = "ajsdbfjhBA";
//    int i = 0;
//    while (a[i]!=0) {
//        while (a[i]>='a'&&a[i]<='z') {
//            a[i] += -32;
//            i++;
//
//        }
//        while (a[i]>='A'&&a[i]<='Z') {
//            a[i] += 32;
//            i++;
//
//        }
//    }
//    printf("%s",a);
    //MARK:FINDING SMALLEST NUMBER
//    int arr[] = {0,12,2,3,1};
//    int i,j,k;
//    int big = arr[1] ;
//    int small= arr[0] ;
//    for(i=2;i<5;i++){
//        if(small>arr[i]){
//            small = arr[i] ;
//        }
//    }
//    printf("%d",small);
    
//    int num = 1234;
//    int temp;
//    while (num!=0) {
//        temp = num%10;
//
//        num/10;
//        num--;
//    }

//MARK:increamenting array from 2nd array
//    int arr[] = {1,2,3};
//    int arr2[] = {4,5,6};
//    int i,j,k,count=0;
//    for(i=0;i<3;i++){
//
//            if(arr[0]<arr2[0]||arr[1]<arr2[1]||arr[2]<arr2[2]){
//                arr[0]++;
//                arr[1]++;
//                arr[2]++;
//        }
//    }
//    for(i=0;i<3;i++){
//    printf("%d\n",arr[i]);
//    }
    
   
//    int atmAmout = 1000;
//
//    int arr[] = {1,2};
//    arr[0] = 500;
//    arr[1] = 500;
//    int i;
//    for(i=0;i<2;i++){
//        atmAmout = atmAmout-arr[i];
//    }
//    if(atmAmout==0){
//        printf("there is no amount please fill the amount");
//    }
    
//    int number = 10;
//    int i;
//    for(i=1;i<=10;i++){
//        number * i;
//
//    }
//    printf("%d",number);
    
//    int a = 1234;
//    while (a!=0) {
//        a = a%10;
//        a--;
//
//    }
//    char str[] = "varunkumar";
//    int i,j,temp;
//    for(i=1;i<=10;i++){
//        for (j=i;j<=10;j++){
//            if(str[i]>str[j+1]){
//                temp = str[i];
//                str[i] = str[j+1];
//                str[j+1] = temp;
//            }
//        }
//    }
//    for(int k = 1 ;k<=10;k++){
//        printf("%c",str[k]);
//    }
    
    
    
//    int arr[] = {5,3,2,7,8};
//    int first;
//    int second ;
//    int i,j,temp;
//    for(i=0;i<=4;i++){
//        for(j=i;j<=4;j++){
//            if(arr[i]>arr[j+1]){
//                temp = arr[i];
//                arr[i] = arr[j+1];
//                arr[j+1] = temp;
//
//            }
//        }
//    }
//
//    for(int k =0;k<=4;k++){
//        printf("%d",arr[k]);
//    }
    
//    char arr[] = "India";
//    int i;
//    for(i=0;i<=5;i++){
//        if(arr[i]=='i' || arr[i] == 'I'){
//            arr[i] = '\0';
//        }
//    }
//    for(int j=0;j<=5;j++){
//        printf("%c",arr[j]);
//    }
//
    
    //MARK:polyndrome
    
    
//    int num = 5335;
//    int temp ;
//    int sum = 0;
//    while (num>0) {
//        temp = num%10;
//        sum = sum *10+temp;
//        num = num/10;
//    }
//    printf("%d",sum);
//    if (sum == num){
//        printf("this is polyndrome");
//    }
//    else{
//        printf("this is not a polyndrome");
//    }
//

    
//    char str[] = "varun kumar is good boy";
//    int i,j;
//    int length = sizeof(str);
//    for(i=0;i>0;i--){
//
//        if(str[i] ==  ' ' ){
//            printf("\n");
//        }
//
//    printf("%c",str[i]);
//
//
//    }}

    //MARK:Imp Reverse sentence
//    char str[] = "this is my name";
//    int i,j;
//    int length = strlen(str);
//    for(i=length-1;i>=0;i--){
//        if(str[i] == ' '){
//            str[i] = '\0';
//            printf("%s \n",&(str[i])+1);
//        }
//
//    }printf("%s",str);
    
    
    //MARK:without for loop print 10 values
    
//    int x = 100;
//began:
//    if(x>0){
//        printf("%d\n",x);
//        x--;
//        goto began;
//
//    }
    
    
    //MARK:using XOR operator finding equal elements
    
    
//    int x = 10;
//    int y = 10;
//    if(!(x^y)){
//        printf("x and y are equall\n");
//    }
//    else{
//        printf("x and y are not equall\n");
//    }
    
    
    
   // int N = 10;
    
   
//        static int x = 1;
//        if (cout << x << " " && x++ < N && main())
//        { }
//        return 0;
    
    
//    int n = 0;
//    while (n++<N) {
//        if(cout << n << "")
//    }
    
    
//MARK:loop without for and goto (Recursive main())
    

//    static int i = 1;
//    if (i <= 10) {
//        printf("%d", i++);
//        main();
//    }
    
    
    
//   static int n = 10;
//    if(n>0){
//        printf("%d",n);
//        n--;
//        main();
//    }
    
    
//MARK:Finding min and max value without using any condition
    
    
//    int a = 10;
//    int b = 11;
//    printf("max element is %d\n",((a+b)+abs(a-b))/2);
//    printf("min element is %d\n",((a+b)-abs(a-b))/2);
    
    //MARK:add two integers without using + operators
    
//    int a = 10;
//    int b = 20;
//    int sum = abs(-a-b);
//    printf("sumis %d",sum);
//

    //MARK:Difference between two integers
//    int arr[] = {32};
//    int index = arr[0];
//    int g = 0;
//    int num = 0;
//    int count = 0;
//
//    for(int j =0;j<2;j++) {
//         num = index%10;
//        g = index/10;
//
//
//    }
//    printf(" value is %d\n",g);
//
//    for(int i=num;i<g;i++){
//        count++;
//    }
//    printf("max diference is %d\n",count);

//MARK:Stack concept push pull
//#include <stdio.h>
//#define MAX 5
//int top=-1,stack[MAX];
//int main() {
//    void push();
//    int val;
//    for(int i=5;i<=10;i++){
//        top = top+1;
//        val = i;
//        stack[top] = i;
//        printf("%d\n",stack[top]);
//        if(top == MAX-1){
//            printf("the stack is full of elements");
//        }
//    }
//void pop();
//        if(top == -1){
//            printf("stack is empty");
//        }
//        else{
//            top = top-1;
//            //printf("pop elements are%d/n",stack[top]);
//        }
//
//
//
//
//
//
//
//
//
//
//
//
//
    
//    void push();
//    int val;
//    for(int i=0;i<=25;i++){
//        top = top+1;
//        val = i;
//        stack[top] = val;
//        if(top == MAX-1){
//            printf("this stack is full");
//        }
//    }
//
//
//    void pull();
//    if(top == -1){
//        printf("this stach is empty");
//    }
//    else{
//        printf("%d\n",stack[top]);
//        top = top-1;
//    }
    
    
    
    
//    int i,j;
//    int count = 0;
//    int temp = 0;
//tag:
//    temp++;
//    for(i=0;i<=30;i++){
//        count++;
//        goto tag1;
//        if(temp == 50){
//            printf("break");
//            break;
//        }
//    }
//tag1:
//    if(count == 30){
//        goto tag;
//    }
    
//    int i,j,l,count = 0;
//    int temp = 0;
//tag1:
//    for(i=0;i<=10;i++){
//        count++;
//    }
//    if (count>=10){
//        goto tag;
//    }
//tag:
//    printf("this meth is calling\n");
//    temp++;
//    if(temp!=20){
//    goto tag1;
//    }
    //int i,j;
    
    
    
    
    
    //MARK: Merge sort
//    int p = 1;
//    int q = 4;
//    int r = 6;
//    int i, j, k;
//    i = 0;
//    j = 0;
//    k = p;
//    int temp=0;
//    int l,h;
//    int arr[] = {1,3,13,12,6,9};
//    int n1 = q - p + 1;
//    int n2 =  r - q;
//     int A[] = {1,3,13,12,6,9};
//    int L[n1], M[n2];
//
//    for ( i = 0; i < n1; i++){
//        L[i] = A[p + i];}
//    for ( j = 0; j < n2; j++){
//        M[j] = A[q + 1 + j];
//    }
//    for(int u=0;u<4;u++){
//    printf("%d\n",L[u]);
//        //printf("%d",M[j]);
//
//    }
//
//
//
//
//
////    int L[] = {1,3,13,12};
////    int M[] = {6,9};
////    int p = 0;
////    int q = 4;
//
////    for(l=0;l<3;l++){
////        for(h=l;h<3;h++){
////            if(L[h]>L[h+1]){
////                temp = L[h];
////                L[h] = L[h+1];
////                L[h+1] = temp;
////
////            }
////
////        }
////    }
////    for(int y = 0 ;y<=3;y++){
////        printf("%d\n",L[y]);
////    }
//   // int z = 7;
//   // printf("%d\n",z/2);
//    while (i < n1 && j < n2)
//    {
//        if (L[i] <= M[j])
//        {
//            arr[k] = L[i];
//            i++;
//        }
//        else
//        {
//            arr[k] = M[j];
//            j++;
//        }
//        k++;
//    }
//    while (i < n1)
//    {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//    while (j < n2)
//    {
//        arr[k] = M[j];
//        j++;
//        k++;
//    }
//    for (int o =0; o<6; o++)
//    {
//       // printf("%d\n",arr[o]);
//    }

    //MARK:push pull
//    int i,j;
//    int val;
//    int arr[] = {};
//    for(i=0;i<24;i++){
//        val = i;
//        top = top + 1;
//        arr[top] = val;
//        printf("%d\n",arr[top]);
//        if(top == MAX-1){
//            printf("the array is full\n");
//            break;
//        }
//
//
//    }
//
//
//    if(top == -1){
//        printf("this is array is empty");
//
//    }
//    else{
//        printf("removed element is %d",arr[top]);
//        top = top-1;
//    }
    
    //MARK:Queue
//    int i,j;
//    int arr[] = {};
//    int val;
//    for (i=0; i<=25; i++) {
//        top = top+1;
//        arr[top] = i;
//        printf("%d\n",arr[top]);
//        if(top == MAX-1){
//            printf("the array is full\n ");
//            break;
//        }
//    }
//
//    for (int y=top; y>=0; y--) {
//        printf("%d\n",arr[y]);
//    }
    
    //MARK:Mergesort
    
//    int arr[] = {1,3,13,12,6,9};
//    int length = 8;
//    int k =0;
//    int L[] = {1,3,12,13};
//    int R[] = {6,9};
//    int i=0;
//    int j=0;
//    int n1 = 4;
//    int n2 = 2;
//
//    while (i<n1&&j<n2) {
//        if(L[i]<=R[j]){
//            arr[k] = L[i];
//            i++;
//        }
//        else{
//            arr[k] = R[j];
//            j++;
//        }
//        k++;
//    }
//    while (i<n1) {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//    while (j<n2) {
//        arr[k] = R[j];
//        j++;
//        k++;
//    }
//    for(int l =0;l<6;l++){
//        printf("The values are %d\n",arr[l]);
//    }
    
    
   
    
    //MARK:Insertion Sort
//    int data[100],n,temp,i,j;
//    printf("Enter number of terms(should be less than 100): ");
//    scanf("%d",&n);
//    printf("Enter elements: ");
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&data[i]);
//    }
//    for(i=1;i<n;i++)
//    {
//        temp = data[i];
//        j=i-1;
//        while(temp<data[j] && j>=0)
//        {
//            data[j+1] = data[j];
//            --j;
//        }
//        data[j+1]=temp;
//    }
//    printf("In ascending order: ");
//    for(i=0; i<n; i++)
//        printf("%d\t",data[i]);
//    return 0;



    
    //MARK:Selection Sort
    
//    int array[100], n, c, d, position, swap;
//    printf("Enter number of elements\n");
//    scanf("%d", &n);
//    printf("Enter %d integers\n", n);
//    for (c = 0; c < n; c++)
//        scanf("%d", &array[c]);
//    for (c = 0; c < (n - 1); c++)
//    {
//        position = c;
//        for (d = c + 1; d < n; d++)
//        {
//            if (array[position] > array[d])
//                position = d;
//        }
//        if (position != c)
//        {
//            swap = array[c];
//            array[c] = array[position];
//            array[position] = swap;
//        }
//    }
//    printf("Sorted list in ascending order:\n");
//
//    for (c = 0; c < n; c++)
//        printf("%d\n", array[c]);
//    return 0;
    
    
    
    
    
    //MARK:Selection Sort Practice:
//    int dataa[100];
//    int n;
//    int j,k,position,swap;
//    printf("enter number of elemeents\n");
//    scanf("%d",&n);
//    for(int i =0;i<n;i++)
//        scanf("%d",&dataa[i]);
//    for(j=0;j<(n-1);j++){
//        position = j;
//        for(k=j+1;k<n;k++){
//            if(dataa[position]>dataa[k])
//                position = k;
//             if (position!=j){
//                swap = dataa[j];
//                dataa[j] = dataa[position];
//                dataa[position] = swap;
//            }
//        }
//    }
//    for( j =0;j<n;j++){
//        printf("%d\n",dataa[j]);
//    }
    
    
    
    
    
//MARK:Insertion Sort Practice
    
//    int data[100];
//    int i,j,temp,n,k;
//    printf("enter number of values\n");
//    scanf("%d",&n);
//    printf("\n enter %d values",n);
//    for(i=0;i<n;i++){
//        scanf("%d",&data[i]);
//    }
//    for(j=1;j<n;j++){
//        temp = data[j];
//        k=j-1;
//        while (data[k]>temp && k>=0){
//            data[k+1] = data[k];
//            k--;
//        }
//        data[k+1] = temp;
//    }
//    for(int y=0;y<n;y++){
//        printf("%d",data[y]);
//    }
//Mark:Finding second big array
//    5
//    45
//    54
//    87
//    0
//    1
//    int a[20], n, i, fbig, sbig, temp;
//    printf("Enter array limit\n");
//    scanf("%d", &n);
//    printf("Enter %d array elements\n", n);
//    for(i=0; i < n ; i++)
//        scanf("%d", &a[i]);
//    fbig = a[0];
//    sbig = a[1];
//    if( sbig > fbig )
//    {
//        temp = sbig;
//        sbig = fbig;
//        fbig = temp;
//    }
//bheemesh.koka@itc.in
//    for(i=2; i < n ; i++)
//        if(a[i] > fbig)
//        {
//            sbig = fbig;
//            fbig = a[i];
//        }
//        else if(a[i] > sbig)
//            sbig = a[i];
//
//    printf("First Big is %d and Second big is %d", fbig, sbig);
//
//    int data[10] ;
//    int n,i ,j,temp;
//    int firstBig,secondBig;
//    printf("enter the values\n");
//    scanf("%d",&n);
//    for(i=0;i<n;i++){
//        scanf("%d",&data[i]);
//    }
//    firstBig = data[0];
//    secondBig = data[1];
//    if(secondBig>firstBig)
//    {
//        temp = secondBig;
//        secondBig = firstBig;
//        firstBig = temp;
//    }
//    for (j=2; j<n; j++) {
//        if(data[j]>firstBig){
//            secondBig = firstBig;
//            firstBig = data[j];
//        }
//        else if(data[j]>secondBig){
//            secondBig = data[j];
//        }
//    }
//    printf("firstbig value is %d\n secondBig Value is %d\n",firstBig,secondBig);
//
//    int a[5];
//    int k,l,i;
//    int temp;
//    int position;
//    printf("entre numbers\n");
//    for( i =0;i<5;i++){
//        scanf("%d",&a[i]);
//    }
//    for(k=0;k<(i-1);k++){
//        position = k;
//        for(l=k+1;l<i;l++){
//            if(a[position]>a[l])
//                position = l;
//            if(position != k){
//                temp = a[k];
//                a[k] = a[position];
//                a[position] = temp;
//            }
//        }
//    }
//    for(int  y =0;y<5;y++){
//        printf("%d\n",a[y]);
//    }
    
//    int arr[5];
//    int i,j,k,l;
//    int temp;
//    int position;
//    printf("enter elements\n");
//    for(i=0;i<5;i++){
//        scanf("%d",&arr[i]);
//    }
//    for(j=0;j<5;j++){
//        position = j;
//        for(k=j+1;k<5;k++){
//            if(arr[position]>arr[k]){
//                position = k;
//            }
//            if(position != j){
//                temp = arr[j];
//                arr[j] = arr[position];
//                arr[position] = temp;
//            }
//        }
//    }
//    for(int p =0;p<5;p++){
//        printf("%d\n",arr[p]);
//    }
//
//
    
//    int a[5];
//    int i,j,l;
//    int temp;
//    int position;
//    printf("enter numbers");
//    for(i=0;i<5;i++){
//        scanf("%d",&a[i]);
//    }
//    for(j=0;j<5;j++){
//        position = j;
//
//        for(l=j+1;l<5;l++){
//            if(a[position]>a[l]){
//                position = l;
//            }
//            if(position!=j){
//                temp = a[j];
//                a[j] = a[position];
//                a[position] = temp;
//            }
//        }
//    }
//    for(int o =0;o<5;o++){
//        printf("%d",a[o]);
//    }
    
//    char name[] = "this is my name";
//    int i;
//    int length = 14;
//    for(i=name[length-1];i>0;i--){
//        if(i == ' '){
//            name[i] = '\0';
//            printf("%s",&(name[i])+1);
//        }
//
//    }
//    printf("%s",name);
//
    
//    char i[] = "a";
//    int j = 0;
//    while(i[j] != 0 ){
//        while (i[j] >= 'a'&&i[j]<='z'){
//            i[j] += -32;
//            j++;;
//        }
//        while (i[j] >= 'A'&&i[j]<='Z'){
//            i[j] += 32;
//            j++;;
//        }
//
//    }
//    printf("%s",i);
//
//    char p ;
//
//    int y = p;
//    int c,k;
//    printf("value is %d\n",y);
//    for (c = 31; c >= 0; c--)
//    {
//        k = y >> c;
//
//        if (k & 1)
//            printf("1");
//        else
//            printf("0");
//    }
//
//    printf("\n");
    
    
//    int arr[] = {5,4,3,2,1};
//    int i,j,k,l;
//    int position;
//    int temp;
//    for(i=0;i<4;i++){
//        position = j;
//        for(k=i+1;k<5;k++){
//            if(arr[position]>arr[k])
//                position = k;
//        }
//        if(position!=j){
//            temp = arr[j];
//            arr[j] = arr[position];
//            arr[position] = temp;
//        }
//    }
//    for(int y=0;y<5;y++){
//        printf("the sorted elemets are %d\n",arr[y]);
//    }
//
    
    
    //Mark:Bubble Sort
    //Time Complexity -- O(n^2)
    
//    int num[5];
//    int i;
//    printf("enter numbers\n");
//    for(i =0;i<4;i++){
//        scanf("%d\n",&num[i]);
//    }
//    int j,l,k,temp;
//    for(j=0;j<4;j++){
//        for(k=0;k<4;k++){
//            if(num[k]>num[k+1]){
//                temp = num[k+1];
//                num[k+1] = num[k];
//                num[k] = temp;
//            }
//        }
//    }
//    for(int p =0;p<5;p++){
//        printf("result is ");
//        printf("%d\n",num[p]);
//    }
//
//
//
//
//
//
//
//
//MARK:Merge Sort
//#include <stdio.h>
//#define max 4
//    int a[5] = { 5,6,3,2,10 };
//    int b[5];
//    void merging(int low, int mid, int high){
//        int l1, l2, i;
//        for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
//            if(a[l1] <= a[l2])
//                b[i] = a[l1++];
//            else
//                b[i] = a[l2++];
//        }
//        while(l1 <= mid)
//            b[i++] = a[l1++];
//        while(l2 <= high)
//            b[i++] = a[l2++];
//        for(i = low; i <= high; i++)
//            a[i] = b[i];
//    }
//    void sort(int low, int high) {
//        int mid;
//
//        if(low < high) {
//            mid = (low + high) / 2;
//            sort(low, mid);
//            sort(mid+1, high);
//            merging(low, mid, high);
//        } else {
//            return;
//        }
//    }
//    int main() {
//        int i;
//        printf("List before sorting\n");
//        for(i = 0; i <= max; i++)
//            printf("%d ", a[i]);
//        sort(0, max);
//        printf("\nList after sorting\n");
//        for(i = 0; i <= max; i++)
//            printf("%d ", a[i]);
//    }
//}
//void merge(int low,int mid,int heigh){
//    int i,l1,l2;
//    for(l1=low,l2=mid+1,i=low;l1<=mid&&l2<=heigh;i++){
//        if(a[l1]<=a[l2])
//            b[i] = a[l1++];
//        else
//            b[i] = a[l2++];
//    }
//    while (l1<=mid) {
//        b[i++] = a[l1++];
//    }
//    while (l2<=heigh) {
//        b[i++] = a[l2++];
//    }
//    for(i=low;i<=heigh;i++){
//        a[i] = b[i];
//    }
//}
//void sort(int low,int heigh){
//    int mid;
//    if(low<heigh){
//        mid = (low+heigh)/2;
//        sort(low,mid);
//        sort(mid+1,heigh);
//        merge(low,mid,heigh);
//    }
//    else{
//        return;
//    }
//}
//int main(){
//    sort(0, max);
//    for(int y = 0;y<=max;y++){
//        printf("%d\n",a[y]);
//    }
//}
//void merge(int low,int mid,int high){
//    int i,l1,l2;
//    for(l1=low,l2=mid+1,i=low;l1<=mid&&l2<=high;i++){
//        if(a[l1]<=a[l2]){
//            b[i] = a[l1++];
//        }
//        else{
//            b[i] = a[l2++];
//        }
//    }
//    while(l1<=mid){
//        b[i++] = a[l1++];
//    }
//    while(l2<=high){
//        b[i++] = a[l2++];
//    }
//    for(i=low;i<=high;i++){
//        a[i] = b[i];
//    }
//}
//void sort(int low,int high){
//    int mid;
//    if(low<high){
//        mid = (low+high)/2;
//        sort(low, mid);
//        sort(mid+1, high);
//        merge(low, mid, high);
//    }
//}
//int main(){
//    sort(0, max);
//    for (int j =0; j<=max; j++) {
//        printf("the result value is %d\n",a[j]);
//    }
//}
    
//    int arr[5] = {5,4,3,2,1};
//    int i,temp,j;
//    for(i=0;i<=5;i++){
//        for(j=0;j<=5;j++){
//            if(arr[i]<arr[j+1]){
//                temp = arr[i];
//                arr[i] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//    }
//    for(int p =1;p<=5;p++){
//        printf("the final values are %d\n",arr[p]);
//    }

    //MARK: Array Data
    int arr[5] = {5,4,3,2,1};

    for(int i =0;i<=5;i++){
    arr[i] = '\0';
    }
    for(int y=0;y<=5;y++){
        printf("%d\n",arr[y]);
    }














}
