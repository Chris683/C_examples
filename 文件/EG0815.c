#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp;
	int x, x12, x20, n;
	if((fp=fopen("file8.dat", "rb"))==NULL) /* 打开只读二进制文件 */
	{
		printf("File can not open!\n");
		exit(0);
	}
	for(n=0; n<3; n++) /* 循环读取第 1、 3、 5 个整数 */
	{
		fread(&x, sizeof(int), 1, fp); /* 从当前位置读取 1 个整数 */
		printf("%f ", x); /* 输出读取的 1 个整数 */
		fseek(fp, (long)sizeof(int), SEEK_CUR); /* 定位在下一个整数上 */
	}
	fseek(fp, (long)sizeof(int)*11, 0); /* 定位在第 12 个整数上 */
	fread(&x12, sizeof(int), 1, fp); /* 从当前位置读取 1 个整数 */
	printf("%d ", x12); /* 输出读取的第 12 个整数 */
	fseek(fp, -1*(long)sizeof(int), SEEK_END); /* 定位在第 20 个整数上 */
	fread(&x20, sizeof(int), 1, fp); /* 从当前位置读取 1 个整数 */
	printf("%d\n", x20); /* 输出读取的第 20 个整数 */
	fclose(fp); /* 关闭 fp 所指向的文件 */
}