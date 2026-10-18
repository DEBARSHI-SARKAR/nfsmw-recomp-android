/* speed.exe 00417ee0 FUN_00417ee0; analysis pseudocode, not buildable source.
 * calls 00409ce0 FUN_00409ce0
 * calls 00409c40 FUN_00409c40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00417ee0(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int extraout_ECX;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = *(float *)(param_1 + 0x48 + param_2 * 4);
  fVar3 = (float10)FUN_00409c40(*(undefined4 *)(*(int *)(param_1 + 100 + param_2 * 4) + 0xc));
  fVar2 = (float)fVar3;
  switch(*(undefined4 *)(extraout_ECX + 0x1c)) {
  case 0:
    return -((float10)fVar2 * (float10)fVar1 * (float10)param_3);
  case 1:
    return -((float10)fVar2 * (float10)fVar1 * (float10)param_3) /
           ((float10)fVar2 * (float10)fVar2 + (float10)*(float *)(extraout_ECX + 0x54));
  case 2:
    fVar3 = (float10)FUN_00409ce0(param_3);
    return -(fVar3 * (float10)fVar2 * (float10)fVar1);
  case 3:
    fVar3 = (float10)FUN_00409ce0(fVar2);
    return -(fVar3 * (float10)fVar1 * (float10)param_3);
  case 4:
    fVar3 = (float10)FUN_00409ce0(fVar2);
    fVar4 = (float10)FUN_00409ce0(param_3);
    return -(fVar4 * (float10)(float)fVar3 * (float10)fVar1);
  case 5:
    return -((float10)fVar1 * (float10)param_3 * (float10)param_4);
  default:
    return (float10)_DAT_00890968;
  }
}

