/* speed.exe 00670700 FUN_00670700; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00670700(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  float unaff_ESI;
  float10 fVar5;
  undefined4 unaff_retaddr;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  piVar3 = (int *)(**(code **)(*(int *)(param_1 + -0x80) + 0x54))();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x2c))();
  fStack_1c = (float)fVar5;
  (**(code **)(*piVar3 + 0x34))(&fStack_18);
  pfVar4 = (float *)(**(code **)(*piVar3 + 0x24))();
  fStack_10 = *pfVar4;
  fStack_c = pfVar4[1];
  fStack_8 = pfVar4[2];
  if (_DAT_00890dc4 < unaff_ESI) {
    FUN_0040fe20(&fStack_10,&fStack_10);
  }
  fVar1 = _DAT_0089096c;
  if ((unaff_ESI < _DAT_0089096c) && (fVar1 = unaff_ESI, unaff_ESI < _DAT_00890968)) {
    fVar1 = _DAT_00890968;
  }
  fVar2 = _DAT_0089096c - fVar1;
  fStack_1c = fStack_10 * fVar1 + fStack_1c * fVar2;
  fStack_18 = fStack_c * fVar1 + fStack_18 * fVar2;
  fStack_14 = fStack_8 * fVar1 + fStack_14 * fVar2;
  FUN_0040fe20(&fStack_1c,unaff_retaddr);
  return;
}

