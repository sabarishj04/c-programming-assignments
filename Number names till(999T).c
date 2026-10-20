#include <stdio.h>

int main() {
    long long num;
    char *ones[] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    char *teens[] = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    char *tens[] = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    printf("Enter a number (0 - 999999999999): ");
    scanf("%lld", &num);

    if(num == 0) {
        printf("Zero\n");
    } else {
        long long trillions = (num / 1000000000000);
        long long billions  = (num / 1000000000) % 1000;
        long long millions  = (num / 1000000) % 1000;
        long long thousands = (num / 1000) % 1000;
        long long remainder = num % 1000;

        // trillions
        if(trillions > 0) {
            if(trillions / 100 > 0) {
                printf("%s Hundred ", ones[trillions/100]);
            }
            int lastTwo = trillions % 100;
            if(lastTwo < 10) {
                printf("%s ", ones[lastTwo]);
            } else if(lastTwo < 20) {
                printf("%s ", teens[lastTwo-10]);
            } else {
                printf("%s ", tens[lastTwo/10]);
                if(lastTwo % 10 != 0) {
                    printf("%s ", ones[lastTwo%10]);
                }
            }
            printf("Trillion ");
        }

        // billions
        if(billions > 0) {
            if(billions / 100 > 0) {
                printf("%s Hundred ", ones[billions/100]);
            }
            int lastTwo = billions % 100;
            if(lastTwo < 10) {
                printf("%s ", ones[lastTwo]);
            } else if(lastTwo < 20) {
                printf("%s ", teens[lastTwo-10]);
            } else {
                printf("%s ", tens[lastTwo/10]);
                if(lastTwo % 10 != 0) {
                    printf("%s ", ones[lastTwo%10]);
                }
            }
            printf("Billion ");
        }

        // millions
        if(millions > 0) {
            if(millions / 100 > 0) {
                printf("%s Hundred ", ones[millions/100]);
            }
            int lastTwo = millions % 100;
            if(lastTwo < 10) {
                printf("%s ", ones[lastTwo]);
            } else if(lastTwo < 20) {
                printf("%s ", teens[lastTwo-10]);
            } else {
                printf("%s ", tens[lastTwo/10]);
                if(lastTwo % 10 != 0) {
                    printf("%s ", ones[lastTwo%10]);
                }
            }
            printf("Million ");
        }

        // thousands
        if(thousands > 0) {
            if(thousands / 100 > 0) {
                printf("%s Hundred ", ones[thousands/100]);
            }
            int lastTwo = thousands % 100;
            if(lastTwo < 10) {
                printf("%s ", ones[lastTwo]);
            } else if(lastTwo < 20) {
                printf("%s ", teens[lastTwo-10]);
            } else {
                printf("%s ", tens[lastTwo/10]);
                if(lastTwo % 10 != 0) {
                    printf("%s ", ones[lastTwo%10]);
                }
            }
            printf("Thousand ");
        }

        // remainder
        if(remainder > 0) {
            if(remainder / 100 > 0) {
                printf("%s Hundred ", ones[remainder/100]);
            }
            int lastTwo = remainder % 100;
            if(lastTwo < 10) {
                printf("%s", ones[lastTwo]);
            } else if(lastTwo < 20) {
                printf("%s", teens[lastTwo-10]);
            } else {
                printf("%s", tens[lastTwo/10]);
                if(lastTwo % 10 != 0) {
                    printf(" %s", ones[lastTwo%10]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}

