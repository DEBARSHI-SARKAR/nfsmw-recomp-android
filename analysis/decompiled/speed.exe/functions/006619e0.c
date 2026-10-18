/* speed.exe 006619e0 FUN_006619e0; analysis pseudocode, not buildable source.
 * calls 00626d30 FUN_00626d30
 * calls 0065fe90 FUN_0065fe90
 */

float10 FUN_006619e0(float param_1,undefined4 param_2)

{
  float10 fVar1;
  
  if (DAT_009258d4 == 0) {
    fVar1 = (float10)param_1;
  }
  else {
    fVar1 = (float10)FUN_00626d30(param_2);
    param_1 = (float)fVar1;
  }
  if (DAT_009258d8 != 0) {
    FUN_0065fe90((float)fVar1,0x20,param_2);
    fVar1 = (float10)param_1;
  }
  return fVar1;
}

