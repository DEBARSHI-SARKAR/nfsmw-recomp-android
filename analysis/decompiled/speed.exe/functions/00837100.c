/* speed.exe 00837100 FUN_00837100; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00837100(int param_1,int param_2,undefined4 param_3)

{
  if ((*(int *)(param_1 + 0x24) != 0) && (param_2 != 0)) {
    return 0xfffffffb;
  }
  *(int *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return 0;
}

