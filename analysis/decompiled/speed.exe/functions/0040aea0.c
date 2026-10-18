/* speed.exe 0040aea0 FUN_0040aea0; analysis pseudocode, not buildable source.
 */

float10 __fastcall FUN_0040aea0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x80) + 0x10))();
  return fVar1 - (float10)*(float *)(param_1 + 0xac);
}

