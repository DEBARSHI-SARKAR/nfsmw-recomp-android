/* speed.exe 00821801 FUN_00821801; analysis pseudocode, not buildable source.
 */

void FUN_00821801(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0x68 + param_1 * 4) = param_2;
  *(undefined4 *)(param_3 + 0x80) = 1;
  return;
}

