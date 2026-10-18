/* speed.exe 0054e890 FUN_0054e890; analysis pseudocode, not buildable source.
 * calls 0054e760 FUN_0054e760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054e890(undefined4 param_1)

{
  char extraout_AL;
  undefined4 in_EAX;
  uint3 uVar1;
  uint3 extraout_var;
  
  uVar1 = (uint3)((uint)in_EAX >> 8);
  if (DAT_00987f71 != '\0') {
    FUN_0054e760((float)DAT_00987f54 - _DAT_00894b40,(float)DAT_00987f58 - _DAT_00894b38,param_1);
    uVar1 = extraout_var;
    if (extraout_AL != '\0') {
      return CONCAT31(extraout_var,1);
    }
  }
  return (uint)uVar1 << 8;
}

