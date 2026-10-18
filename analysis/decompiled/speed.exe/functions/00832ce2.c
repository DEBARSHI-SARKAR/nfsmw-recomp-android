/* speed.exe 00832ce2 FUN_00832ce2; analysis pseudocode, not buildable source.
 * calls 0083493f FUN_0083493f
 * calls 00832c64 FUN_00832c64
 */

undefined4 FUN_00832ce2(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < 8) {
    uVar1 = FUN_00832c64();
    FUN_0083493f(param_1);
  }
  return uVar1;
}

