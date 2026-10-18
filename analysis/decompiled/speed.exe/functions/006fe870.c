/* speed.exe 006fe870 FUN_006fe870; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 */

int __thiscall FUN_006fe870(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = FUN_00452940();
  if (param_2 < uVar1) {
    return iVar2 + 8 + param_2 * 4;
  }
  iVar2 = FUN_006269b0(4);
  return iVar2;
}

