/* speed.exe 0057e8c0 FUN_0057e8c0; analysis pseudocode, not buildable source.
 * calls 004611c0 FUN_004611c0
 * calls 005bcd20 FUN_005bcd20
 * calls 0056bfc0 FUN_0056bfc0
 */

undefined4 __thiscall FUN_0057e8c0(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_800 [2048];
  
  if (DAT_0091cf84 == 0) {
    FUN_004611c0(local_800,param_2);
  }
  else {
    FUN_0056bfc0(local_800,0x800,param_2);
  }
  FUN_005bcd20(local_800);
  return param_1;
}

