/* speed.exe 004ab8c0 FUN_004ab8c0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004ab8c0(int param_1)

{
  return SQRT((float10)*(float *)(param_1 + 0x58) * (float10)*(float *)(param_1 + 0x58) +
              (float10)*(float *)(param_1 + 0x54) * (float10)*(float *)(param_1 + 0x54) +
              (float10)*(float *)(param_1 + 0x50) * (float10)*(float *)(param_1 + 0x50)) *
         (float10)_DAT_008967e0;
}

