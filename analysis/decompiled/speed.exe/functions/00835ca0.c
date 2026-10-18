/* speed.exe 00835ca0 FUN_00835ca0; analysis pseudocode, not buildable source.
 * calls 008414b0 FUN_008414b0
 * calls 008412c0 FUN_008412c0
 */

int FUN_00835ca0(undefined4 *param_1,int param_2)

{
  if (param_2 == param_1[param_1[0x16] + 6]) {
    if (param_1[0x17] == 1) {
      if (param_1[param_1[0x16] + 6] == 1) {
        FUN_008412c0(*param_1,0);
        param_1[0x17] = 0;
        return param_1[0x17];
      }
      FUN_008414b0(*param_1,param_1[0x1b]);
      param_1[0x17] = 0;
    }
    param_2 = param_1[0x17];
  }
  return param_2;
}

