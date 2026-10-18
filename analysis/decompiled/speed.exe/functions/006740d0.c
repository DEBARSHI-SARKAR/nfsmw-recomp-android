/* speed.exe 006740d0 FUN_006740d0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_006740d0(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar2 = (int)(param_2 - *(int *)(param_1 + 4)) / 0x18;
  iVar3 = (int)(param_3 - param_2) / 0x18;
  param_2 = 0;
  if (*(int *)(param_1 + 0xc) - iVar3 != uVar2) {
    iVar6 = uVar2 * 0x18;
    iVar4 = (iVar3 + uVar2) * 0x18;
    do {
      puVar1 = (undefined4 *)(iVar6 + *(int *)(param_1 + 4));
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(iVar4 + *(int *)(param_1 + 4));
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
        puVar1[3] = puVar5[3];
        puVar1[4] = puVar5[4];
        puVar1[5] = puVar5[5];
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 0x18;
      iVar6 = iVar6 + 0x18;
    } while (param_2 < (*(int *)(param_1 + 0xc) - iVar3) - uVar2);
  }
  uVar7 = *(int *)(param_1 + 0xc) - iVar3;
  *(uint *)(param_1 + 0xc) = uVar7;
  if (uVar7 <= uVar2) {
    return *(int *)(param_1 + 4) + uVar7 * 0x18;
  }
  return *(int *)(param_1 + 4) + uVar2 * 0x18;
}

