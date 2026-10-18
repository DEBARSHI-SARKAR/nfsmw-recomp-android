/* speed.exe 00691cb0 FUN_00691cb0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00691cb0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*(int *)(param_1 + -0x54) + 0x50))(*(undefined4 *)(param_1 + 300));
  return fVar1 * (float10)*(float *)(param_1 + 0x38) * (float10)*(float *)(param_1 + 300) *
         (float10)_DAT_008aae88 * (float10)_DAT_008a9390;
}

