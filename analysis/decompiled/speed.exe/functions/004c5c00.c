/* speed.exe 004c5c00 FUN_004c5c00; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 005cc240 FUN_005cc240
 * calls 00469da0 FUN_00469da0
 * calls 004b5620 FUN_004b5620
 * calls 004b57e0 FUN_004b57e0
 */

void __fastcall FUN_004c5c00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x38) = 3;
  iVar1 = FUN_004b5620(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x40,3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 4;
    iVar1 = FUN_004b5620(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x40,4);
    if (iVar1 != 0) goto LAB_004c5d41;
    *(undefined4 *)(param_1 + 0x38) = 5;
    iVar1 = FUN_004b5620(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x40,5);
    if (iVar1 != 0) goto LAB_004c5d41;
    *(undefined4 *)(param_1 + 0x38) = 7;
    iVar1 = FUN_004b5620(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x40,7);
    if (iVar1 != 0) goto LAB_004c5d41;
    *(undefined4 *)(param_1 + 0x38) = 10;
    iVar1 = FUN_004b5620(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x40,10);
    if ((iVar1 != 0) && (*(short *)(iVar1 + 0x1a) != 1)) goto LAB_004c5d41;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if ((*(char *)(param_1 + 0x28) == '\0') ||
       (*(undefined1 *)(param_1 + 0x28) = 0,
       *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x228) != 0)) goto LAB_004c5d1a;
    uVar2 = FUN_005cc240("TunnelUpdate");
    iVar1 = FUN_00469da0(0);
    *(undefined4 *)(iVar1 + 4) = uVar2;
    FUN_0065faf0();
    iVar1 = *(int *)(&DAT_008efc90 + *(int *)(param_1 + 0x74) * 4);
    if (0xb < iVar1) {
      iVar1 = 9;
    }
  }
  else {
LAB_004c5d41:
    if ((*(char *)(param_1 + 0x28) != '\0') ||
       (*(undefined1 *)(param_1 + 0x28) = 1,
       *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x228) != 0)) goto LAB_004c5d1a;
    uVar2 = FUN_005cc240("TunnelUpdate");
    iVar1 = FUN_00469da0(1);
    *(undefined4 *)(iVar1 + 4) = uVar2;
    FUN_0065faf0();
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 3) {
      iVar1 = 5;
    }
    else if ((iVar1 < 4) || (5 < iVar1)) {
      iVar1 = 3;
    }
    else {
      iVar1 = 6;
    }
  }
  FUN_004b57e0(iVar1,0);
LAB_004c5d1a:
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_1 + 0x28);
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x228) == 0) {
    DAT_00912120 = *(undefined4 *)(param_1 + 0x38);
  }
  return;
}

