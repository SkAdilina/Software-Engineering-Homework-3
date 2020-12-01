#include "ZooAnimal.cpp"

	  
void ZooAnimal::Destroy()
{
   delete[] name;
}
 
void ZooAnimal::Create(char *i_name, int i_cageNumber, int i_weightDate, int i_weight)
{
      name = i_name;
      cageNumber = i_cageNumber;
      weightDate = i_weightDate;
      weight = i_weight;
}

int ZooAnimal::daysSinceLastWeighed(int today)
{
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
      thisday += 360;
    return (thisday-startday);
}

char* ZooAnimal::reptName ()
{
    return name;
}

int ZooAnimal::reptWeight()
{
	return weightDate;
}

void ZooAnimal::changeWeightDate (int today)
{
	weightDate = today;
}

void ZooAnimal::isMotherOf(ZooAnimal& obj)
{
	*mother = obj;
}