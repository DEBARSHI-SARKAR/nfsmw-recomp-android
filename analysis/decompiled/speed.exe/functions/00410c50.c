/* speed.exe 00410c50 FUN_00410c50; analysis pseudocode, not buildable source.
 * calls 0040b1b0 FUN_0040b1b0
 * calls 005cb5d0 FUN_005cb5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410c50(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_005cb5d0(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x28));
  FUN_0040b1b0(param_1,param_2,param_3 + 0x20,(float)(fVar1 * (float10)_DAT_00890510),param_4,
               *(undefined4 *)(param_5 + 4),param_6);
  return;
}

