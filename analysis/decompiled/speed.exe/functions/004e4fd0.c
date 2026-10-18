/* speed.exe 004e4fd0 FUN_004e4fd0; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 0045a840 FUN_0045a840
 * calls 004d2370 FUN_004d2370
 * calls 004d22b0 FUN_004d22b0
 * calls 006269b0 FUN_006269b0
 * calls 00456050 FUN_00456050
 * calls 00454810 FUN_00454810
 * calls 0045a760 FUN_0045a760
 */

void __thiscall FUN_004e4fd0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = param_1[9];
  iVar6 = 0;
  param_1[0xd] = param_2;
  for (iVar5 = iVar1; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
    if ((*(uint *)(iVar5 + 0x20) & 0x7f0) == 0x20) {
      param_1[0x2a] = 2;
      goto LAB_004e502f;
    }
  }
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if ((*(uint *)(iVar1 + 0x20) & 0x7f0) == 0x10) {
      param_1[0x2a] = 1;
      goto LAB_004e502f;
    }
  }
  param_1[0x2a] = 0;
LAB_004e502f:
  uVar2 = FUN_00452430();
  uVar2 = FUN_00456050(0x50eab0e6,uVar2);
  FUN_0045a760(uVar2);
  if (param_1[0x35] != 0) {
    FUN_0045a840(param_1[0x36] + 0x30);
  }
  iVar5 = *(int *)(param_1[0xd] + 0x208);
  piVar3 = (int *)FUN_00454810(0x170d5554,0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_006269b0(4);
  }
  iVar1 = *piVar3;
  iVar5 = *(int *)(iVar5 + 0x2c);
  iVar7 = 0;
  iVar4 = FUN_004d22b0();
  if (0 < iVar4) {
    do {
      iVar4 = FUN_00454810(0x8ae8bee0,iVar7);
      if (iVar4 == 0) {
        iVar4 = FUN_006269b0(0x10);
      }
      if ((iVar1 - iVar5) + 4 < (int)(uint)*(byte *)(iVar4 + 0xc)) break;
      iVar8 = iVar7 + 1;
      iVar4 = FUN_004d22b0();
      iVar6 = iVar7;
      iVar7 = iVar8;
    } while (iVar8 < iVar4);
  }
  iVar5 = FUN_00454810(0x8ae8bee0,iVar6);
  if (iVar5 == 0) {
    iVar5 = FUN_006269b0(0x10);
  }
  FUN_0045a840(iVar5);
  if (DAT_009142a0 == (int *)0x0) {
    DAT_009142a0 = param_1 + 0x39;
  }
  if (DAT_009142a4 == (int *)0x0) {
    iVar5 = *(int *)(param_1[0xd] + 0x208);
    piVar3 = (int *)FUN_00454810(0x7f440672,0);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_006269b0(4);
    }
    iVar5 = *(int *)(iVar5 + 0x44);
    iVar1 = *piVar3;
    iVar4 = FUN_004d2370();
    iVar6 = 0;
    iVar7 = 0;
    if (0 < iVar4) {
      do {
        iVar4 = FUN_00454810(0xe9bfb66,iVar7);
        if (iVar4 == 0) {
          iVar4 = FUN_006269b0(0x10);
        }
        if ((iVar1 - iVar5) + 4 < (int)(uint)*(byte *)(iVar4 + 0xc)) break;
        iVar8 = iVar7 + 1;
        iVar4 = FUN_004d2370();
        iVar6 = iVar7;
        iVar7 = iVar8;
      } while (iVar8 < iVar4);
    }
    iVar5 = FUN_00454810(0xe9bfb66,iVar6);
    if (iVar5 == 0) {
      iVar5 = FUN_006269b0(0x10);
    }
    FUN_0045a840(iVar5);
    if (DAT_009142a4 == (int *)0x0) {
      DAT_009142a4 = param_1 + 0x3e;
    }
  }
  else {
    uVar2 = FUN_00452430();
    uVar2 = FUN_00456050(0x55624a85,uVar2);
    FUN_0045a760(uVar2);
  }
  piVar3 = (int *)param_1[8];
  param_1[7] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    (**(code **)(*piVar3 + 0x1c))();
  }
  (**(code **)(*param_1 + 0x10))();
  return;
}

