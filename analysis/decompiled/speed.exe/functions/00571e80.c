/* speed.exe 00571e80 FUN_00571e80; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 * calls 00571e00 FUN_00571e00
 */

undefined1 FUN_00571e80(undefined4 param_1)

{
  int iVar1;
  
  FUN_005af1c0(param_1);
  iVar1 = FUN_00571e00();
  if (iVar1 != 0) {
    return *(undefined1 *)(iVar1 + 4);
  }
  return 0;
}

