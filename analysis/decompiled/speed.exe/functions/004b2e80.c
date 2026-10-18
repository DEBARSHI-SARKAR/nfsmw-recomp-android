/* speed.exe 004b2e80 FUN_004b2e80; analysis pseudocode, not buildable source.
 */

int FUN_004b2e80(int *param_1,int param_2)

{
  if ((((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) &&
      (0 < param_2)) && (param_2 <= param_1[0xd])) {
    return param_1[0xc] + -0x10 + param_2 * 0x10;
  }
  return 0;
}

