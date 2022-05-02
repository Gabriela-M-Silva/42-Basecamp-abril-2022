#include <unistd.h>

void revalpha(void)
{
  char  letter;

  letter = 'z';
  while (letter >= 'a')
  {
    if (letter >= 'a' && letter <= 'z')
    {
      write(1, &letter, 1);
      letter -= 1;
      letter = letter - 32;
    }
    if (letter >= 'A' && letter <= 'Z')
    {
      write(1, &letter, 1);
      letter -= 1;
      letter = letter + 32;
    }
  }
  write(1, "\n", 1);
}
