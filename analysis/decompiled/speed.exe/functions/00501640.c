/* speed.exe 00501640 FUN_00501640; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00501640(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if ((iVar2 != 0) && (param_3 != 0)) {
    piVar1 = *(int **)(iVar2 + 0x3c);
    iVar2 = (int)*(char *)(iVar2 + 0x1a);
    if (0 < iVar2) {
      do {
        if (*piVar1 == param_2) {
          piVar1[1] = param_3;
        }
        piVar1 = piVar1 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

