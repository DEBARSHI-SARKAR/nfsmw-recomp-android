/* speed.exe 0069a170 FUN_0069a170; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0069a170(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x60);
  if ((*(byte *)(iVar1 + 0x1e) & 4) != 0) {
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * _DAT_00895c40;
    *(float *)(iVar1 + 0x24) = *(float *)(iVar1 + 0x24) * _DAT_00895c40;
    *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x28) * _DAT_00895c40;
    *(float *)(iVar1 + 0x30) = *(float *)(iVar1 + 0x30) * _DAT_008ab388;
    *(float *)(iVar1 + 0x34) = *(float *)(iVar1 + 0x34) * _DAT_008ab388;
    *(float *)(iVar1 + 0x38) = *(float *)(iVar1 + 0x38) * _DAT_008ab388;
  }
  return;
}

