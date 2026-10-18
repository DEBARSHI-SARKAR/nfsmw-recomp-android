/* speed.exe 00830cf0 FUN_00830cf0; analysis pseudocode, not buildable source.
 * calls 00830c90 FUN_00830c90
 */

undefined4 FUN_00830cf0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0xfffffff8;
  if (DAT_009c29a8 != (int *)0x0) {
    uVar2 = (**(code **)(*DAT_009c29a8 + 0x30))();
    (**(code **)(*DAT_009c29a8 + 0x2c))(0);
    uVar1 = FUN_00830c90(param_1,param_2);
    (**(code **)(*DAT_009c29a8 + 0x2c))(uVar2);
  }
  return uVar1;
}

