/* speed.exe 004d5bd0 FUN_004d5bd0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004d5bd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  return SQRT((float10)*(float *)(iVar1 + 0x58) * (float10)*(float *)(iVar1 + 0x58) +
              (float10)*(float *)(iVar1 + 0x54) * (float10)*(float *)(iVar1 + 0x54) +
              (float10)*(float *)(iVar1 + 0x50) * (float10)*(float *)(iVar1 + 0x50)) *
         (float10)_DAT_008967e0;
}

