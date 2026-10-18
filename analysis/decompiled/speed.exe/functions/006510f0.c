/* speed.exe 006510f0 FUN_006510f0; analysis pseudocode, not buildable source.
 * calls 00651040 FUN_00651040
 */

float * __thiscall FUN_006510f0(undefined4 *param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  
  pfVar1 = (float *)*param_1;
  if ((((pfVar1 != (float *)0x0) && (ABS(param_2 - *pfVar1) < pfVar1[4])) &&
      (ABS(param_3 - pfVar1[1]) < pfVar1[5])) && (ABS(param_4 - pfVar1[2]) < pfVar1[6])) {
    if (*(short *)((int)pfVar1 + 0xe) < 1) {
      return pfVar1;
    }
    pfVar1 = (float *)FUN_00651040(pfVar1,param_2,param_3,param_4);
    return pfVar1;
  }
  return (float *)0x0;
}

