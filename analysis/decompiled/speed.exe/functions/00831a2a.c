/* speed.exe 00831a2a FUN_00831a2a; analysis pseudocode, not buildable source.
 * calls 0083103a FUN_0083103a
 * calls 00831696 FUN_00831696
 * calls 00831029 FUN_00831029
 */

undefined4 FUN_00831a2a(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_00831029();
  uVar1 = FUN_00831696(param_1,param_2);
  FUN_0083103a();
  return uVar1;
}

