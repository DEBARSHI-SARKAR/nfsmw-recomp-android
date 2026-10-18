/* speed.exe 0068bd60 FUN_0068bd60; analysis pseudocode, not buildable source.
 * calls 004872e0 FUN_004872e0
 * calls 00401ae0 FUN_00401ae0
 * calls 00487330 FUN_00487330
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068bd60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 0x84);
  *(undefined4 *)(param_4 + 0xbc) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_4 + 0xc0) = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(param_4 + 0xc4) = *(undefined4 *)(iVar1 + 0x28);
  piVar4 = (int *)(**(code **)(*(int *)(param_1 + 0x48) + 4))();
  cVar3 = (**(code **)(*piVar4 + 0x24))();
  if (cVar3 != '\0') {
    pfVar5 = (float *)(**(code **)(*(int *)(param_1 + 0x50) + 0x98))();
    fVar2 = -(*(float *)(param_3 + 0xc) * *pfVar5 +
             *(float *)(param_3 + 0x10) * pfVar5[1] + *(float *)(param_3 + 0x14) * pfVar5[2]);
    if (_DAT_008aac20 <= fVar2) {
      pfVar5 = (float *)(**(code **)(*(int *)(param_1 + 0x48) + 0x24))();
      fVar6 = (float10)FUN_00401ae0(-(*(float *)(param_3 + 0xc) * *pfVar5 +
                                     *(float *)(param_3 + 0x10) * pfVar5[1] +
                                     *(float *)(param_3 + 0x14) * pfVar5[2]),0,0x40a00000);
      fVar7 = (float10)FUN_00401ae0(fVar2,0xbf800000,0x3f800000);
      uStack_18 = *(undefined4 *)(param_4 + 0x80);
      uStack_10 = *(undefined4 *)(param_4 + 0x88);
      fStack_14 = (float)(((float10)_DAT_008aac1c * fVar7 * (float10)(float)fVar6 +
                          (float10)_DAT_0089096c) * (float10)*(float *)(param_4 + 0x84));
      *(float *)(param_4 + 0x10c) = (float)(fVar7 * (float10)(float)fVar6 * (float10)_DAT_00890968);
      FUN_004872e0(&uStack_18);
    }
    uStack_c = *(undefined4 *)(param_4 + 0x8c);
    uStack_4 = *(undefined4 *)(param_4 + 0x94);
    fStack_8 = *(float *)(param_4 + 0x90) * _DAT_00890968;
    FUN_00487330(&uStack_c);
    return;
  }
  uStack_c = *(undefined4 *)(param_4 + 0x8c);
  uStack_4 = *(undefined4 *)(param_4 + 0x94);
  fStack_8 = 0.0;
  FUN_00487330(&uStack_c);
  return;
}

