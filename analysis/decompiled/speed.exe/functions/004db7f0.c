/* speed.exe 004db7f0 FUN_004db7f0; analysis pseudocode, not buildable source.
 * calls 0045ded0 FUN_0045ded0
 * calls 004021e0 FUN_004021e0
 * calls 0045dbf0 FUN_0045dbf0
 * calls 0045db30 FUN_0045db30
 * calls 0045ce40 FUN_0045ce40
 * calls 0045f340 FUN_0045f340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004db7f0(int param_1,undefined4 *param_2,float param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  float10 fVar11;
  
  fVar5 = _DAT_00897d78;
  if ((*(char *)(param_1 + 0x29) != '\x01') && (_DAT_00897de4 <= param_3)) {
    *(float *)(param_1 + 0xf8) = param_3;
    if (fVar5 < param_3) {
      *(undefined4 *)(param_1 + 0xf8) = 0x428c0000;
    }
    if (*(float *)(param_1 + 0xf8) < _DAT_00897dd0) {
      *(undefined4 *)(param_1 + 0xf8) = 0x40000000;
    }
    *(undefined1 *)(param_1 + 0x29) = 1;
    uVar7 = FUN_0045ded0(*param_2,param_2[1]);
    iVar10 = uVar7 + 0x4001;
    if ((uVar7 & 0xffff) + 0x3fff < 0x10000) {
      iVar10 = uVar7 + 0x3fff;
    }
    if ((int)((uVar7 & 0xffff) - 0x3fff) < 0) {
      iVar8 = uVar7 - 0x4001;
    }
    else {
      iVar8 = uVar7 - 0x3fff;
    }
    fVar5 = *(float *)(*(int *)(param_1 + 0x18) + 0xa0);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x98);
    puVar1 = (undefined4 *)(param_1 + 0x50);
    *puVar1 = *(undefined4 *)(param_1 + 0x90);
    puVar2 = (undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0xa8);
    *puVar2 = *(undefined4 *)(param_1 + 0xa0);
    fVar11 = (float10)FUN_0045db30(iVar10);
    iVar6 = *(int *)(param_1 + 0x18);
    *(float *)(param_1 + 0x34) =
         (float)(fVar11 * (float10)fVar5 + (float10)*(float *)(iVar6 + 0x94));
    fVar11 = (float10)FUN_0045dbf0(iVar10);
    *(float *)(param_1 + 0x30) =
         (float)(fVar11 * (float10)fVar5 + (float10)*(float *)(iVar6 + 0x90));
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar6 + 0x98);
    fVar11 = (float10)FUN_0045db30(iVar8);
    iVar10 = *(int *)(param_1 + 0x18);
    *(float *)(param_1 + 0x44) =
         (float)(fVar11 * (float10)fVar5 + (float10)*(float *)(iVar10 + 0x94));
    fVar11 = (float10)FUN_0045dbf0(iVar8);
    *(float *)(param_1 + 0x40) =
         (float)(fVar11 * (float10)fVar5 + (float10)*(float *)(iVar10 + 0x90));
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar10 + 0x98);
    fVar11 = (float10)FUN_0045f340((float *)(param_1 + 0x30),puVar1);
    *(float *)(param_1 + 0xd0) = (float)(fVar11 + (float10)_DAT_0089096c);
    fVar11 = (float10)FUN_0045f340(param_1 + 0x40,puVar2);
    *(float *)(param_1 + 0xd4) = (float)(fVar11 + (float10)_DAT_0089096c);
    pfVar3 = (float *)(param_1 + 0xb0);
    FUN_004021e0(pfVar3,param_1 + 0x30,puVar1);
    pfVar4 = (float *)(param_1 + 0xc0);
    FUN_004021e0(pfVar4,param_1 + 0x40,puVar2);
    fVar5 = _DAT_0089096c / *(float *)(param_1 + 0xf8);
    *(float *)(param_1 + 0xdc) = fVar5 * *(float *)(param_1 + 0xd0) * _DAT_00894200;
    fVar5 = fVar5 * *(float *)(param_1 + 0xd4) * _DAT_00894200;
    *(float *)(param_1 + 0xd8) = fVar5;
    fVar5 = _DAT_0089096c / fVar5;
    *pfVar3 = fVar5 * *pfVar3;
    *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) * fVar5;
    *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) * fVar5;
    fVar5 = _DAT_0089096c / *(float *)(param_1 + 0xdc);
    *pfVar4 = fVar5 * *pfVar4;
    *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) * fVar5;
    *(float *)(param_1 + 200) = *(float *)(param_1 + 200) * fVar5;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    uVar9 = FUN_0045ce40();
    *(undefined1 *)(param_1 + 0xe0) = 0;
    *(undefined1 *)(param_1 + 0xe1) = 0;
    *(undefined4 *)(param_1 + 0xf0) = uVar9;
  }
  return;
}

