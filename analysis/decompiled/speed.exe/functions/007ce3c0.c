/* speed.exe 007ce3c0 FUN_007ce3c0; analysis pseudocode, not buildable source.
 */

unkbyte10 FUN_007ce3c0(void)

{
  float10 in_ST0;
  float10 fVar1;
  unkbyte10 Var2;
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  Var2 = fscale((float10)1 + fVar1,ROUND(in_ST0));
  return Var2;
}

