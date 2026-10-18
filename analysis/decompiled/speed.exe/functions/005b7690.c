/* speed.exe 005b7690 FUN_005b7690; analysis pseudocode, not buildable source.
 * calls 005b0080 FUN_005b0080
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b7690(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int extraout_EDX;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [8];
  float local_4;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(int *)(iVar1 + 0xc) != 0) {
    local_18 = *(float *)(iVar1 + 0x10) + *(float *)(iVar1 + 0x1c);
    local_4 = 0.0;
    local_14 = *(float *)(iVar1 + 0x14) + *(float *)(iVar1 + 0x20);
    local_10 = *(float *)(iVar1 + 0x18) + *(float *)(iVar1 + 0x24);
    FUN_005b0080(local_c,param_2,&local_18);
    bVar2 = local_4 < _DAT_00890968;
    bVar3 = local_4 == _DAT_00890968;
    *(undefined2 *)(param_1 + 0x20) = param_3;
    if (bVar2 == bVar3) {
      *(int *)(extraout_EDX + 0x110 + *(int *)(extraout_EDX + 0x10c) * 8) = param_1;
      *(float *)(extraout_EDX + 0x114 + *(int *)(extraout_EDX + 0x10c) * 8) = local_4;
      *(int *)(extraout_EDX + 0x10c) = *(int *)(extraout_EDX + 0x10c) + 1;
    }
  }
  return;
}

