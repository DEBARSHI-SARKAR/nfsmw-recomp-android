/* speed.exe 004692a0 FUN_004692a0; analysis pseudocode, not buildable source.
 * calls 0045dbf0 FUN_0045dbf0
 * calls 0045db30 FUN_0045db30
 */

float10 FUN_004692a0(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_0045db30(param_1);
  fVar2 = (float10)FUN_0045dbf0(param_1);
  return (float10)(float)fVar1 / fVar2;
}

