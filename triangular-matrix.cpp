// algoritmus felsőháromszögmátrix - oszlopfolytonosan ábrázoljuk
int Algorithms::ELER(int v[], const int& i, const int& j)
{
	if (i > j)
	{
		return 0;
	}
	return v[j * (j - 1) / 2 + (i - 1)];
}

// algoritmus alsóháromszögmátrix - sorfolytonosan ábrázoljuk
int Algorithms::ELER2(int v[], const int& i, const int& j)
{
	if (i < j)
	{
		return 0;
	}
	return v[i * (i - 1) / 2 + (j-1)];
}

// main
int main()
{
  int V[] = { 65, 10, 15, 46, 10,  2,  5, 23, 78, 31, 98,
                40,  4, 64,  2, 80, 78, 84, 86, 60, 61, 45,
                55, 48, 69, 38, 93,  8 };
                
  Algorithms *alg = new Algorithms();
  int temp2 = alg->ELER2(V, 6, 2) + alg->ELER2(V, 6, 2);
  std::cout << temp2 << std::endl;
}
