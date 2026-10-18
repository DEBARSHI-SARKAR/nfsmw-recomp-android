/* speed.exe 006613a0 FUN_006613a0; analysis pseudocode, not buildable source.
 * calls 00657ad0 FUN_00657ad0
 */

void __thiscall FUN_006613a0(int param_1,int param_2)

{
  int iVar1;
  
  DAT_00925984 = DAT_00925984 + -1;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    while (*(int *)(iVar1 + 0x18) != param_2) {
      iVar1 = iVar1 + 0x24;
      if (iVar1 == *(int *)(param_1 + 8)) {
        return;
      }
    }
    FUN_00657ad0(iVar1 + 0x24,*(int *)(param_1 + 8),iVar1,param_2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x24;
  }
  return;
}

