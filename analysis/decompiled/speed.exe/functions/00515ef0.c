/* speed.exe 00515ef0 FUN_00515ef0; analysis pseudocode, not buildable source.
 * calls 00591d90 FUN_00591d90
 * calls 00572070 FUN_00572070
 */

undefined4 FUN_00515ef0(undefined4 param_1)

{
  int iVar1;
  
  FUN_00572070(param_1);
  iVar1 = FUN_00591d90(param_1);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x8c);
  }
  return 0;
}

