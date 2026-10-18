/* speed.exe 0044c5e0 FUN_0044c5e0; analysis pseudocode, not buildable source.
 * calls 00756890 FUN_00756890
 * calls 00444fe0 FUN_00444fe0
 * calls 0044ab10 FUN_0044ab10
 * calls 00445fa0 FUN_00445fa0
 * calls 004467a0 FUN_004467a0
 * calls 00449450 FUN_00449450
 * calls 00460bf0 FUN_00460bf0
 * calls 007477a0 FUN_007477a0
 * calls 00759410 FUN_00759410
 * calls 00466340 FUN_00466340
 * calls 00445070 FUN_00445070
 * calls 00789870 FUN_00789870
 * calls 00449970 FUN_00449970
 * calls 0075a400 FUN_0075a400
 * calls 00445cd0 FUN_00445cd0
 * calls 0044c520 FUN_0044c520
 * calls 0044b280 FUN_0044b280
 * calls 0045cd20 __break
 * calls 007477f0 FUN_007477f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0044c5e0(int *param_1,int *param_2,undefined4 param_3)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  char extraout_AL;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_60 [56];
  float fStack_28;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_008699eb;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  (**(code **)(*param_1 + 8))();
  param_1[1] = *param_2;
  uVar7 = 0;
  param_1[2] = param_2[1];
  iVar4 = FUN_00759410(0);
  param_1[3] = iVar4;
  FUN_00756890(param_3);
  *(int *)(param_1[3] + 0xe0) = param_1[2];
  iVar4 = param_1[3];
  FUN_00444fe0(iVar4 + 0x60,param_2 + 4);
  if (*(int *)(iVar4 + 0xf4) == 0) {
    FUN_007477a0();
  }
  fStack_7c = (float)FUN_00466340(DAT_009b0a2c);
  uStack_14 = 0;
  if (fStack_7c == 0.0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0075a400(param_1[3],param_2 + 0x14,1);
  }
  param_1[4] = iVar4;
  uStack_14 = 0xffffffff;
  iVar4 = FUN_00466340(DAT_0090d9dc);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0044c520();
  }
  fVar1 = _DAT_00890968;
  param_1[5] = iVar4;
  *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(param_1[3] + 0xe0);
  *(int *)(param_1[5] + 0x60) = param_2[0x1d];
  if (*(float *)(param_1[5] + 0x60) == fVar1) {
    *(undefined4 *)(param_1[5] + 0x60) = 0x3f800000;
  }
  uVar6 = param_2[3];
  if ((uVar6 & 0x40) == 0) {
    if ((uVar6 & 0x20) != 0) {
      uVar7 = 0x20;
    }
  }
  else {
    uVar7 = 0x60;
  }
  if ((uVar6 & 0x10) == 0) {
    uVar7 = uVar7 | 8;
  }
  else {
    uVar7 = uVar7 | 0x10;
  }
  if ((char)uVar6 < '\0') {
    uVar7 = uVar7 | 0x80;
  }
  if ((uVar6 & 0x100) != 0) {
    uVar7 = uVar7 | 0x100;
  }
  if ((uVar6 & 0x200) != 0) {
    uVar7 = uVar7 | 0x200;
  }
  if ((uVar6 & 0x400) != 0) {
    uVar7 = uVar7 | 0x400;
  }
  iVar4 = param_1[5];
  if (param_2[0x1c] == 0) {
    iVar5 = FUN_0044b280(DAT_0090dca0);
    if (iVar5 == 0) {
      ExceptionList = pvStack_1c;
      return 0;
    }
    FUN_0044ab10(iVar5);
    iVar5 = param_1[5];
    uVar6 = *(uint *)(iVar5 + 0x34);
    if (uVar7 == 0) {
      uVar6 = uVar6 | 0x2a;
      goto LAB_0044c7c1;
    }
    uVar7 = uVar7 | 2;
  }
  else {
    iVar5 = FUN_0044b280(param_2[0x1c]);
    if (iVar5 == 0) {
      ExceptionList = pvStack_1c;
      return 0;
    }
    FUN_0044ab10(iVar5);
    iVar5 = param_1[5];
    uVar6 = *(uint *)(iVar5 + 0x34);
    if (uVar7 == 0) {
      uVar6 = uVar6 | 0x29;
      goto LAB_0044c7c1;
    }
    uVar7 = uVar7 | 1;
  }
  uVar6 = uVar6 | uVar7;
LAB_0044c7c1:
  *(uint *)(iVar5 + 0x34) = uVar6;
  if (param_2[0x18] != 0) {
    FUN_00449450(param_2[0x18],0);
  }
  if (param_2[0x19] != 0) {
    FUN_00449450(param_2[0x19],1);
  }
  if (param_2[0x1a] != 0) {
    FUN_00449450(param_2[0x1a],2);
  }
  bVar2 = false;
  if ((param_2[0x1c] != 0) && (param_2[0x1b] != 0)) {
    FUN_00449450(param_2[0x1b],0);
    bVar2 = true;
    *(float *)(param_1[5] + 0x60) = *(float *)(param_1[5] + 0x60) * _DAT_008933d4;
  }
  if (*(int *)(param_1[5] + 0x7c) == 0) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  if (param_1[5] != 0) {
    if ((*(byte *)(param_2 + 3) & 0x40) != 0) {
      FUN_00445cd0(param_2[0x20],param_2[0x21]);
    }
    iVar5 = param_1[5];
    *(int *)(iVar5 + 0x6c) = param_2[0x1e];
    *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) | 0x80;
  }
  if ((param_1[5] != 0) && (*(int *)(param_1[5] + 0x34) == 8)) {
                    /* WARNING: Subroutine does not return */
    __break();
  }
  if (((char)param_1[6] != '\0') && (param_1[5] != 0)) {
    FUN_00445fa0(1);
    FUN_004467a0(1,&fStack_70);
    iVar5 = param_1[3];
    if (*(int *)(iVar5 + 0xf4) != 0) {
      FUN_007477f0();
    }
    fVar3 = fStack_68;
    fStack_7c = *(float *)(iVar5 + 0x58);
    fVar1 = -fStack_6c;
    fStack_68 = fStack_70;
    fStack_6c = fVar3;
    uStack_78 = 0;
    uStack_74 = 3;
    fStack_70 = fVar1;
    FUN_00789870(&fStack_70,&iStack_80,0);
    if (extraout_AL != '\0') {
      param_1[7] = iStack_80;
      *(undefined1 *)((int)param_1 + 0x19) = 1;
      FUN_00445070(param_1[3] + 0x60);
      fStack_28 = ((float)param_1[7] - fStack_7c) + fStack_28 + _DAT_00893330;
      FUN_00449970(auStack_60);
    }
  }
  if (((bVar2) && (param_1[5] != 0)) && (iVar4 != -0x20)) {
    if (*(int *)(iVar4 + 0x30) == 0x30) {
      iVar4 = FUN_00460bf0("Bip23");
      param_1[8] = (param_2[0x1c] == iVar4) + 2;
    }
    else {
      param_1[8] = -1;
    }
  }
  ExceptionList = pvStack_1c;
  return 1;
}

