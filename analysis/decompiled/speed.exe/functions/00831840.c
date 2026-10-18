/* speed.exe 00831840 FUN_00831840; analysis pseudocode, not buildable source.
 * calls 0083103a FUN_0083103a
 * calls 00831208 FUN_00831208
 * calls 00831029 FUN_00831029
 */

undefined4 FUN_00831840(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00831029();
  uVar1 = FUN_00831208(param_1);
  FUN_0083103a();
  return uVar1;
}

