/* speed.exe 006ffe00 FUN_006ffe00; analysis pseudocode, not buildable source.
 * calls 004e0800 FUN_004e0800
 * calls 004b22a0 FUN_004b22a0
 * calls 004ac0e0 FUN_004ac0e0
 * calls 007c4b80 FUN_007c4b80
 * calls 004bad20 FUN_004bad20
 * calls 004b24b0 FUN_004b24b0
 * calls 004b21b0 FUN_004b21b0
 * calls 004eb7d0 FUN_004eb7d0
 */

void __fastcall FUN_006ffe00(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = *(int *)(param_1 + 0x84);
  if (iVar6 < 0) {
    return;
  }
  if (DAT_008f8704 == 0) {
    return;
  }
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      uVar7 = 1;
LAB_006ffe87:
      iVar6 = FUN_004eb7d0(uVar7,0);
      iVar6 = iVar6 >> 8;
LAB_006ffe92:
      FUN_004bad20(iVar6,1);
LAB_006ffe9d:
      uVar7 = 0;
      goto LAB_006ffe9e;
    }
  }
  else if (iVar6 == 2) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      uVar7 = 2;
      goto LAB_006ffe87;
    }
  }
  else {
    if (iVar6 != 5) {
      iVar6 = 100;
      goto LAB_006ffe92;
    }
    iVar6 = *(int *)(param_1 + 0x48);
    if (iVar6 == 0) goto LAB_006ffea9;
    iVar3 = FUN_004eb7d0(*(undefined4 *)(iVar6 + 0x544),0);
    FUN_004bad20(iVar3 >> 8,1);
    if (*(char *)(iVar6 + 0x548) == '\0') goto LAB_006ffe9d;
    uVar7 = FUN_004eb7d0(0,3);
LAB_006ffe9e:
    FUN_004b22a0(uVar7);
  }
LAB_006ffea9:
  sVar4 = *(short *)(param_1 + 0x8c);
  if (sVar4 == -1) {
    iVar6 = FUN_004b24b0();
    if (0 < iVar6) {
      bVar5 = true;
      if (*(int *)(param_1 + 0x7c) == 0) goto LAB_006fff3f;
      *(undefined1 *)(param_1 + 0x50) = 1;
      if ((((*(code **)(param_1 + 0x80) != (code *)0x0) &&
           (iVar6 = *(int *)(param_1 + 0x84), -1 < iVar6)) && ((iVar6 < 3 || (iVar6 == 5)))) &&
         (*(short *)(param_1 + 0x8c) < 1)) {
        (**(code **)(param_1 + 0x80))();
      }
      uVar7 = *(undefined4 *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0x80) = 0;
      goto LAB_006fff2f;
    }
  }
  else {
    sVar2 = FUN_007c4b80();
    sVar4 = sVar4 - sVar2;
    *(short *)(param_1 + 0x8c) = sVar4;
    if (sVar4 < 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x7c);
      *(undefined2 *)(param_1 + 0x8c) = 0;
LAB_006fff2f:
      FUN_004ac0e0(uVar7);
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
  }
  bVar5 = *(int *)(param_1 + 0x7c) == 0;
LAB_006fff3f:
  if ((bVar5) && (cVar1 = FUN_004b21b0(), cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_004e0800();
    }
    *(undefined4 *)(param_1 + 0x40) = DAT_00925ae8;
  }
  return;
}

