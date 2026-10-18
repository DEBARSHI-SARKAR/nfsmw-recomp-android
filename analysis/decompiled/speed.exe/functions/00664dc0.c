/* speed.exe 00664dc0 FUN_00664dc0; analysis pseudocode, not buildable source.
 * calls 00663890 FUN_00663890
 * calls 0065d300 FUN_0065d300
 */

void __thiscall FUN_00664dc0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(param_1 + 8) - iVar1) / 0x24) <
      (uint)((*(int *)(param_1 + 0xc) - iVar1) / 0x24))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_0065d300(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x24;
    return;
  }
  FUN_00663890(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}

