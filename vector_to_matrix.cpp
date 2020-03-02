int V[] = { 65, 10, 15, 46, 10,  2,  5, 23, 78, 31, 98,
                40,  4, 64,  2, 80, 78, 84, 86, 60, 61, 45,
                55, 48, 69, 38, 93,  8 };
                
int M[4][7];

  /*
      65 10 x x x x x
      10 x x x x x x
      15 x x x x x x
      46 x x x x x x
  */

  int x = 0;
  int y = 0;
  // vectorból mátrixba leképezés OSZLOPFOLYTONOSAN
  for (int i = 0; i < 28; i++)
  {
      if (x == 3)
      {
          M[x][y] = V[i];
          x = 0;
          y++;
      }
      else
      {
          M[x][y] = V[i];
          x++;
      }
  }

  // kiiratas
  for (int i = 0; i < 4; i++)
  {
      for (int j = 0; j < 7; j++)
      {
          std::cout << M[i][j] << " ";
      }
      std::cout << std::endl;
  }
