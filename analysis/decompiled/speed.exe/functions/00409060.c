/* speed.exe 00409060 FUN_00409060; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00659260 FUN_00659260
 * calls 00456cb0 FUN_00456cb0
 * calls 005fbe70 FUN_005fbe70
 * calls 00452880 FUN_00452880
 * calls 00402e10 FUN_00402e10
 * calls 0045a430 FUN_0045a430
 * calls 00659250 FUN_00659250
 * calls 00454810 FUN_00454810
 * calls 007c4b80 FUN_007c4b80
 */

void __thiscall FUN_00409060(int param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008679bc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_007c4b80();
  iVar4 = FUN_007c4b80();
  if ((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1960) != 1)) {
LAB_004090bc:
    cVar2 = '\0';
  }
  else {
    if (*(int *)(DAT_0091e000 + 0x1968) != 0) {
      cVar2 = FUN_005fbe70();
      if (cVar2 != '\0') goto LAB_004090bc;
    }
    cVar2 = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x2e);
  *(char *)(param_1 + 0x2e) = cVar2;
  if ((iVar4 != iVar3) || (cVar2 != cVar1)) {
    iVar3 = *(int *)(param_1 + 0x40);
    if (iVar3 != 0) {
      FUN_0045a430();
      FUN_00452880(0x14,0);
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar3,0x14,0);
    }
    iVar3 = *(int *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (iVar3 != 0) {
      FUN_0045a430();
      FUN_00452880(0x14,0);
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar3,0x14,0);
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    ExceptionList = pvStack_c;
    return;
  }
  iVar4 = iVar4 + -1;
  FUN_00452880(0x14,1);
  if (cVar2 != '\0') {
    iVar3 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)();
    pvStack_c = (void *)0x0;
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
      iVar3 = FUN_00454810(0x2283ecaf,iVar4);
      if (iVar3 == 0) {
        iVar3 = FUN_006269b0(0xc);
      }
      uVar5 = FUN_00402e10(iVar3,0,0);
    }
    pvStack_c = (void *)0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = uVar5;
    FUN_00452880(0x14,1);
    iVar3 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    if (iVar3 != 0) {
      iVar4 = FUN_00454810(0xe5332008,iVar4);
      if (iVar4 == 0) {
        iVar4 = FUN_006269b0(0xc);
      }
      FUN_00456cb0(iVar4,0,0);
      *(int *)(param_1 + 0x44) = iVar3;
      *(void **)(param_1 + 0x1c) = pvStack_c;
      ExceptionList = unaff_ESI;
      return;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(void **)(param_1 + 0x1c) = pvStack_c;
    ExceptionList = unaff_ESI;
    return;
  }
  iVar3 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
  pvStack_c = (void *)0x2;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    iVar3 = FUN_00454810(0xd4b0cc11,iVar4);
    if (iVar3 == 0) {
      iVar3 = FUN_006269b0(0xc);
    }
    uVar5 = FUN_00402e10(iVar3,0,0);
  }
  pvStack_c = (void *)0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  FUN_00452880(0x14,1);
  iVar3 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
  if (iVar3 != 0) {
    iVar4 = FUN_00454810(0xf3918f68,iVar4);
    if (iVar4 == 0) {
      iVar4 = FUN_006269b0(0xc);
    }
    FUN_00456cb0(iVar4,0,0);
    *(int *)(param_1 + 0x44) = iVar3;
    *(void **)(param_1 + 0x1c) = pvStack_c;
    ExceptionList = unaff_ESI;
    return;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(void **)(param_1 + 0x1c) = pvStack_c;
  ExceptionList = unaff_ESI;
  return;
}

