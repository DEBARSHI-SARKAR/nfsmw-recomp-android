/* speed.exe 00827a79 FUN_00827a79; analysis pseudocode, not buildable source.
 * calls 00827a61 FUN_00827a61
 */

int FUN_00827a79(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_1 * param_2) / 1000;
  if (iVar1 < 3) {
    iVar1 = 3;
  }
  do {
    do {
      iVar2 = FUN_00827a61(iVar1);
      iVar2 = iVar2 + 1;
      iVar3 = 2;
    } while (iVar2 < 2);
    do {
      if (iVar1 % iVar3 == 0) {
        iVar1 = iVar1 + 1;
        break;
      }
      if (iVar3 == iVar2) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar2);
  } while( true );
}

