/* speed.exe 00605bd0 FUN_00605bd0; analysis pseudocode, not buildable source.
 * calls 00605950 FUN_00605950
 */

undefined4 FUN_00605bd0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 < 1) {
    puVar1 = (undefined4 *)FUN_00605950();
  }
  else {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + -8 + param_2 * 8);
    if (*(undefined4 **)(param_1 + 8) <= puVar1) {
      return 0xffffffff;
    }
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  return *puVar1;
}

