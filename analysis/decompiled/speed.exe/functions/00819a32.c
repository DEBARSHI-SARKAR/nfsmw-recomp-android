/* speed.exe 00819a32 FUN_00819a32; analysis pseudocode, not buildable source.
 * calls 0081eb58 FUN_0081eb58
 */

undefined4 FUN_00819a32(ushort *param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((uint)*param_1 + (int)param_1) == 0) {
    return *(undefined4 *)(param_1 + 6);
  }
  uVar4 = (uint)param_1[4];
  uVar2 = FUN_0081eb58();
  iVar3 = uVar2 % (((uint)param_1[5] - (int)*(char *)((int)param_1 + 3)) - uVar4) + uVar4;
  if ((char)param_1[1] == '\x01') {
    pbVar1 = (byte *)(iVar3 + 0x10 + (int)param_1);
    *(uint *)(param_1 + 6) = (uint)*pbVar1;
    *pbVar1 = *(byte *)(uVar4 + 0x10 + (int)param_1);
    *(char *)(param_1[4] + 0x10 + (int)param_1) = (char)param_1[6];
  }
  else {
    *(uint *)(param_1 + 6) = (uint)param_1[iVar3 + 8];
    param_1[iVar3 + 8] = param_1[uVar4 + 8];
    param_1[param_1[4] + 8] = param_1[6];
  }
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + *(int *)(param_1 + 2);
  param_1[4] = param_1[4] + 1;
  if (param_1[5] <= param_1[4]) {
    param_1[4] = 0;
    *(undefined1 *)((int)param_1 + 3) = 1;
    return *(undefined4 *)(param_1 + 6);
  }
  *(undefined1 *)((int)param_1 + 3) = 0;
  return *(undefined4 *)(param_1 + 6);
}

