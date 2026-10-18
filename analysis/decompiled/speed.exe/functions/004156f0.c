/* speed.exe 004156f0 FUN_004156f0; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 00778e50 FUN_00778e50
 * calls 007661d0 FUN_007661d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004156f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  float10 fVar5;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = (**(code **)(*param_1 + 0x48))();
  if (iVar2 == 0) {
    return (float10)0.0;
  }
  piVar3 = (int *)(**(code **)(*param_1 + 4))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x54))();
  pfVar4 = (float *)(**(code **)(*piVar3 + 0x20))();
  fVar5 = (float10)FUN_007661d0();
  if ((float10)_DAT_00890968 == fVar5) {
    iVar2 = (**(code **)(*param_1 + 100))();
    if (*(char *)(iVar2 + 0x2c) != '\0') {
      cVar1 = FUN_00778e50((float *)(iVar2 + 0x10),0x41f00000);
      if (cVar1 != '\0') {
        FUN_0040fe20(iVar2 + 0x20,&fStack_18);
        fVar5 = (float10)fStack_18 * (float10)(*(float *)(iVar2 + 0x10) - *pfVar4) +
                (float10)fStack_14 * (float10)(*(float *)(iVar2 + 0x14) - pfVar4[1]) +
                (float10)fStack_10 * (float10)(*(float *)(iVar2 + 0x18) - pfVar4[2]);
        if ((float10)_DAT_00890968 <= fVar5) {
          return fVar5;
        }
        return (float10)_DAT_00890968;
      }
    }
    return (float10)0.0;
  }
  FUN_0040fe20(iVar2 + 0xbc,&fStack_c);
  return (float10)fStack_c * (float10)(*(float *)(iVar2 + 0x98) - *pfVar4) +
         (float10)fStack_8 * (float10)(*(float *)(iVar2 + 0x9c) - pfVar4[1]) +
         (float10)fStack_4 * (float10)(*(float *)(iVar2 + 0xa0) - pfVar4[2]) + (float10)(float)fVar5
  ;
}

