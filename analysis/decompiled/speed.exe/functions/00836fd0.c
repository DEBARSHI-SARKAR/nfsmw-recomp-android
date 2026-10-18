/* speed.exe 00836fd0 FUN_00836fd0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00836fd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    return 0xfffffffd;
  }
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  return 0;
}

