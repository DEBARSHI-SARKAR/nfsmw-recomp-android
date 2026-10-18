/* speed.exe 004aed40 FUN_004aed40; analysis pseudocode, not buildable source.
 * calls 00452880 FUN_00452880
 * calls 004abcf0 FUN_004abcf0
 * calls 0045a430 FUN_0045a430
 * calls 004abec0 FUN_004abec0
 * calls 0056bb20 FUN_0056bb20
 * calls 00456120 FUN_00456120
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 * calls 00659260 FUN_00659260
 * calls 00659250 FUN_00659250
 */

void __fastcall FUN_004aed40(int param_1)

{
  int iVar1;
  int iVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086b2ea;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x98);
  ExceptionList = &pvStack_c;
  if (iVar1 != 0) {
    ExceptionList = &pvStack_c;
    FUN_0045a430();
    FUN_00452880(0x14,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar1,0x14,0);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  uVar6 = DAT_009260a8;
  if (DAT_00926064 == 0) {
    uVar6 = FUN_0056bb20();
  }
  switch(uVar6) {
  case 1:
    FUN_00452880(0x14,1);
    uVar7 = 0;
    uVar6 = 0x14;
    iVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    pvStack_c = (void *)0x0;
    if (iVar1 != 0) {
      uVar5 = 1;
LAB_004aeed3:
      uVar4 = 0;
      uVar3 = 0;
      FUN_004abec0(uVar5);
      uVar6 = FUN_00456120(uVar3,uVar4,uVar6,uVar7,iVar1);
      uVar6 = FUN_004abcf0(uVar6,uVar3,uVar4);
      goto LAB_004aef52;
    }
    break;
  case 2:
    FUN_00452880(0x14,1);
    uVar7 = 0;
    uVar6 = 0x14;
    iVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    pvStack_c = (void *)0x1;
    if (iVar1 != 0) {
      uVar5 = 2;
      goto LAB_004aeed3;
    }
    break;
  case 3:
    FUN_00452880(0x14,1);
    uVar7 = 0;
    uVar6 = 0x14;
    iVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    pvStack_c = (void *)0x2;
    if (iVar1 != 0) {
      uVar5 = 3;
      goto LAB_004aeed3;
    }
    break;
  case 4:
    FUN_00452880(0x14,1);
    uVar7 = 0;
    uVar6 = 0x14;
    iVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    pvStack_c = (void *)0x3;
    if (iVar1 != 0) {
      uVar5 = 4;
      goto LAB_004aeed3;
    }
    break;
  default:
    FUN_00452880(0x14,1);
    uVar7 = 0;
    uVar6 = 0x14;
    iVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    pvStack_c = (void *)0x5;
    if (iVar1 != 0) {
      iVar2 = FUN_00454810(0xc243117c,0);
      if (iVar2 == 0) {
        FUN_006269b0(0xc,uVar6,uVar7,iVar1);
      }
      uVar5 = 0;
      uVar7 = 0;
      uVar6 = FUN_00456120(0,0);
      uVar6 = FUN_004abcf0(uVar6,uVar7,uVar5);
      goto LAB_004aef52;
    }
    break;
  case 10:
    FUN_00452880(0x14,1);
    uVar7 = 0;
    uVar6 = 0x14;
    iVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    pvStack_c = (void *)0x4;
    if (iVar1 != 0) {
      uVar5 = 5;
      goto LAB_004aeed3;
    }
  }
  uVar6 = 0;
LAB_004aef52:
  *(undefined4 *)(param_1 + 0x98) = uVar6;
  ExceptionList = unaff_ESI;
  return;
}

