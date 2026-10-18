/* speed.exe 0069aaa0 FUN_0069aaa0; analysis pseudocode, not buildable source.
 * calls 006e8da0 FUN_006e8da0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069aaa0(int *param_1,float *param_2)

{
  int iVar1;
  float10 fVar2;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((*(byte *)(*(int *)param_1[6] + 0x1e) >> 3 & 1) != 0) {
    fVar2 = (float10)(**(code **)(*param_1 + 0x18))();
    fVar2 = (float10)_DAT_0089096c / fVar2;
    iVar1 = *param_1;
    fStack_c = (float)(fVar2 * (float10)*param_2);
    fStack_8 = (float)(fVar2 * (float10)param_2[1]);
    fStack_4 = (float)(fVar2 * (float10)param_2[2]);
    fVar2 = (float10)FUN_006e8da0();
    (**(code **)(iVar1 + 0x9c))(&fStack_c,(float)fVar2);
  }
  return;
}

