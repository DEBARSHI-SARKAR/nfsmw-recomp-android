/* speed.exe 004ecdb0 FUN_004ecdb0; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 004ae980 FUN_004ae980
 * calls 008311aa FUN_008311aa
 * calls 00831a8a FUN_00831a8a
 */

/* WARNING: Removing unreachable block (ram,0x004eceb1) */

void __fastcall FUN_004ecdb0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d22b;
  local_c = ExceptionList;
  if ((DAT_008f86f8 != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14) & 0x7fff;
    }
    bVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0xc4) == 0;
    uVar5 = (uint)bVar7;
    ExceptionList = &local_c;
    local_14 = param_1;
    FUN_004ae980("SND: BrakeMash");
    piVar3 = (int *)FUN_00831667(0x1c);
    local_4 = 0;
    local_10 = piVar3;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
         (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = **(uint **)(param_1 + 0x10) & 0xffff;
      }
      piVar1 = piVar3 + 1;
      *piVar1 = 2;
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      else if (0x7fff < uVar2) {
        uVar2 = 0x7fff;
      }
      piVar3[2] = uVar2;
      piVar3[3] = 0x1000;
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xffff < uVar4) {
        uVar4 = 0xffff;
      }
      piVar3[4] = uVar4;
      piVar3[5] = 0;
      if (uVar5 != 1 && bVar7) {
        uVar5 = 1;
      }
      piVar3[6] = uVar5;
      iVar6 = FUN_00831a8a(&DAT_00914874,piVar1,piVar3);
      param_1 = local_14;
      if (iVar6 < 0) {
        FUN_0083198b(&PTR_s_FX_SHIFTING_01_008f02e8);
        FUN_00831a8a(&DAT_00914874,piVar1,piVar3);
        param_1 = local_14;
      }
    }
    local_4 = 0xffffffff;
    *(int **)(param_1 + 0x2c) = piVar3;
    if ((piVar3 != (int *)0x0) && (local_14 = 0, *piVar3 != 0)) {
      FUN_008311aa(&local_14);
    }
  }
  ExceptionList = local_c;
  return;
}

