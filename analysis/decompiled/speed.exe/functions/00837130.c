/* speed.exe 00837130 FUN_00837130; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00837130(int param_1,int param_2,undefined4 param_3)

{
  if ((*(int *)(param_1 + 0x58) != 0) && (param_2 != 0)) {
    return 0xfffffffb;
  }
  *(int *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  return 0;
}

