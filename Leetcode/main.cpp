#include<iostream>
#include<stdio.h>
using namespace std;

int *num1(int* nums, int numsSize, int target, int* returnSize);
struct ListNode* num2(struct ListNode* l1, struct ListNode* l2);


int  main(void) {
    int num;
    int RunResult=0;
    cout << "plz enter the Code Number you want:" << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        int ip[] = {11,15,2,7 };
        int target = 9;
        RunResult = 1;
        int returnSize[1] = {0};
        int *output=NULL;
        output = num1(ip,4, target, output);
        printf("分别为第[%d,%d]位\n", output[0], output[1]);
        break;
    case 2:

        break;
    }
    cout << "The No." << RunResult << " is Successfully run!" << endl;
    return 0;
}

int *num1(int* nums, int numsSize, int target, int* returnSize) {
    int* a = (int*)malloc(2 * sizeof(int));
    for (int j = 0; j < numsSize; j++) {
        for (int k = j + 1; k < numsSize; k++) {
            if ((target - nums[j]) == nums[k])
            {
                a[0] = j;
                a[1] = k;
                //* returnSize = 2;
                break;
            }
        }
    }
    return a;
    printf("There is no two number can calculate the target\n");
}

struct ListNode* num2(struct ListNode* l1, struct ListNode* l2) {

}