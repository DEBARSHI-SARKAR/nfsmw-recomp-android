/* speed.exe 00837e90 FUN_00837e90; analysis pseudocode, not buildable source.
 * calls 00837590 FUN_00837590
 * calls 00836d40 FUN_00836d40
 */

undefined4 FUN_00837e90(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 local_4 [4];
  
  uVar1 = FUN_00836d40(param_2,1,local_4);
  if (0x7fffffff < uVar1) {
    uVar1 = FUN_00836d40(param_2,0,local_4);
    if ((int)uVar1 < 0) {
      return 0xffffffff;
    }
  }
  FUN_00837590(param_2,uVar1);
  return 0;
}

