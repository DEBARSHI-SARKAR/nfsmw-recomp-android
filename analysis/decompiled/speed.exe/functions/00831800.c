/* speed.exe 00831800 FUN_00831800; analysis pseudocode, not buildable source.
 * calls 0083103a FUN_0083103a
 * calls 008311d4 FUN_008311d4
 * calls 00831029 FUN_00831029
 */

undefined4 FUN_00831800(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00831029();
  uVar1 = FUN_008311d4(param_1);
  FUN_0083103a();
  return uVar1;
}

