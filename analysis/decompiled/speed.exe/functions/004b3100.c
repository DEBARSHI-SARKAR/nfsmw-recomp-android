/* speed.exe 004b3100 FUN_004b3100; analysis pseudocode, not buildable source.
 */

int FUN_004b3100(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*(int *)*param_1 == 0x4d525453)) {
    return ((int *)*param_1)[0x11];
  }
  return 0;
}

