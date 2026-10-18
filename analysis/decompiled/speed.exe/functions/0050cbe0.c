/* speed.exe 0050cbe0 FUN_0050cbe0; analysis pseudocode, not buildable source.
 * calls 0050c7b0 FUN_0050c7b0
 * calls 00455fd0 FUN_00455fd0
 */

undefined4 FUN_0050cbe0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_008f86ec != '\0') {
    iVar1 = FUN_00455fd0(0xaba86e60,*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      uVar2 = FUN_0050c7b0(iVar1,param_2);
      return uVar2;
    }
  }
  return 0;
}

