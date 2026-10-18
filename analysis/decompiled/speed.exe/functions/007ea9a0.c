/* speed.exe 007ea9a0 FUN_007ea9a0; analysis pseudocode, not buildable source.
 * calls 007e9ef0 FUN_007e9ef0
 * calls 007e9bf0 FUN_007e9bf0
 * calls 007ea930 FUN_007ea930
 */

void __thiscall FUN_007ea9a0(uint *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_007e9ef0(param_2);
  *(undefined1 *)param_1 = *(undefined1 *)(param_2 + 0x14);
  param_1[6] = (uint)*(ushort *)(param_2 + 0x18);
  param_1[7] = (uint)*(ushort *)(param_2 + 0x1c);
  param_1[4] = *(uint *)(param_2 + 0x20);
  param_1[5] = *(uint *)(param_2 + 0x24);
  uVar1 = *param_1;
  uVar3 = *(int *)(param_2 + 0x28) << 0x1c;
  *param_1 = uVar3 | uVar1 & 0xfffffff;
  uVar9 = ((*(int *)(param_2 + 0x30) != 1) - 1 & 0x10000) << 8;
  *param_1 = uVar9 | uVar3 | uVar1 & 0xeffffff;
  cVar2 = FUN_007ea930(*(undefined4 *)(param_2 + 0x14));
  uVar9 = uVar9 | uVar3 | uVar1 & 0xebfffff;
  if (cVar2 == '\0') {
    *param_1 = uVar9;
  }
  else {
    *param_1 = ((*(int *)(param_2 + 0x2c) != 1) - 1 & 0x4000) << 8 | uVar9;
  }
  uVar1 = *param_1;
  uVar3 = ((*(int *)(param_2 + 0x34) != 1) - 1 & 0x100) << 8;
  *param_1 = uVar3 | uVar1 & 0xfffeffff;
  uVar9 = ((*(int *)(param_2 + 0x38) != 1) - 1 & 0x200) << 8;
  *param_1 = uVar9 | uVar3 | uVar1 & 0xfffcffff;
  uVar5 = ((*(int *)(param_2 + 0x3c) != 1) - 1 & 0x400) << 8;
  *param_1 = uVar5 | uVar9 | uVar3 | uVar1 & 0xfff8ffff;
  uVar6 = ((*(int *)(param_2 + 0x40) != 1) - 1 & 0x800) << 8;
  *param_1 = uVar6 | uVar5 | uVar9 | uVar3 | uVar1 & 0xfff0ffff;
  uVar7 = ((*(int *)(param_2 + 0x44) != 1) - 1 & 0x1000) << 8;
  *param_1 = uVar7 | uVar6 | uVar5 | uVar9 | uVar3 | uVar1 & 0xffe0ffff;
  uVar8 = ((*(int *)(param_2 + 0x48) != 1) - 1 & 0x2000) << 8;
  *param_1 = uVar8 | uVar7 | uVar6 | uVar5 | uVar9 | uVar3 | uVar1 & 0xffc0ffff;
  *param_1 = ((*(int *)(param_2 + 0x4c) != 1) - 1 & 0x8000) << 8 |
             uVar8 | uVar7 | uVar6 | uVar5 | uVar9 | uVar3 | uVar1 & 0xff40ffff;
  iVar4 = FUN_007e9bf0(param_2);
  if (param_1 + 8 == (uint *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  param_1[2] = (int)(param_1 + 8) - (int)param_1;
  param_1[3] = iVar4 - 0x20;
  return;
}

