#include<stdio.h>
#include<string.h>

class PilotF1 {
	char nume[21];
	char echipa[21];
	int varsta;
	int record;
	int nr_pole_position;
public:
	char* getNume()
	{
		return nume;
	}
	void setNume(char* c)
	{
		strncpy(nume, c, 20);
	}
	char* getEchipa()
	{
		return echipa;
	}
	void setEchipa(char* c)
	{
		strncpy(echipa, c, 20);
	}
	int getVarsta()
	{
		return varsta;
	}
	void setVarsta(int varsta)
	{
		this->varsta = varsta;
	}
	int getRecord()
	{
		return record;
	}
	void setRecord(int record)
	{
		this->record = record;
	}
	int getNr_pole_position()
	{
		return nr_pole_position;
	}
	void setNr_pole_position(int nr_pole_position)
	{
		this->nr_pole_position = nr_pole_position;
	}
};
