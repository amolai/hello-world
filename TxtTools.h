#include <string>
using namespace std;


/*
����ֵ��
    �����ļ���
����ֵ��
    �����ļ��е��������Իس�Ϊ�зָ�����
*/
int CountLines(char* FileName);



/*
����ֵ��
    �����ļ���
����ֵ��
    �����ļ��еĵ����������Ӣ���ļ����Կո�Ϊ�ʷָλ��
*/
int CountEnglishWords(char* FileName);



/*
���ã�
		��Դ�ļ��еĿ���ȥ�������������Ŀ���ļ����ƶ����ļ��С�
����ֵ��
    Դ�ļ�����Ŀ���ļ���
����ֵ��
    ������
*/
int DelBlankLines(char* srcFileName,char* desFileName);


/*
���ã�
		Insert "Chapter 1: " into the file according to content of file. 
		This function can be used to format txt book for Stanza reader, 
		which is the most popular reader in IPhone. 
����ֵ��
    Դ�ļ���, Ŀ���ļ���, name of book, author of book
����ֵ��
*/
int InsertTagToFile(char* srcFileName,char* desFileName,char* bookTitle,char* bookAuthor);

/*
���ã�
		Split a big fine into some small file according to its content
����ֵ��
    Դ�ļ�����Ŀ���ļ���
����ֵ��
*/
int SplitFile(char* srcFileName,char* desFileName);

/*
Remarks:
	Delete the space, tab in the two sides of the strSrc, and newline in the end of strSrc,
and copy the result to strDes

Return Value:
	the length of strDes

*/
string Trim(const string & AStr);

/*
���ã�
		ʵ���ú���
*/
void TestTxtTools(void);
