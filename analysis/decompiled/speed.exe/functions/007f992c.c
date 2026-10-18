/* speed.exe 007f992c FUN_007f992c; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007f992c(float param_1)

{
  undefined4 uVar1;
  
  if ((param_1 <= _DAT_00890968) && (_DAT_00890968 <= param_1)) {
    return 0;
  }
  uVar1 = FUN_007c4b80();
  return uVar1;
}

