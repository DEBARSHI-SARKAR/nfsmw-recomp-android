/* speed.exe 00832d92 FUN_00832d92; analysis pseudocode, not buildable source.
 */

int FUN_00832d92(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iStack_4;
  
  iVar1 = (param_1 * param_2) / 8;
  if (param_3 == 1) {
    iStack_4 = 10;
  }
  else {
    if (param_3 != 2) {
      return iVar1;
    }
    iVar1 = iVar1 * 2;
    iStack_4 = 7;
  }
  return iVar1 / iStack_4;
}

