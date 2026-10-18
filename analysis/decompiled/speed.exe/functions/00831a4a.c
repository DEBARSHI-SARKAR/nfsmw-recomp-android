/* speed.exe 00831a4a FUN_00831a4a; analysis pseudocode, not buildable source.
 * calls 0083103a FUN_0083103a
 * calls 00831029 FUN_00831029
 * calls 008316d0 FUN_008316d0
 */

undefined4 FUN_00831a4a(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_00831029();
  uVar1 = FUN_008316d0(param_1,param_2);
  FUN_0083103a();
  return uVar1;
}

