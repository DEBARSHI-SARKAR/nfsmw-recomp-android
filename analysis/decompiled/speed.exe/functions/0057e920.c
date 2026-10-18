/* speed.exe 0057e920 FUN_0057e920; analysis pseudocode, not buildable source.
 * calls 004611c0 FUN_004611c0
 * calls 0056bb80 FUN_0056bb80
 * calls 0056bfc0 FUN_0056bfc0
 */

undefined4 FUN_0057e920(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0056bb80();
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_0091cf84 == 0) {
    FUN_004611c0(param_1);
    return 1;
  }
  FUN_0056bfc0(param_1,param_2,iVar1);
  return 1;
}

