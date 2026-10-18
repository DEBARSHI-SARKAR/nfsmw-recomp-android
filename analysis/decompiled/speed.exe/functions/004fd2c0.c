/* speed.exe 004fd2c0 FUN_004fd2c0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004fd2c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float10 extraout_ST0;
  
  if (param_3 == 0) {
    return (float10)_DAT_00890968;
  }
  if (param_3 == 2) {
    FUN_007c4b80();
  }
  iVar1 = FUN_007c4b80();
  return extraout_ST0 - (float10)iVar1;
}

