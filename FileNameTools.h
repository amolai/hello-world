
/*
����ֵ��
    whole�����������ַ���, ���磺"c:/system32/abc.txt"
    dir: ����·���������磺c:/system32

����ֵ��
    dir·������ĳ��ȣ����磬������Ϊ11��
*/
int GetDir(char *whole,char* dir);


/*
����ֵ��
    whole�����������ַ���, ���磺"c:/system32/abc.txt"
    name: �����ļ��������磺abc

����ֵ��
    �ļ�������ĳ��ȣ����磬������Ϊ3��
*/
int GetName(char *whole,char* name);


/*
����ֵ��
    whole�����������ַ���, ���磺"c:/system32/abc.txt"
    ext: �����ļ�����׺�����磺txt

����ֵ��
    �ļ�����׺����ĳ��ȣ����磬������Ϊ3��
*/
int GetExt(char *whole,char* ext);


/*
remarks: you input oldFileName="demo.txt", and part="ch".The NewFileName will be "demo-ch.txt".
it will insert string "ch" into the oldFileName between FileName and extension.
*/
void InsertPartToFile(char *oldFileName,char* part,char* NewFileName);

void TestFileNameTools(void);
