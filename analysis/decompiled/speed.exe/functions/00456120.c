/* speed.exe 00456120 FUN_00456120; analysis pseudocode, not buildable source.
 * calls 00455bc0 FUN_00455bc0
 * calls 004559b0 FUN_004559b0
 */

int __fastcall FUN_00456120(int *param_1)

{
  int iVar1;
  
  if (param_1[2] != 0) {
LAB_00456159:
    return param_1[2];
  }
  if (*param_1 != 0) {
    iVar1 = FUN_00455bc0(*param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_004559b0(param_1[1]);
      param_1[2] = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      }
      goto LAB_00456159;
    }
  }
  return 0;
}

