/* speed.exe 00831a8a FUN_00831a8a; analysis pseudocode, not buildable source.
 * calls 0083103a FUN_0083103a
 * calls 00831714 FUN_00831714
 * calls 00831029 FUN_00831029
 */

undefined4 FUN_00831a8a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_00831029();
  uVar1 = FUN_00831714(param_1,param_2,param_3);
  FUN_0083103a();
  return uVar1;
}

