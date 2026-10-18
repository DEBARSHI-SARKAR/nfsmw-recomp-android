/* speed.exe 005913b0 FUN_005913b0; analysis pseudocode, not buildable source.
 * calls 00591160 FUN_00591160
 */

undefined4 FUN_005913b0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_00591160(0xffffffff,param_1,0,0,0xff);
  return uVar1;
}

