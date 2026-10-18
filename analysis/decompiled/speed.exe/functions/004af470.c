/* speed.exe 004af470 FUN_004af470; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004af470(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    piVar2 = &DAT_00912860;
    do {
      if ((param_2 == *piVar2) && (param_3 == piVar2[1])) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x1a;
    } while (iVar1 < *(int *)(param_1 + 0xa0));
  }
  return -1;
}

