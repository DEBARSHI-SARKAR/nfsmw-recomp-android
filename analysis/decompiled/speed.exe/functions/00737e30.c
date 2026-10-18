/* speed.exe 00737e30 FUN_00737e30; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00737e30(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 0x15e4);
  iVar6 = *(int *)(param_1 + 0x15f0);
  if (iVar5 != *(int *)(param_1 + 900)) {
    *(int *)(param_1 + 900) = iVar5;
    *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
  }
  if (iVar5 != *(int *)(param_1 + 0x390)) {
    *(int *)(param_1 + 0x390) = iVar5;
    *(undefined4 *)(param_1 + 0x394) = 0xffffffff;
  }
  if (iVar6 != *(int *)(param_1 + 0x3c0)) {
    *(int *)(param_1 + 0x3c0) = iVar6;
    *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
  }
  if (iVar6 != *(int *)(param_1 + 0x3cc)) {
    *(int *)(param_1 + 0x3cc) = iVar6;
    *(undefined4 *)(param_1 + 0x3d0) = 0xffffffff;
  }
  if (iVar5 != *(int *)(param_1 + 0x3fc)) {
    *(int *)(param_1 + 0x3fc) = iVar5;
    *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
  }
  if (iVar5 != *(int *)(param_1 + 0x408)) {
    *(int *)(param_1 + 0x408) = iVar5;
    *(undefined4 *)(param_1 + 0x40c) = 0xffffffff;
  }
  if (iVar6 != *(int *)(param_1 + 0x438)) {
    *(int *)(param_1 + 0x438) = iVar6;
    *(undefined4 *)(param_1 + 0x43c) = 0xffffffff;
  }
  if (iVar6 != *(int *)(param_1 + 0x444)) {
    *(int *)(param_1 + 0x444) = iVar6;
    *(undefined4 *)(param_1 + 0x448) = 0xffffffff;
  }
  if (iVar5 != *(int *)(param_1 + 0x6f0)) {
    *(int *)(param_1 + 0x6f0) = iVar5;
    *(undefined4 *)(param_1 + 0x6f4) = 0xffffffff;
  }
  if (iVar5 != *(int *)(param_1 + 0x6fc)) {
    *(int *)(param_1 + 0x6fc) = iVar5;
    *(undefined4 *)(param_1 + 0x700) = 0xffffffff;
  }
  if (iVar6 != *(int *)(param_1 + 0x72c)) {
    *(int *)(param_1 + 0x72c) = iVar6;
    *(undefined4 *)(param_1 + 0x730) = 0xffffffff;
  }
  if (iVar6 != *(int *)(param_1 + 0x738)) {
    *(int *)(param_1 + 0x738) = iVar6;
    *(undefined4 *)(param_1 + 0x73c) = 0xffffffff;
  }
  if (iVar5 != *(int *)(param_1 + 0x768)) {
    *(int *)(param_1 + 0x768) = iVar5;
    *(undefined4 *)(param_1 + 0x76c) = 0xffffffff;
  }
  if (iVar5 != *(int *)(param_1 + 0x774)) {
    *(int *)(param_1 + 0x774) = iVar5;
    *(undefined4 *)(param_1 + 0x778) = 0xffffffff;
  }
  if (iVar6 != *(int *)(param_1 + 0x7a4)) {
    *(int *)(param_1 + 0x7a4) = iVar6;
    *(undefined4 *)(param_1 + 0x7a8) = 0xffffffff;
  }
  if (iVar6 != *(int *)(param_1 + 0x7b0)) {
    *(int *)(param_1 + 0x7b0) = iVar6;
    *(undefined4 *)(param_1 + 0x7b4) = 0xffffffff;
  }
  uVar1 = *(uint *)(param_1 + 0x1624);
  iVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  if (((uVar1 & 8) == 0) && ((*(byte *)(param_1 + 0x1620) & 8) != 0)) {
    iVar5 = 1;
  }
  if (((uVar1 & 0x10) == 0) && ((*(byte *)(param_1 + 0x1620) & 0x10) != 0)) {
    iVar6 = 1;
  }
  if (((uVar1 & 0x20) == 0) && ((*(byte *)(param_1 + 0x1620) & 0x20) != 0)) {
    iVar7 = 1;
  }
  if (DAT_009b0930 != 0) {
    iVar5 = 1;
    iVar6 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x15f8 + iVar5 * 4);
  iVar5 = *(int *)(param_1 + 0x1604 + iVar5 * 4);
  iVar3 = *(int *)(param_1 + 0x15f8 + iVar6 * 4);
  iVar4 = *(int *)(param_1 + 0x15f8 + iVar7 * 4);
  iVar6 = *(int *)(param_1 + 0x1604 + iVar6 * 4);
  iVar7 = *(int *)(param_1 + 0x1604 + iVar7 * 4);
  if (iVar2 != *(int *)(param_1 + 0x39c)) {
    *(int *)(param_1 + 0x39c) = iVar2;
    *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
  }
  if (iVar3 != *(int *)(param_1 + 0x3a8)) {
    *(int *)(param_1 + 0x3a8) = iVar3;
    *(undefined4 *)(param_1 + 0x3ac) = 0xffffffff;
  }
  if (iVar4 != *(int *)(param_1 + 0x3b4)) {
    *(int *)(param_1 + 0x3b4) = iVar4;
    *(undefined4 *)(param_1 + 0x3b8) = 0xffffffff;
  }
  if (iVar5 != *(int *)(param_1 + 0x3d8)) {
    *(int *)(param_1 + 0x3d8) = iVar5;
    *(undefined4 *)(param_1 + 0x3dc) = 0xffffffff;
  }
  if (iVar6 != *(int *)(param_1 + 0x3e4)) {
    *(int *)(param_1 + 0x3e4) = iVar6;
    *(undefined4 *)(param_1 + 1000) = 0xffffffff;
  }
  if (iVar7 != *(int *)(param_1 + 0x3f0)) {
    *(int *)(param_1 + 0x3f0) = iVar7;
    *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
  }
  if (iVar2 != *(int *)(param_1 + 0x414)) {
    *(int *)(param_1 + 0x414) = iVar2;
    *(undefined4 *)(param_1 + 0x418) = 0xffffffff;
  }
  if (iVar3 != *(int *)(param_1 + 0x420)) {
    *(int *)(param_1 + 0x420) = iVar3;
    *(undefined4 *)(param_1 + 0x424) = 0xffffffff;
  }
  if (iVar4 != *(int *)(param_1 + 0x42c)) {
    *(int *)(param_1 + 0x42c) = iVar4;
    *(undefined4 *)(param_1 + 0x430) = 0xffffffff;
  }
  if (iVar5 != *(int *)(param_1 + 0x450)) {
    *(int *)(param_1 + 0x450) = iVar5;
    *(undefined4 *)(param_1 + 0x454) = 0xffffffff;
  }
  if (iVar6 != *(int *)(param_1 + 0x45c)) {
    *(int *)(param_1 + 0x45c) = iVar6;
    *(undefined4 *)(param_1 + 0x460) = 0xffffffff;
  }
  if (iVar7 != *(int *)(param_1 + 0x468)) {
    *(int *)(param_1 + 0x468) = iVar7;
    *(undefined4 *)(param_1 + 0x46c) = 0xffffffff;
  }
  return;
}

