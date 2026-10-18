/* speed.exe 006ff490 FUN_006ff490; analysis pseudocode, not buildable source.
 */

undefined4 FUN_006ff490(int param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = *param_2 * 0x1000000 + *param_3;
  iVar6 = 0;
  iVar4 = *(int *)(param_1 + 0x54) + -1;
  iVar2 = iVar4 >> 1;
  uVar1 = *(uint *)(iVar2 * 0x10 + 0x58 + param_1);
  while (((uVar1 != uVar3 && (iVar2 != iVar6)) && (iVar2 != iVar4))) {
    iVar5 = iVar2;
    if (uVar1 < uVar3) {
      iVar5 = iVar4;
      iVar6 = iVar2;
    }
    iVar2 = iVar5 + iVar6 >> 1;
    uVar1 = *(uint *)(iVar2 * 0x10 + 0x58 + param_1);
    iVar4 = iVar5;
  }
  if ((((*(uint *)(iVar2 * 0x10 + 0x58 + param_1) == uVar3) ||
       (iVar2 = iVar6, *(uint *)(iVar6 * 0x10 + 0x58 + param_1) == uVar3)) ||
      (iVar2 = iVar4, *(uint *)(iVar4 * 0x10 + 0x58 + param_1) == uVar3)) &&
     (iVar6 = iVar2 * 0x10 + param_1, *(int *)(iVar2 * 0x10 + 0x5c + param_1) != 0)) {
    *param_4 = *(int *)((iVar2 + 6) * 0x10 + param_1) + param_1;
    param_4[1] = *(int *)(iVar6 + 0x5c);
    param_4[2] = *(int *)(iVar6 + 100);
    return 0;
  }
  *param_4 = 0;
  param_4[2] = 0;
  param_4[1] = -1;
  return 0xffffffff;
}

