/* speed.exe 00831820 FUN_00831820; analysis pseudocode, not buildable source.
 * calls 0083103a FUN_0083103a
 * calls 00831029 FUN_00831029
 * calls 008311ec FUN_008311ec
 */

undefined4 FUN_00831820(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00831029();
  uVar1 = FUN_008311ec(param_1);
  FUN_0083103a();
  return uVar1;
}

