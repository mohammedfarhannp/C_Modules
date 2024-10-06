#include <stdio.h>

int get_size(char File_Name[])
{
	FILE* File_Pointer = fopen(File_Name, "r");
	if (File_Pointer == NULL)
	{
		printf("Something went wrong! Couldn't Get File Size!!\n");
		return 0;
	}
	char c;
	int size = 0;
	for (c = fgetc(File_Pointer); c != EOF; c = fgetc(File_Pointer))
	{
		size++;
	}
	fclose(File_Pointer);
	return size + 1;

}

char* Read(char File_Name[], char Buffer[])
{
	FILE* File_Pointer = fopen(File_Name, "r");
	if (File_Pointer == NULL)
	{
		printf("Something went wrong! Couldn't Read File!!\n");
		return "0";
	}

	char c;
	int i = 0;

	for (c = fgetc(File_Pointer); c != EOF; c = fgetc(File_Pointer))
	{
		Buffer[i] = c;
		i++;
	}
	Buffer[i] = '\0';
	fclose(File_Pointer);
	return Buffer;
}

void Write(char File_Name[], char Buffer[])
{
	FILE* File_Pointer = fopen(File_Name, "w");
	if (File_Pointer == NULL)
	{
		printf("Something went wrong! Coudn't write to file!!\n");
		return;
	}

	int i = 0;
	for (char c = Buffer[i]; Buffer[i] != '\0'; c = Buffer[i])
	{
		fputc(Buffer[i], File_Pointer);
		i++;
	}
	fclose(File_Pointer);
}

void Append(char File_Name[], char Buffer[])
{
	FILE* File_Pointer = fopen(File_Name, "a");
	if (File_Pointer == NULL)
	{
		printf("Something went wrong! Coudn't append to file!!\n");
		return;
	}

	int i = 0;
	for (char c = Buffer[i]; Buffer[i] != '\0'; c = Buffer[i])
	{
		fputc(Buffer[i], File_Pointer);
		i++;
	}
	fclose(File_Pointer);
}