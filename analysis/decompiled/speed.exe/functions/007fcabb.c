/* speed.exe 007fcabb FUN_007fcabb; analysis pseudocode, not buildable source.
 * calls 0085eaec FUN_0085eaec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007fcabb(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0085eaec();
  return fVar1 / (SQRT((float10)_DAT_008c3898) * (float10)param_1);
}

