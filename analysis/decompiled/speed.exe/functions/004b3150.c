/* speed.exe 004b3150 FUN_004b3150; analysis pseudocode, not buildable source.
 */

int FUN_004b3150(int *param_1)

{
  if ((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) {
    return param_1[0x10] - param_1[0xe];
  }
  return 0;
}

