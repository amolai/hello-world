/*
����ֵ��
    �����ļ���
����ֵ��
    �����ļ��е��������Իس�Ϊ�зָ�����
*/
unsigned int CountLines(char* FileName){
  int lineNum=0;
  char t;
  freopen(FileName,"r",stdin);

  while(scanf("%c",&t)!=EOF)     //���ж��������޷��жϿ��У����ۣ�һ��һ�������ܻ�������
    if(t=='\n') lineNum++;

  return lineNum;
  }
/*
����ֵ��
    �����ļ���
����ֵ��
    �����ļ��еĵ����������Ӣ���ļ����Կո�Ϊ�ʷָλ��
*/
unsigned int CountEnglishWords(char* FileName){
  int lineNum=0;
  char t[256];
  freopen(FileName,"r",stdin);

  while(scanf("%s",t)!=EOF)
     lineNum++;

  return lineNum;
  }
/*
���ã�
		��Դ�ļ��еĿ���ȥ�������������Ŀ���ļ����ƶ����ļ��С�
����ֵ��
    Դ�ļ�����Ŀ���ļ���
����ֵ��
    ������
*/
unsigned int DelBlankLines(char* srcFileName,char* desFileName){
  char L[256];
    int B_Num=0,Lend,i;
    freopen(srcFileName,"r",stdin);    //�ļ������Ի��з���β����Ȼ�����
    freopen(desFileName,"w",stdout);
    while(scanf("%c",&L[0])!=EOF){
       Lend=0;
       while (L[Lend]!='\n'){
         Lend++;
         scanf("%c",&L[Lend]);
       }
       for(i=0;i<Lend;i++)
         if(L[i]!=' ')break;
       if (i==Lend) B_Num++;
       else
         for(i=0;i<=Lend;i++)printf("%c",L[i]);
    }
    return B_Num;
}

void TestTxtTools(void);
