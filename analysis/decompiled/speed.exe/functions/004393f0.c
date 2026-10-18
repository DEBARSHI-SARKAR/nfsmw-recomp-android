/* speed.exe 004393f0 FUN_004393f0; analysis pseudocode, not buildable source.
 * calls 00425b50 FUN_00425b50
 * calls 00434bf0 FUN_00434bf0
 */

void __thiscall FUN_004393f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 5) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 5))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00425b50(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x20;
    return;
  }
  FUN_00434bf0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}

