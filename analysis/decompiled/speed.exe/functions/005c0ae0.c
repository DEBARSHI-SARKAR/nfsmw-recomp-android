/* speed.exe 005c0ae0 FUN_005c0ae0; analysis pseudocode, not buildable source.
 * calls 005aecb0 FUN_005aecb0
 * calls 005c0830 FUN_005c0830
 */

uint __thiscall FUN_005c0ae0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  if (param_2 == -1) {
    *(int *)(param_1 + 0x24) = param_3[3];
    *(int *)(param_1 + 0x20) = param_3[2];
    *(int *)(param_1 + 0x1c) = param_3[1];
    *(int *)(param_1 + 0x18) = *param_3;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x7f;
    return (uint)param_3 & 0xffffff00;
  }
  iVar7 = FUN_005aecb0(param_2);
  bVar9 = *(int *)(iVar7 + 0xc) != param_2;
  if (bVar9) {
    iVar7 = FUN_005c0830(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = param_3[2];
  iVar3 = *param_3;
  iVar4 = param_3[3];
  iVar5 = *(int *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x24);
  *(int *)(iVar7 + 0x14) = param_3[1] - *(int *)(param_1 + 0x1c);
  *(int *)(iVar7 + 0x10) = iVar3 - iVar5;
  *(int *)(iVar7 + 0x1c) = iVar4 - iVar6;
  *(int *)(iVar7 + 0x18) = iVar2 - iVar1;
  uVar8 = CONCAT31((int3)((uint)iVar7 >> 8),*(undefined1 *)(param_1 + 3)) & 0xffffff7f;
  *(char *)(param_1 + 3) = (char)uVar8;
  return CONCAT31((int3)(uVar8 >> 8),bVar9);
}

