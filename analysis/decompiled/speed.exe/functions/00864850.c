/* speed.exe 00864850 FUN_00864850; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00864850(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0x74696d65) {
    *(undefined4 *)(param_1 + 0x228) = param_3;
    return 0;
  }
  return 0xffffffff;
}

