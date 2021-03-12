#include "testtou.h"

//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));//�������ڴ�ռ�����Ϊ0
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}

//���һ����ϵ�˵���Ϣ
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷���ӣ�\n");
	}//ͨѶ¼����ϵ���Ѵ�����
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].address);
		ps->size++;//ͨѶ¼����ϵ�˸���+1
		printf("��ӳɹ�\n");
	}
}

//ͨ�����ֲ�����ϵ�ˣ��ҵ��˷����±꣬û�ҵ�����-1
static int FindByName(char name[MAX_NAME], const struct Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
			return i;//�ҵ��˷����±�
	}
	return -1;//�Ҳ��������
}

//ɾ��һ����ϵ�˵���Ϣ
void DeleteContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ����ϵ�˵�����:>");
	scanf("%s", name);
	//����
	int pos = FindByName(name, ps);//�ҵ��˷����±꣬û�ҵ�����-1
	//ɾ��
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}//��Ҫɾ������ϵ��λ�ÿ�ʼ����һλ��ϵ����Ϣ����ǰһ����ϵ����Ϣ
		printf("ɾ���ɹ�\n");
		ps->size--;//ͨѶ¼����ϵ�˸���-1
	}
}

//����ָ����ϵ�˲���ӡ����Ϣ
void SreachContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ������ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindByName(name, ps);//�ҵ��˷����±꣬û�ҵ�����-1
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%-15s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%-15s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].address);
	}//��ӡ����ϵ�˵���Ϣ����
}

//�޸�ָ����ϵ�˵���Ϣ
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ���ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindByName(name, ps);//�ҵ��˷����±꣬û�ҵ�����-1
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].address);
		printf("�޸ĳɹ�\n");
	}//�޸���ϵ����Ϣ����������ϵ����Ϣ����¼��
}

//��ӡͨѶ¼�е�ȫ����Ϣ
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}//ͨѶ¼����ϵ�˸���Ϊ0
	else
	{
		printf("%-15s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		//��ӡ��Ϣ��
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-15s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].address);
		}//��ӡͨѶ¼ȫ����Ϣ����
	}
}

//�Զ���ıȽϺ���
int CmpByName(const void* e1, const void* e2)
{
	return strcmp((const char*)e1, (const char*)e2);
}

//ͨ����������ͨѶ¼����ϵ�˵��Ⱥ�˳��
void SortContact(struct Contact* ps)
{
	qsort(ps->data, ps->size, sizeof(struct PeoInfo), CmpByName);//����
}
