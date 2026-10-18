/* speed.exe 0065a8e0 FUN_0065a8e0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00659ff0 FUN_00659ff0
 */

float10 __fastcall FUN_0065a8e0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float10 extraout_ST0;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00659ff0();
  }
  iVar2 = FUN_007c4b80();
  pfVar1 = (float *)(*(int *)(param_1 + 0x2c) + iVar2 * 4);
  iVar2 = FUN_007c4b80();
  return ((float10)pfVar1[1] - (float10)*pfVar1) * (extraout_ST0 - (float10)iVar2) +
         (float10)*pfVar1;
}

