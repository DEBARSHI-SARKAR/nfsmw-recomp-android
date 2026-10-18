/* speed.exe 0082a310 FUN_0082a310; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0082a310(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint local_c;
  uint local_8;
  
  if (param_1[8] != 0) {
    (**(code **)(*param_1 + 0x14))();
  }
  uVar2 = param_1[0x10];
  iVar1 = param_1[10];
  if (-1 < iVar1) {
    if (iVar1 <= (int)(uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x18) + 0x12)) {
      iVar1 = *(int *)(DAT_009c2964 + 0x18) +
              (uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x1c) + iVar1 * 2) * 4;
      goto LAB_0082a35b;
    }
  }
  iVar1 = 0;
LAB_0082a35b:
  local_c = uVar2;
  local_8 = uVar2;
  if ((iVar1 != 0) && (*(byte *)(iVar1 + 7) != 0)) {
    param_1[0x11] = uVar2 / *(byte *)(iVar1 + 7);
    local_8 = uVar2 / *(byte *)(iVar1 + 7);
    if ((*(uint *)(iVar1 + 4) & 0xf00000) != 0) {
      param_1[0x12] = uVar2 / ((*(uint *)(iVar1 + 4) >> 0x14 & 0xf) * (uint)*(byte *)(iVar1 + 7));
      local_c = uVar2 / ((*(uint *)(iVar1 + 4) >> 0x14 & 0xf) * (uint)*(byte *)(iVar1 + 7));
    }
  }
  if (param_1[0x12] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uVar2 - param_1[0x13]) / (uint)param_1[0x12] + 1;
  }
  uVar2 = 0;
  param_1[0xc] = iVar1;
  if (0 < (int)local_8) {
    uVar2 = (uint)param_1[0x13] % local_8;
  }
  param_1[0x14] = uVar2;
  uVar2 = 0;
  if (0 < (int)local_c) {
    uVar2 = (uint)param_1[0x13] % local_c;
  }
  param_1[0x15] = uVar2;
  piVar3 = param_1 + 10;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *piVar3;
    piVar3 = piVar3 + 1;
    param_2 = param_2 + 1;
  }
  return 1;
}

