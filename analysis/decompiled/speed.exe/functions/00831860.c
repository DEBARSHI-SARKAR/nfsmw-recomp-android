/* speed.exe 00831860 FUN_00831860; analysis pseudocode, not buildable source.
 * calls 0083103a FUN_0083103a
 * calls 00831029 FUN_00831029
 * calls 00831220 FUN_00831220
 */

undefined4 FUN_00831860(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00831029();
  uVar1 = FUN_00831220(param_1);
  FUN_0083103a();
  return uVar1;
}

