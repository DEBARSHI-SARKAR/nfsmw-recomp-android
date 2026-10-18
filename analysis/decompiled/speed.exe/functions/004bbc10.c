/* speed.exe 004bbc10 FUN_004bbc10; analysis pseudocode, not buildable source.
 * calls 004b3860 FUN_004b3860
 * calls 006269b0 FUN_006269b0
 * calls 007c4b80 FUN_007c4b80
 * calls 00454810 FUN_00454810
 * calls 004ad280 FUN_004ad280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bbc10(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (_DAT_00894b60 <= *(float *)(*(int *)(iVar4 + 0x30) + 0x2c)) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    fVar1 = *(float *)(iVar4 + 0x11c);
    *(float *)(param_1 + 0x68) = fVar1;
    uVar2 = *(undefined4 *)(iVar4 + 0x118);
    *(float *)(iVar4 + 0x118) = fVar1;
    fVar1 = fVar1 * _DAT_00890ea8;
    *(undefined4 *)(iVar4 + 0x11c) = uVar2;
    *(float *)(iVar4 + 0x120) = *(float *)(iVar4 + 0x120) * _DAT_00896b58 + fVar1;
    *(float *)(param_1 + 100) = DAT_009142dc;
    iVar4 = FUN_00454810(0xf040e6b0,0);
    if (iVar4 == 0) {
      iVar4 = FUN_006269b0(0x40);
    }
    psVar5 = (short *)FUN_00454810(0xf2d90101,0);
    if (psVar5 == (short *)0x0) {
      psVar5 = (short *)FUN_006269b0(4);
    }
    iVar6 = FUN_00454810(0xf2d90101,0);
    if (iVar6 == 0) {
      iVar6 = FUN_006269b0(4);
    }
    FUN_004b3860(iVar4,param_1 + 200,7,(float)(int)*(short *)(iVar6 + 2),(float)(int)*psVar5);
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined1 *)(param_1 + 0x104) = 0;
    uVar3 = FUN_007c4b80();
    *(undefined2 *)(param_1 + 0x106) = uVar3;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x8c) = 0x3c23d70a;
    *(undefined4 *)(param_1 + 0xa8) = 0x3a83126f;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    fVar7 = (float10)(**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x30) + 0x34))();
    *(float *)(param_1 + 0x74) = (float)fVar7;
    *(float *)(param_1 + 0x80) = (float)fVar7;
    *(undefined4 *)(param_1 + 0x70) = 0x3dcccccd;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    iVar4 = FUN_004ad280();
    if (iVar4 == 1) {
      iVar4 = FUN_00454810(0xf2d90101,0);
      if (iVar4 == 0) {
        FUN_006269b0(4);
      }
    }
    else {
      iVar4 = FUN_00454810(0xf2d90101,0);
      if (iVar4 == 0) {
        FUN_006269b0(4);
      }
      iVar4 = FUN_00454810(0xf2d90101,1);
      if (iVar4 == 0) {
        FUN_006269b0(4);
      }
    }
    iVar4 = FUN_00454810(0xcb89b8c8,0);
    if (iVar4 == 0) {
      FUN_006269b0(4);
    }
    iVar4 = FUN_007c4b80();
    fVar1 = (float)iVar4 * _DAT_00890d60;
    *(float *)(param_1 + 0x150) = fVar1;
    if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
      *(undefined4 *)(param_1 + 0x150) = 0x3c23d70a;
    }
    *(undefined4 *)(param_1 + 0x15c) = 5;
    *(float *)(param_1 + 0x158) = (float)extraout_ST1;
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(float *)(param_1 + 0x154) = (float)extraout_ST0;
    *(float *)(param_1 + 0x160) = (float)extraout_ST0;
    fVar1 = DAT_009142dc + *(float *)(*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x34);
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 1;
    *(undefined1 *)(param_1 + 0x2d) = 1;
    *(float *)(param_1 + 0x60) = fVar1;
  }
  return;
}

