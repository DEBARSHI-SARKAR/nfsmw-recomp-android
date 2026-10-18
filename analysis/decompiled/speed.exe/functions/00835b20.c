/* speed.exe 00835b20 FUN_00835b20; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00835b20(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x18 + *(int *)(param_1 + 0x58) * 4) == param_2) {
    return *(undefined4 *)(param_1 + 0x5c);
  }
  return 3;
}

