 //ʹ��fopen������ע�����
//fopen����
//fopen("a1","r");
//��ʾҪ����Ϊ��a1"���ļ������ļ��ķ�ʽΪ����
//���򿪵��ļ���ִ�г�����ͬһ��Ŀ¼ʱ���ļ�����·������ʡ�ԣ�����Ӧ���ṩ����·��������
//fopen�����ķ���ֵ��ָ��a1�ļ���ָ��
//ע��a1�����ָ�벢����ֱ��ָ��a1�ļ������ݣ���Ϊ������ļ��Ժ󣬻�Ҫ��ȡ�ܶ��������ļ�����Ϣ����Щ�ļ���Ϣ�ͻᱻ��֯�ɽṹ�壬�ļ�����ֻ������ṹ���е�һ���֣�
FILE* fp;
fp = fopen("a1", "r");//a1�ļ�����r�򿪷�ʽ
//�˴����ļ�ָ��fp���ļ�a1����ϵ����fpָ����a1�ļ�
//����ļ���ʧ�ܣ�fopen�����������һ��������Ϣ��fopen�����������һ����ָ��ֵNULL.�ʳ���if(fp==NULL)�жϲ����Ƿ�ɹ���
//if (fp == fopen("file1", "r") == NULL)
//{
//	printf("cannot open this file\n");
//	exit(0);//��ֹ����ִ�еĳ���
//}
//��fclose�����ر������ļ�
//fclose(�ļ�ָ�룩��
//���磺fclose(fp);����fp��һ��FILE���ָ�룬ָ��һ���Ѵ򿪵��ļ�
//��ν�����رա���ָ�����ļ���Ϣ���ļ������������ɹ��򷵻�0�����򷵻�EOF��-1����������ر��ļ��ᶪʧ����