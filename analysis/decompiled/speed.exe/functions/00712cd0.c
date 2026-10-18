/* speed.exe 00712cd0 FUN_00712cd0; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 * calls 004ac100 thunk_FUN_004ac040
 * calls 00452880 FUN_00452880
 * calls 004b1ec0 FUN_004b1ec0
 * calls 00659250 FUN_00659250
 * calls 006fe4b0 FUN_006fe4b0
 * calls 00712430 FUN_00712430
 * calls 00660ee0 FUN_00660ee0
 * calls 0065f740 FUN_0065f740
 */

void __thiscall FUN_00712cd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_0088000f;
  pvStack_c = ExceptionList;
  DAT_00992278 = param_2;
  ExceptionList = &pvStack_c;
  FUN_00452880(0x14,1);
  iStack_4 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
  pvStack_c = (void *)0x0;
  if (iStack_4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006fe4b0(*(undefined4 *)(DAT_00911fa8 + 0x98));
  }
  pvStack_c = (void *)0xffffffff;
  uVar3 = FUN_004b1ec0(0);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  iVar1 = *(int *)(iVar2 + 8);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x18);
  iVar2 = *(int *)(iVar2 + 8);
  puVar7 = *(undefined1 **)(iVar2 + 0x3c);
  puVar6 = *(undefined1 **)(iVar2 + 0xc);
  puVar5 = *(undefined1 **)(iVar2 + 0x2c);
  puVar4 = puVar7;
  if (puVar7 == (undefined1 *)0x0) {
    puVar4 = &DAT_00890978;
  }
  iVar2 = FUN_0065f740(puVar4);
  if (iVar2 < 1) {
    DAT_0099227c = 0;
  }
  else {
    DAT_0099227c = thunk_FUN_004ac040(iVar2,"AUD: Game speech events",0);
    if (DAT_0099227c != 0) {
      iStack_4 = 0;
      FUN_00712430(&iStack_4);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_00890978;
      }
      FUN_00660ee0(DAT_0099227c,puVar7,0,iVar2,&LAB_0070cdd0,param_1,0);
    }
  }
  puVar7 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    puVar7 = &DAT_00890978;
  }
  iVar2 = FUN_0065f740(puVar7);
  if (iVar2 < 1) {
    DAT_0099226c = 0;
  }
  else {
    DAT_0099226c = FUN_00465a70(iVar2,0x1040);
    if (DAT_0099226c != 0) {
      iStack_4 = 1;
      FUN_00712430(&iStack_4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00890978;
      }
      FUN_00660ee0(DAT_0099226c,puVar5,0,iVar2,&LAB_0070cdd0,param_1,0);
    }
  }
  puVar7 = puVar6;
  if (puVar6 == (undefined1 *)0x0) {
    puVar7 = &DAT_00890978;
  }
  iVar2 = FUN_0065f740(puVar7);
  if (0 < iVar2) {
    DAT_00992274 = thunk_FUN_004ac040(iVar2,"AUD: Game speech CSIS data",0);
    if (DAT_00992274 != 0) {
      iStack_4 = 2;
      FUN_00712430(&iStack_4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_00890978;
      }
      FUN_00660ee0(DAT_00992274,puVar6,0,iVar2,&LAB_0070cdd0,param_1,0);
    }
    ExceptionList = pvStack_14;
    return;
  }
  DAT_00992274 = 0;
  ExceptionList = pvStack_14;
  return;
}

