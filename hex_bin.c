#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void HexToBin (char hex[]) {
        int i = 2;
        while (hex[i]) {
            switch (hex[i]) {
                case '0':
                        printf("0000");
                        break;
                case '1':
                        printf("0001");
                        break;
                case '2':
                        printf("0010");
                        break;
                case '3':
                        printf("0011");
                        break;
                case '4':
                        printf("0100");
                        break;
                case '5':
                        printf("0101");
                        break;
                case '6':
                        printf("0110");
                        break;
                case '7':
                        printf("0111");
                        break;
                case '8':
                        printf("1000");
                        break;
                case '9':
                        printf("1001");
                        break;
                case 'a':
                        printf("1010");
                        break;
                case 'b':
                        printf("1011");
                        break;
               case 'c':
                        printf("1100");
                        break;
                case 'd':
                        printf("1101");
                        break;
                case 'e':
                        printf("1110");
                        break;
                case 'f':
                        printf("1111");
                        break;
                default:
                printf("test");
            }
           i++;
        }
        printf("\n");

}

void BinToHex(char bin[]) {
        int res = strtol(bin, NULL, 2);
	printf("0x%x\n", res);


}
int main (int argc, char* argv[]) {
        int num1;
        char* arg1 = argv[1];
        //Convert Hex to Binary
        if (arg1[1] == 'x') {
                HexToBin(arg1);
        }
        else {
                BinToHex(arg1);

        }






}

