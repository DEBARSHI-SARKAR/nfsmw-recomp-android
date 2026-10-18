/* speed.exe 00837cc0 FUN_00837cc0; analysis pseudocode, not buildable source.
 * calls 00848200 FUN_00848200
 * calls 00847b60 FUN_00847b60
 */

undefined4 FUN_00837cc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  iVar1 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    iVar1 = FUN_00848200(*(undefined4 *)(param_1 + 8),param_2);
    if ((iVar1 != 0) && (*(undefined4 **)(iVar1 + 0x100) != (undefined4 *)0x0)) {
      return **(undefined4 **)(iVar1 + 0x100);
    }
  }
  return 0;
}

