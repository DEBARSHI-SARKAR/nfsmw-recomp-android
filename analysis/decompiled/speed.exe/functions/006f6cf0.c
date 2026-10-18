/* speed.exe 006f6cf0 FUN_006f6cf0; analysis pseudocode, not buildable source.
 * calls 006f0f80 FUN_006f0f80
 * calls 006f5ed0 FUN_006f5ed0
 * calls 006f59c0 FUN_006f59c0
 * calls 006f5ba0 FUN_006f5ba0
 * calls 005d59f0 FUN_005d59f0
 * calls 0045ce40 FUN_0045ce40
 * calls 00462430 FUN_00462430
 * calls 006f5d60 FUN_006f5d60
 * calls 006ed070 FUN_006ed070
 * calls 006f43c0 FUN_006f43c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006f6cf0(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float fStack_4;
  
  FUN_006f5d60();
  FUN_006f59c0();
  FUN_006f5ed0();
  FUN_006f5ba0();
  FUN_006f43c0();
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    piVar2 = (int *)FUN_005d59f0(&LAB_006e8280);
    if (piVar2 != (int *)0x0) {
      fVar5 = (float10)(**(code **)(*piVar2 + 4))
                                 (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x24));
      *(float *)(param_1 + 0x24) = (float)fVar5;
    }
    piVar2 = (int *)FUN_005d59f0(&LAB_006200e0);
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 4))(*(undefined4 *)(param_1 + 0x2c));
      if (iVar3 != *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x2c) = iVar3;
      }
      uVar4 = (**(code **)(*piVar2 + 8))();
      FUN_006f0f80(uVar4);
    }
  }
  iVar3 = DAT_00982b78;
  fVar1 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x1c) = fVar1;
  if ((*(int *)(param_1 + 0x2c) == 3) && (fVar1 < _DAT_008b01a4 == (fVar1 == _DAT_008b01a4))) {
    uVar4 = FUN_0045ce40();
    DAT_009885d8 = DAT_009885d8 + *(float *)(param_1 + 0x1c);
    DAT_009885d4 = DAT_009885d4 + 1;
    fStack_4 = 0.0;
    if (DAT_00988de8 != iVar3) {
      fStack_4 = DAT_00988dec;
      DAT_00988de8 = iVar3;
      DAT_00988dec = _DAT_00890968;
    }
    DAT_00988dec = DAT_00988dec + *(float *)(param_1 + 0x1c);
    FUN_006ed070(fStack_4);
    fVar5 = (float10)FUN_00462430(uVar4);
    _DAT_009885e4 = (float)(fVar5 + (float10)_DAT_009885e4);
    DAT_009885dc = DAT_009885dc + 1;
    return;
  }
  DAT_00988de8 = iVar3;
  DAT_00988dec = 0.0;
  return;
}

