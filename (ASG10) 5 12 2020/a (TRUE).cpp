#include <stdio.h>
#include <string.h>
struct mahasiswa
{
	char name[101], nim[10], pc[7], pob[101], dob[101], hs[101], ban[10];
	int age, nos, ht;
};

int main ()
{
	int n;
	mahasiswa mhs[101];
	scanf ("%d", &n); getchar();
	for (int i=1;i<=n;i++)
	{
		scanf ("%s", mhs[i].name); getchar ();
		scanf ("%[^\n]", mhs[i].nim); getchar ();
		scanf ("%d", &mhs[i].age); getchar ();
		scanf ("%[^\n]", mhs[i].pc); getchar ();
		scanf ("%[^\n]", mhs[i].pob); getchar ();
		scanf ("%[^\n]", mhs[i].dob); getchar ();
		scanf ("%[^\n]", mhs[i].hs); getchar ();
		scanf ("%d", &mhs[i].nos); getchar ();
		scanf ("%d", &mhs[i].ht); getchar ();
		scanf ("%[^\n]", mhs[i].ban);
	}
	for (int i=1;i<=n;i++)
	{
		printf ("Mahasiswa ke-%d:\n", i);
		printf ("Nama: %s\n", mhs[i].name);
		printf ("NIM: %s\n", mhs[i].nim);
		printf ("Umur: %d\n", mhs[i].age);
		printf ("Kode Pos: %s\n", mhs[i].pc);
		printf ("Tempat Lahir: %s\n", mhs[i].pob);
		printf ("Tanggal Lahir: %s\n", mhs[i].dob);
		printf ("Almamater SMA: %s\n", mhs[i].hs);
		printf ("Jumlah Saudara Kandung: %d\n", mhs[i].nos);
		printf ("Tinggi Badan: %d\n", mhs[i].ht);
		printf ("NOMOR REKENING: %s\n", mhs[i].ban);
	}
	return 0;
}
