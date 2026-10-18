/* speed.exe 00414960 FUN_00414960; analysis pseudocode, not buildable source.
 * calls 00410220 FUN_00410220
 * calls 0077bba0 FUN_0077bba0
 * calls 00776600 FUN_00776600
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00414960(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar5 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  if (*(char *)(iVar5 + 0x2c0) != '\0') {
    return (float10)_DAT_00890968;
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  fStack_c = *(float *)(iVar5 + 0x98);
  fStack_8 = *(float *)(iVar5 + 0x9c);
  fStack_4 = *(float *)(iVar5 + 0xa0);
  pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0x48) + 0x20))();
  fVar1 = fStack_c - *pfVar6;
  fStack_8 = fStack_8 - pfVar6[1];
  fVar2 = fStack_4 - pfVar6[2];
  fStack_c = fVar1;
  fStack_4 = fVar2;
  fVar7 = (float10)FUN_005c5e80(fStack_8 * fStack_8 + fVar1 * fVar1 + fVar2 * fVar2);
  fStack_c = *(float *)(iVar5 + 0xbc);
  fStack_8 = *(float *)(iVar5 + 0xc0);
  fStack_4 = *(float *)(iVar5 + 0xc4);
  FUN_00410220(&fStack_c);
  fVar3 = fStack_4 * fStack_4 + fStack_c * fStack_c;
  fVar4 = fStack_c * fVar1 + fStack_4 * fVar2;
  fVar4 = fVar4 + fVar4;
  fVar1 = fVar4 * fVar4 -
          ((fVar1 * fVar1 + fVar2 * fVar2) - param_2 * param_2) * fVar3 * _DAT_00890e98;
  if (((_DAT_00890968 <= fVar1) && (_DAT_008910cc < fVar3 + fVar3)) &&
     (fVar1 = (SQRT(fVar1) - fVar4) / (fVar3 + fVar3), _DAT_00890968 < fVar1)) {
    FUN_0077bba0(fVar1,param_3,param_2);
  }
  FUN_00776600(1);
  return (float10)(float)fVar7;
}

