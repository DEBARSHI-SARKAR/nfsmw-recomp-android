/* speed.exe 0056ada0 FUN_0056ada0; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 * calls 005dca00 FUN_005dca00
 */

int FUN_0056ada0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int aiStack_70 [28];
  
  uVar4 = 0;
  uVar5 = 1;
  if ((*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) & 1) == 0) {
    if (param_1 == 1) {
      uVar4 = 0x1e000;
    }
  }
  else {
    uVar4 = 1 << (*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) & 0x1f);
  }
  if (DAT_0091e004 != 0) {
    iVar2 = FUN_005dca00();
    if (iVar2 == 0) {
      uVar5 = 0x11;
    }
  }
  uVar6 = (-(uint)(param_1 != 1) & 0xfffffef1) + 0x20f;
  iVar7 = 0;
  puVar3 = &DAT_008f3d80;
  iVar2 = 2;
  do {
    if (((((puVar3[-1] & uVar4) != 0) && ((*puVar3 & uVar5) != 0)) && ((puVar3[1] & uVar6) != 0)) &&
       (iVar2 + -2 != 0x1b)) {
      aiStack_70[iVar7] = iVar2 + -2;
      iVar7 = iVar7 + 1;
    }
    if ((((puVar3[3] & uVar4) != 0) && ((puVar3[4] & uVar5) != 0)) &&
       (((puVar3[5] & uVar6) != 0 && (iVar2 + -1 != 0x1b)))) {
      aiStack_70[iVar7] = iVar2 + -1;
      iVar7 = iVar7 + 1;
    }
    if ((((puVar3[7] & uVar4) != 0) && ((puVar3[8] & uVar5) != 0)) &&
       (((puVar3[9] & uVar6) != 0 && (iVar2 != 0x1b)))) {
      aiStack_70[iVar7] = iVar2;
      iVar7 = iVar7 + 1;
    }
    if (((((puVar3[0xb] & uVar4) != 0) && ((puVar3[0xc] & uVar5) != 0)) &&
        ((puVar3[0xd] & uVar6) != 0)) && (iVar2 + 1 != 0x1b)) {
      aiStack_70[iVar7] = iVar2 + 1;
      iVar7 = iVar7 + 1;
    }
    iVar1 = iVar2 + 2;
    puVar3 = puVar3 + 0x10;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x1c);
  if (iVar7 == 0) {
    return 0x1c;
  }
  iVar2 = FUN_0045da30(iVar7);
  return aiStack_70[iVar2];
}

