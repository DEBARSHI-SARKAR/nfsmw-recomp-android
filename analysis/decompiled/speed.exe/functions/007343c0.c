/* speed.exe 007343c0 FUN_007343c0; analysis pseudocode, not buildable source.
 * calls 007c99d0 FUN_007c99d0
 * calls 005cb420 FUN_005cb420
 * calls 0078a2c0 FUN_0078a2c0
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00732f20 FUN_00732f20
 * calls 0078a750 FUN_0078a750
 * calls 005d06a0 FUN_005d06a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_007343c0(float *param_1,float param_2,undefined4 param_3,uint param_4)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST0;
  undefined1 local_40 [64];
  
  *(undefined1 *)((int)param_1 + 0x73) = (undefined1)param_4;
  param_1[0x1b] = param_2;
  param_2 = 0.0;
  FUN_0078a3a0(&param_2,DAT_009b15b4);
  uVar2 = FUN_0078a2c0();
  param_2 = 0.0;
  FUN_0078a3a0(&param_2,1);
  *(bool *)(param_1 + 0x1c) = param_2 != 0.0;
  fVar1 = _DAT_009b23ec;
  uVar4 = param_4 & 0xff;
  if ((param_4 & 1) != 0) {
    param_1[0x14] = 0.0;
    param_2 = fVar1 + fVar1;
    param_1[0x15] = 0.0;
    param_1[0x16] = 0.0;
    param_1[0x17] = 0.0;
    if ((*(char *)(param_1 + 0x1c) == '\0') || ((param_4 & 0x20) != 0)) {
      param_3 = 0;
      FUN_0078a3a0(&param_3,DAT_009b23e0);
      fVar5 = (float10)FUN_0078a750();
      fVar6 = (float10)_DAT_00890968;
      param_1[0x15] = (float)fVar5;
      if (fVar5 < fVar6) {
        fVar5 = -fVar5;
      }
      if (fVar5 < (float10)param_2) {
        param_1[0x15] = 0.0;
      }
    }
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_3 = 0;
    FUN_0078a3a0(&param_3,DAT_009b23e0);
    fVar5 = (float10)FUN_0078a750();
    fVar6 = (float10)_DAT_00890968;
    param_1[8] = (float)fVar5;
    if (fVar5 < fVar6) {
      fVar5 = -fVar5;
    }
    if (fVar5 < (float10)param_2) {
      param_1[8] = 0.0;
    }
    param_3 = 0;
    FUN_0078a3a0(&param_3,DAT_009b23e0);
    fVar5 = (float10)FUN_0078a750();
    fVar6 = (float10)_DAT_00890968;
    param_1[9] = (float)fVar5;
    if (fVar5 < fVar6) {
      fVar5 = -fVar5;
    }
    if (fVar5 < (float10)param_2) {
      param_1[9] = 0.0;
    }
    param_3 = 0;
    FUN_0078a3a0(&param_3,DAT_009b23e0);
    fVar5 = (float10)FUN_0078a750();
    fVar6 = (float10)_DAT_00890968;
    param_1[10] = (float)fVar5;
    if (fVar5 < fVar6) {
      fVar5 = -fVar5;
    }
    uVar4 = param_4 & 0xff;
    if (fVar5 < (float10)param_2) {
      param_1[10] = 0.0;
    }
  }
  if ((uVar4 & 2) != 0) {
    param_1[0x10] = 0.0;
    param_1[0x11] = 0.0;
    param_1[0x12] = 0.0;
    param_1[0x13] = 0.0;
    if ((*(char *)(param_1 + 0x1c) != '\0') || ((uVar4 & 0x20) != 0)) {
      param_2 = 0.0;
      FUN_0078a3a0(&param_2,DAT_009b252c);
      fVar6 = (float10)FUN_0078a750();
      param_1[0x10] = (float)fVar6;
      param_2 = 0.0;
      FUN_0078a3a0(&param_2,DAT_009b252c);
      fVar6 = (float10)FUN_0078a750();
      param_1[0x12] = (float)fVar6;
    }
    param_2 = 0.0;
    FUN_0078a3a0(&param_2,DAT_009b252c);
    fVar5 = (float10)FUN_0078a750();
    fVar6 = (float10)_DAT_00890968;
    param_1[0x11] = (float)fVar5;
    if (fVar5 < fVar6) {
      fVar5 = -fVar5;
    }
    if (fVar5 < (float10)_DAT_009b2538 + (float10)_DAT_009b2538) {
      param_1[0x11] = 0.0;
    }
    param_2 = _DAT_009b2008 + _DAT_009b2008;
    param_3 = 0;
    FUN_0078a3a0(&param_3,DAT_009b1ffc);
    fVar5 = (float10)FUN_0078a750();
    fVar6 = (float10)_DAT_00890968;
    param_1[4] = (float)fVar5;
    if (fVar5 < fVar6) {
      fVar5 = -fVar5;
    }
    if (fVar5 < (float10)param_2) {
      param_1[4] = 0.0;
    }
    param_3 = 0;
    FUN_0078a3a0(&param_3,DAT_009b1ffc);
    fVar5 = (float10)FUN_0078a750();
    fVar6 = (float10)_DAT_00890968;
    param_1[5] = (float)fVar5;
    if (fVar5 < fVar6) {
      fVar5 = -fVar5;
    }
    if (fVar5 < (float10)param_2) {
      param_1[5] = 0.0;
    }
    param_3 = 0;
    FUN_0078a3a0(&param_3,DAT_009b1ffc);
    fVar5 = (float10)FUN_0078a750();
    fVar6 = (float10)_DAT_00890968;
    param_1[6] = (float)fVar5;
    if (fVar5 < fVar6) {
      fVar5 = -fVar5;
    }
    uVar4 = param_4 & 0xff;
    if (fVar5 < (float10)param_2) {
      param_1[6] = 0.0;
    }
  }
  if ((uVar4 & 4) != 0) {
    if ((*(char *)(param_1 + 0x1c) == '\0') && ((uVar4 & 0x20) == 0)) {
      FUN_00732f20(&param_2,&DAT_009b2168);
      param_2 = param_2 - _DAT_008910f0;
      fVar6 = (float10)FUN_007c99d0((double)(param_2 + _DAT_008933d4));
      param_2 = (float)((float10)param_2 - fVar6);
      FUN_005cb420(local_40,param_2);
      FUN_005d06a0(local_40,param_1 + 0xc);
    }
    else {
      param_2 = 0.0;
      FUN_0078a3a0(&param_2,DAT_009b2148);
      fVar6 = (float10)FUN_0078a750();
      param_1[0xc] = (float)fVar6;
      param_2 = 0.0;
      FUN_0078a3a0(&param_2,DAT_009b2148);
      fVar6 = (float10)FUN_0078a750();
      param_1[0xd] = (float)fVar6;
      param_2 = 0.0;
      FUN_0078a3a0(&param_2,DAT_009b2148);
      fVar6 = (float10)FUN_0078a750();
      param_1[0xe] = (float)fVar6;
      param_2 = 0.0;
      FUN_0078a3a0(&param_2,DAT_009b2148);
      fVar6 = (float10)FUN_0078a750();
      param_1[0xf] = (float)fVar6;
    }
    param_2 = 0.0;
    FUN_0078a3a0(&param_2,DAT_009b1c18);
    fVar6 = (float10)FUN_0078a750();
    *param_1 = (float)fVar6;
    param_2 = 0.0;
    FUN_0078a3a0(&param_2,DAT_009b1d64);
    fVar6 = (float10)FUN_0078a750();
    param_1[1] = (float)fVar6;
    param_2 = 0.0;
    FUN_0078a3a0(&param_2,DAT_009b1eb0);
    FUN_0078a750();
    param_1[2] = (float)extraout_ST0;
    uVar4 = param_4 & 0xff;
  }
  if ((uVar4 & 8) != 0) {
    param_4 = 0;
    FUN_0078a3a0(&param_4,DAT_009b2148);
    fVar6 = (float10)FUN_0078a750();
    param_1[3] = (float)fVar6;
    param_4 = 0;
    FUN_0078a3a0(&param_4,DAT_009b2678);
    fVar6 = (float10)FUN_0078a750();
    param_1[0x18] = (float)fVar6;
    param_4 = 0;
    FUN_0078a3a0(&param_4,DAT_009b2678);
    fVar6 = (float10)FUN_0078a750();
    param_1[7] = (float)fVar6;
    param_4 = 0;
    FUN_0078a3a0(&param_4,DAT_009b2678);
    fVar6 = (float10)FUN_0078a750();
    param_1[0xb] = (float)fVar6;
    param_4 = 0;
    FUN_0078a3a0(&param_4,DAT_009b16f8);
    uVar3 = FUN_0078a2c0();
    *(undefined1 *)((int)param_1 + 0x72) = uVar3;
    param_4 = 0;
    FUN_0078a3a0(&param_4,1);
    *(bool *)((int)param_1 + 0x71) = param_4 != 0;
  }
  param_1[0x1a] = 0.0;
  param_1[0x19] = -1.0;
  return uVar2;
}

