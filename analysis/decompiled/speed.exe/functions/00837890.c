/* speed.exe 00837890 FUN_00837890; analysis pseudocode, not buildable source.
 * calls 00848200 FUN_00848200
 * calls 00847b60 FUN_00847b60
 */

undefined4 FUN_00837890(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    iVar1 = FUN_00848200(*(undefined4 *)(param_1 + 8),param_2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x100) != 0)) {
      *(undefined2 *)(*(int *)(iVar1 + 0x100) + 6) = 0;
      return 0;
    }
  }
  return 0xfffffff8;
}

