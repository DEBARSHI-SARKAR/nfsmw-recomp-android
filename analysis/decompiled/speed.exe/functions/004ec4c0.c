/* speed.exe 004ec4c0 FUN_004ec4c0; analysis pseudocode, not buildable source.
 * calls 004ba590 FUN_004ba590
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 006269b0 FUN_006269b0
 * calls 007c4b80 FUN_007c4b80
 * calls 004ae980 FUN_004ae980
 * calls 00454810 FUN_00454810
 * calls 00831a8a FUN_00831a8a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ec4c0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d18b;
  local_c = ExceptionList;
  uVar8 = 0;
  if ((DAT_008f86f8 != 0) &&
     (fVar2 = *(float *)(*(int *)(param_1 + 0x18) + 100), _DAT_00899100 <= fVar2)) {
    ExceptionList = &local_c;
    piVar3 = (int *)FUN_00454810(0x34beca33,0);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_006269b0(4);
    }
    iVar5 = *piVar3;
    FUN_004ba590(fVar2);
    iVar4 = FUN_007c4b80();
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(*(int *)(param_1 + 0x10) + 8) & 0x7fff;
    }
    iVar4 = (int)(uVar7 * (iVar4 * iVar5 >> 0xf)) >> 0xf;
    FUN_004ae980("SND ShiftDisEngage");
    iVar5 = FUN_00831667(0x20);
    local_4 = 0;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      if ((*(uint **)(param_1 + 0x10) != (uint *)0x0) &&
         (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) != 0)) {
        uVar8 = **(uint **)(param_1 + 0x10) & 0xffff;
      }
      iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0xd8) + 0x94);
      puVar1 = (undefined4 *)(iVar5 + 4);
      *puVar1 = 0;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (100 < iVar6) {
        iVar6 = 100;
      }
      *(int *)(iVar5 + 8) = iVar6;
      iVar6 = FUN_007c4b80();
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (10000 < iVar6) {
        iVar6 = 10000;
      }
      *(int *)(iVar5 + 0xc) = iVar6;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x8013 < iVar4) {
        iVar4 = 0x8013;
      }
      *(int *)(iVar5 + 0x10) = iVar4;
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      else if (0x10000 < uVar8) {
        uVar8 = 0x10000;
      }
      *(uint *)(iVar5 + 0x14) = uVar8;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      iVar4 = FUN_00831a8a(&DAT_009147ec,puVar1,iVar5);
      if (iVar4 < 0) {
        FUN_0083198b(&PTR_s_CAR_SWTN_008f0250);
        FUN_00831a8a(&DAT_009147ec,puVar1,iVar5);
      }
    }
    *(int *)(param_1 + 0x38) = iVar5;
  }
  ExceptionList = local_c;
  return;
}

