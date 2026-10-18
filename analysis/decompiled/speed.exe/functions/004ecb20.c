/* speed.exe 004ecb20 FUN_004ecb20; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 007c4b80 FUN_007c4b80
 * calls 004ae980 FUN_004ae980
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 * calls 00831a8a FUN_00831a8a
 */

/* WARNING: Removing unreachable block (ram,0x004ecce2) */
/* WARNING: Removing unreachable block (ram,0x004ecd3e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ecb20(int param_1)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d20b;
  local_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 0x48);
  iVar7 = *(int *)(iVar6 + 0x38);
  if (((iVar7 == 1) || (iVar7 == 2)) || (iVar7 == 3)) {
    iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x50) + 8) + 0x38);
  }
  else {
    iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x50) + 8) + 0x48);
  }
  ExceptionList = &local_c;
  FUN_007c4b80();
  iVar4 = FUN_007c4b80();
  iVar6 = *(int *)(iVar6 + 0x38);
  if (((iVar6 == 1) || (iVar6 == 2)) || (iVar6 == 3)) {
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      uVar5 = **(int **)(param_1 + 0x10) >> 0x10 & 0x7fff;
      goto LAB_004ecc25;
    }
  }
  else if (*(int *)(param_1 + 0x10) != 0) {
    uVar5 = *(uint *)(*(int *)(param_1 + 0x10) + 4) & 0x7fff;
    goto LAB_004ecc25;
  }
  uVar5 = 0;
LAB_004ecc25:
  piVar2 = *(int **)(param_1 + 0x28);
  iVar6 = (int)(uVar5 * (*(int *)(&DAT_008f1550 + iVar4 * 4) * iVar7 >> 0xf)) >> 0xf;
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar2);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x48) + 0x38);
  if (((iVar7 == 1) || (iVar7 == 2)) || (iVar7 == 3)) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  uVar5 = (uint)bVar3;
  bVar10 = *(int *)(*(int *)(param_1 + 0x18) + 0xc4) == 0;
  uVar9 = (uint)bVar10;
  FUN_004ae980("SND: Shift");
  iVar7 = FUN_00831667(0x1c);
  local_4 = 0;
  if (iVar7 != 0) {
    if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
       (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = **(uint **)(param_1 + 0x10) & 0xffff;
    }
    if (2 < bVar3) {
      uVar5 = 2;
    }
    puVar1 = (uint *)(iVar7 + 4);
    *puVar1 = uVar5;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    *(int *)(iVar7 + 8) = iVar6;
    *(undefined4 *)(iVar7 + 0xc) = 0x1000;
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
    else if (0xffff < uVar8) {
      uVar8 = 0xffff;
    }
    *(uint *)(iVar7 + 0x10) = uVar8;
    *(undefined4 *)(iVar7 + 0x14) = 0;
    if (uVar9 != 1 && bVar10) {
      uVar9 = 1;
    }
    *(uint *)(iVar7 + 0x18) = uVar9;
    iVar6 = FUN_00831a8a(&DAT_00914874,puVar1,iVar7);
    if (iVar6 < 0) {
      FUN_0083198b(&PTR_s_FX_SHIFTING_01_008f02e8);
      FUN_00831a8a(&DAT_00914874,puVar1,iVar7);
    }
    *(int *)(param_1 + 0x28) = iVar7;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  ExceptionList = local_c;
  return;
}

