/* speed.exe 0084c110 FUN_0084c110; analysis pseudocode, not buildable source.
 */

int FUN_0084c110(char *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  while( true ) {
    do {
      bVar1 = (&DAT_008c6f30)[*param_1];
      param_1 = param_1 + 1;
    } while (bVar1 == 1);
    do {
      cVar2 = *param_2;
      param_2 = param_2 + 1;
    } while ((&DAT_008c6f30)[cVar2] == 1);
    iVar3 = (uint)bVar1 - (uint)(byte)(&DAT_008c6f30)[cVar2];
    if (iVar3 != 0) break;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return iVar3;
}

