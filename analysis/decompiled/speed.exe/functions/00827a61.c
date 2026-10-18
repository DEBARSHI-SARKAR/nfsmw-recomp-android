/* speed.exe 00827a61 FUN_00827a61; analysis pseudocode, not buildable source.
 */

int FUN_00827a61(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    if (iVar2 * iVar2 - param_1 == 0) {
      return iVar2;
    }
    iVar1 = iVar2 + 1;
  } while (iVar2 * iVar2 < param_1);
  return iVar2 + -1;
}

