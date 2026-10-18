/* speed.exe 004ee820 FUN_004ee820; analysis pseudocode, not buildable source.
 * calls 0081e318 FUN_0081e318
 * calls 004e14c0 FUN_004e14c0
 * calls 0081e557 FUN_0081e557
 * calls 007c4b80 FUN_007c4b80
 * calls 0081e4be FUN_0081e4be
 * calls 0081e469 FUN_0081e469
 * calls 0081e3cb FUN_0081e3cb
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081d7ef FUN_0081d7ef
 * calls 004e1cd0 FUN_004e1cd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ee820(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x4c) != '\0') {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 4) & 0x7fff;
    }
    local_4 = *(undefined4 *)(param_1 + 0x84);
    local_8 = 1.0;
    if (*(float *)(param_1 + 0x84) < *(float *)(param_1 + 100)) {
      local_4 = *(undefined4 *)(param_1 + 100);
      local_8 = *(float *)(param_1 + 0x84) / *(float *)(param_1 + 100);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 200) >> 8;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x7f < iVar4) {
      iVar4 = 0x7f;
    }
    iVar2 = (int)(*(int *)(*(int *)(param_1 + 0x40) + 0x3c) * uVar1) >> 0x17;
    *(int *)(param_1 + 0x88) = iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x7f < iVar2) {
      iVar2 = 0x7f;
    }
    *(int *)(param_1 + 0x88) = iVar2;
    iVar2 = (int)(*(int *)(*(int *)(param_1 + 0x44) + 0xc4) * uVar1) >> 0x17;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x7f < iVar2) {
      iVar2 = 0x7f;
    }
    FUN_0081bccb();
    FUN_0081d7ef(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x88));
    if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
       (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(uint **)(param_1 + 0x10) & 0xffff;
    }
    FUN_0081e557(*(undefined4 *)(param_1 + 0x68),uVar1,0);
    uVar3 = FUN_007c4b80();
    FUN_0081e4be(*(undefined4 *)(param_1 + 0x68),uVar3);
    uVar3 = FUN_007c4b80();
    FUN_0081e469(*(undefined4 *)(param_1 + 0x68),uVar3);
    FUN_0081e3cb(*(undefined4 *)(param_1 + 0x68),iVar4);
    FUN_0081e318(*(undefined4 *)(param_1 + 0x68),0,iVar2);
    FUN_0081bcd9();
    FUN_004e1cd0(local_4,0x42700000);
    iVar4 = *(int *)(param_1 + 0x58);
    iVar2 = *(int *)(iVar4 + 0x24);
    if ((iVar2 != 0) && (*(int *)(iVar4 + 0x28) != 0)) {
      fVar5 = (float10)FUN_004e14c0(*(float *)(iVar4 + 0x40) + _DAT_008933d4);
      *(float *)(param_1 + 0x84) =
           (float)(((float10)iVar2 / fVar5) * (float10)local_8 * (float10)_DAT_008970c0);
      return;
    }
    *(float *)(param_1 + 0x84) = _DAT_00890968 * local_8 * _DAT_008970c0;
  }
  return;
}

