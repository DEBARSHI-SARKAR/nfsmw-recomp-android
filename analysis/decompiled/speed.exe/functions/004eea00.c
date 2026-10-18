/* speed.exe 004eea00 FUN_004eea00; analysis pseudocode, not buildable source.
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

void __fastcall FUN_004eea00(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x4c) != '\0') {
    iVar3 = *(int *)(param_1 + 0x10);
    uVar2 = 0;
    if (iVar3 == 0) {
      local_c = 0;
    }
    else {
      local_c = *(uint *)(iVar3 + 4) & 0x7fff;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    if (iVar3 != 0) {
      uVar2 = *(int *)(iVar3 + 8) >> 0x10 & 0x7fff;
    }
    local_8 = FUN_007c4b80();
    if ((int)uVar2 <= (int)local_8) {
      local_8 = uVar2;
    }
    local_4 = *(undefined4 *)(param_1 + 0x84);
    local_10 = 1.0;
    if (*(float *)(param_1 + 0x84) < *(float *)(param_1 + 100)) {
      local_4 = *(undefined4 *)(param_1 + 100);
      local_10 = *(float *)(param_1 + 0x84) / *(float *)(param_1 + 100);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 200) >> 8;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x7f < iVar3) {
      iVar3 = 0x7f;
    }
    iVar4 = (int)(iVar4 * local_c) >> 0x17;
    *(int *)(param_1 + 0x88) = iVar4;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x7f < iVar4) {
      iVar4 = 0x7f;
    }
    *(int *)(param_1 + 0x88) = iVar4;
    iVar4 = (int)(*(int *)(*(int *)(param_1 + 0x44) + 0xc4) * local_c) >> 0x17;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x7f < iVar4) {
      iVar4 = 0x7f;
    }
    FUN_0081bccb();
    FUN_0081d7ef(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x88));
    if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
       (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(uint **)(param_1 + 0x10) & 0xffff;
    }
    FUN_0081e557(*(undefined4 *)(param_1 + 0x68),uVar2,0);
    uVar1 = FUN_007c4b80();
    FUN_0081e4be(*(undefined4 *)(param_1 + 0x68),uVar1);
    FUN_0081e469(*(undefined4 *)(param_1 + 0x68),local_8);
    FUN_0081e3cb(*(undefined4 *)(param_1 + 0x68),iVar3);
    FUN_0081e318(*(undefined4 *)(param_1 + 0x68),0,iVar4);
    FUN_004e1cd0(local_4,0x42700000);
    iVar3 = *(int *)(param_1 + 0x58);
    iVar4 = *(int *)(iVar3 + 0x24);
    if ((iVar4 == 0) || (*(int *)(iVar3 + 0x28) == 0)) {
      fVar6 = (float10)_DAT_00890968;
    }
    else {
      fVar6 = (float10)FUN_004e14c0(*(float *)(iVar3 + 0x40) + _DAT_008933d4);
      fVar6 = (float10)iVar4 / fVar6;
    }
    *(float *)(param_1 + 0x84) = (float)(fVar6 * (float10)local_10 * (float10)_DAT_008970c0);
    iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 200) >> 8;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x7f < iVar3) {
      iVar3 = 0x7f;
    }
    iVar4 = (int)(*(int *)(*(int *)(param_1 + 0x40) + 0x40) * local_c) >> 0x17;
    *(int *)(param_1 + 0x8c) = iVar4;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x7f < iVar4) {
      iVar4 = 0x7f;
    }
    *(int *)(param_1 + 0x8c) = iVar4;
    iVar5 = (int)(*(int *)(*(int *)(param_1 + 0x44) + 0xc4) * local_c) >> 0x17;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (0x7f < iVar5) {
      iVar5 = 0x7f;
    }
    FUN_0081d7ef(*(undefined4 *)(param_1 + 0x80),iVar4);
    if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
       (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(uint **)(param_1 + 0x10) & 0xffff;
    }
    FUN_0081e557(*(undefined4 *)(param_1 + 0x80),uVar2,0);
    uVar1 = FUN_007c4b80();
    FUN_0081e4be(*(undefined4 *)(param_1 + 0x80),uVar1);
    FUN_0081e469(*(undefined4 *)(param_1 + 0x80),local_8);
    FUN_0081e3cb(*(undefined4 *)(param_1 + 0x80),iVar3);
    FUN_0081e318(*(undefined4 *)(param_1 + 0x80),0,iVar5);
    FUN_004e1cd0(local_4,0x42700000);
    FUN_0081bcd9();
    return;
  }
  return;
}

