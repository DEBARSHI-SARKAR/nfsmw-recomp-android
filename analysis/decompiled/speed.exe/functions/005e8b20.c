/* speed.exe 005e8b20 FUN_005e8b20; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 */

int * __thiscall FUN_005e8b20(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1958)) {
    piVar2 = (int *)(param_1 + 0x18);
    do {
      if (*piVar2 == 0) {
LAB_005e8b68:
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar2);
        if (iVar1 == 0) goto LAB_005e8b68;
        iVar1 = *(int *)(iVar1 + 4);
      }
      if (iVar1 == param_2) {
        return piVar2;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x65;
    } while (iVar3 < *(int *)(param_1 + 0x1958));
  }
  return (int *)0x0;
}

