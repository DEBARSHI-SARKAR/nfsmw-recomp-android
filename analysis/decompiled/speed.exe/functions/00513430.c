/* speed.exe 00513430 FUN_00513430; analysis pseudocode, not buildable source.
 */

int FUN_00513430(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_0089a498)[iVar1] == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return -1;
}

