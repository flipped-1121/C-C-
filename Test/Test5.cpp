#include <stdio.h>
#include <stdlib.h>

typedef string
{
	char data;
	int len;
}STRING;

bool InitString(STRING* outs, char* ins)
{
	int slean = 0;
	while(ins[slen] != '\0')
		slen++;
	outs -> data = (char*)malloc(sizeof(char)* slean);
	outs -> lean = 0;
	for(int i = 0; i < slen; i++)
		outs -> data[i] = ins[i];
	return true;
}

bool InitString1(STRING* s, int slen)
{
	s -> data = (char*)malloc(sizeof(char)* slean);
	slen = 0;
	return true;
}

bool CopyStr(STRING* dst, STRING src)
{
	dst -> data = (char*)malloc(sizeof(char)* src.len);
	dst -> len = 0;
	for(int i = 1; i <= src.len; i ++)
		dst -> data[i-1] = src -> data[i-1];
	dst -> len = src -> len;
	return true;
}

bool StrCat(STRING* dst, STRING src)
{
	dst -> data = (char*)malloc(sizeof(char)* (src1.len + src2.len));
	for(int i = 1; i<= src1.len; i++)
		dst -> data[i-1] = src1.data[i-1];
	for(int j = 1; j <= src2.len; j++)
		dst -> data[src -> len + j - 1] = src2.data[j - 1];
	dst -> len = src1.len + src2.len;
	return true;
}

int StrCmp(STRING s, STRING t)
{
	int i = 1, j =1;
	while(i < s.len && j <= t.len)
	{
		if(s.data[i - 1] - t.data[j - 1] == 0)
		{
			i ++;
			j ++;
		}
		else
			return s.data[i - 1] - t.data[j - 1];
	}
	return s.len - t.len;
}

bool StuStr(STRING* t, STRING s, int loc, int len)
{
	if(loc < 1 || loc + len > s.len + 1)
		return false;
	t -> data = (char*)malloc(sizeof(char)* len);
	for(i = 1; i <= len; i++)
		t -> data[i-1] = s.data[loc - 1 + i - 1];
	t.len = len;
	return true;
}
