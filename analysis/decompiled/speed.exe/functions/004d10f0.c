/* speed.exe 004d10f0 FUN_004d10f0; analysis pseudocode, not buildable source.
 * calls 00659250 FUN_00659250
 * calls 004c37e0 FUN_004c37e0
 * calls 006cba50 FUN_006cba50
 * calls 004d0cd0 FUN_004d0cd0
 * calls 00456120 FUN_00456120
 * calls 004b8a10 FUN_004b8a10
 * calls 00652ad0 _malloc
 * calls 00454810 FUN_00454810
 * calls 004aed40 FUN_004aed40
 * calls 004abcf0 FUN_004abcf0
 * calls 0045da30 FUN_0045da30
 * calls 006269b0 FUN_006269b0
 * calls 00452880 FUN_00452880
 * calls 0071dd20 FUN_0071dd20
 * calls 004b92c0 FUN_004b92c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d10f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086c816;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006cba50(0);
  if (DAT_008f86f8 != 0) {
    if (*(int *)(param_1 + 0x94) == 0) {
      FUN_00452880(0x14,1);
      iVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
      uStack_4 = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_004b8a10(0x7e4b0ed2,0,0);
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x94) = uVar2;
    }
    if (*(int *)(param_1 + 0x98) == 0) {
      FUN_00452880(0x14,1);
      iVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
      uStack_4 = 1;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_00454810(0xc243117c,0);
        if (iVar1 == 0) {
          FUN_006269b0(0xc);
        }
        uVar5 = 0;
        uVar4 = 0;
        uVar2 = FUN_00456120(0,0);
        uVar2 = FUN_004abcf0(uVar2,uVar4,uVar5);
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x98) = uVar2;
    }
    pvVar3 = _malloc(0x30);
    uStack_4 = 2;
    if (pvVar3 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004c37e0();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    pvVar3 = _malloc(0x100);
    uStack_4 = 3;
    if (pvVar3 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004b92c0();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    FUN_004aed40();
    FUN_0071dd20(2);
    _DAT_00911fe0 = FUN_0045da30(0xffffffff);
    *(int *)(param_1 + 0x24) = *(int *)(DAT_0091cf90 + 0x10) + 0x4c;
    DAT_00911ee0 = DAT_00911ee0 + 1;
    FUN_004d0cd0(1);
    if (DAT_00911f60 != (int *)0x0) {
      (**(code **)(*DAT_00911f60 + 8))(*(undefined4 *)(param_1 + 0x70));
    }
    if (DAT_00911f64 != (int *)0x0) {
      (**(code **)(*DAT_00911f64 + 8))(*(undefined4 *)(param_1 + 0x70));
    }
  }
  ExceptionList = local_c;
  return;
}

