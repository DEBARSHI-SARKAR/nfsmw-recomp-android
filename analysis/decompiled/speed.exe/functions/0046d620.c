/* speed.exe 0046d620 FUN_0046d620; analysis pseudocode, not buildable source.
 * calls 0045ded0 FUN_0045ded0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046d620(float param_1,float param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = FUN_0045ded0(param_1,0x417f5c2a);
  sVar2 = FUN_0045ded0(param_2 * _DAT_00890dc4 + param_1,0x417f5c2a);
  return ((float10)(int)(short)(sVar2 << 1) - (float10)(int)(short)(sVar1 << 1)) *
         (float10)_DAT_00890fc8;
}

