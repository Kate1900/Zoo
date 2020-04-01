#ifndef _Animals_h_
#define _Animals_h_

class TAnimals
{
protected:
	int cvet;
	int kolvokonechnostei;
	int kolvosystems;
public:
	TAnimals();
	int GetCvet();
	int GetKolvokonechnostei();
	int GetKolvosystems();

	void SetKolvokonechnostei(int k);
	void SetCvet(int c);
	const char* Golos();
};
#endif