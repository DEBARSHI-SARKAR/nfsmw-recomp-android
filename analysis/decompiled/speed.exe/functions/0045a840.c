/* speed.exe 0045a840 FUN_0045a840; analysis pseudocode, not buildable source.
 * calls 00455bc0 FUN_00455bc0
 * calls 0045a760 FUN_0045a760
 * calls 004559b0 FUN_004559b0
 */

void FUN_0045a840(int *param_1)

{
  int iVar1;
  
  if (param_1[2] != 0) {
LAB_0045a889:
    FUN_0045a760(param_1[2]);
    return;
  }
  if (*param_1 != 0) {
    iVar1 = FUN_00455bc0(*param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_004559b0(param_1[1]);
      param_1[2] = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      }
      goto LAB_0045a889;
    }
  }
  FUN_0045a760(0);
  return;
}

