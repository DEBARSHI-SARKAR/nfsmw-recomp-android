/* speed.exe 005c0b70 FUN_005c0b70; analysis pseudocode, not buildable source.
 * calls 005aecb0 FUN_005aecb0
 * calls 005c0830 FUN_005c0830
 * calls 005ad0f0 FUN_005ad0f0
 */

uint __thiscall FUN_005c0b70(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  if (param_2 == -1) {
    *(undefined4 *)(param_1 + 0x18) = *param_3;
    *(undefined4 *)(param_1 + 0x1c) = param_3[1];
    *(undefined4 *)(param_1 + 0x20) = param_3[2];
    *(undefined4 *)(param_1 + 0x24) = param_3[3];
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x7f;
    return (uint)param_3 & 0xffffff00;
  }
  iVar2 = FUN_005aecb0(param_2);
  bVar5 = *(int *)(iVar2 + 0xc) != param_2;
  if (bVar5) {
    iVar2 = FUN_005c0830(param_2);
  }
  local_20 = -*(float *)(param_1 + 0x18);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  local_1c = -*(float *)(param_1 + 0x1c);
  local_18 = -*(float *)(param_1 + 0x20);
  puVar3 = (undefined4 *)FUN_005ad0f0(local_10,&local_20);
  *(undefined4 *)(iVar2 + 0x10) = *puVar3;
  *(undefined4 *)(iVar2 + 0x14) = puVar3[1];
  *(undefined4 *)(iVar2 + 0x18) = puVar3[2];
  uVar1 = puVar3[3];
  *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  uVar4 = CONCAT31((int3)((uint)uVar1 >> 8),*(undefined1 *)(param_1 + 3)) & 0xffffff7f;
  *(char *)(param_1 + 3) = (char)uVar4;
  return CONCAT31((int3)(uVar4 >> 8),bVar5);
}

