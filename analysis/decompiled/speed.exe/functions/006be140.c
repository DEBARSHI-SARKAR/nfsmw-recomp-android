/* speed.exe 006be140 FUN_006be140; analysis pseudocode, not buildable source.
 * calls 0045ed30 FUN_0045ed30
 */

int FUN_006be140(int param_1,undefined4 param_2)

{
  FUN_0045ed30(param_1,param_2);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

