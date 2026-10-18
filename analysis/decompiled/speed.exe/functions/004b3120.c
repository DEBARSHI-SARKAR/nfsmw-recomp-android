/* speed.exe 004b3120 FUN_004b3120; analysis pseudocode, not buildable source.
 */

uint FUN_004b3120(int *param_1)

{
  int *in_EAX;
  
  if ((param_1 == (int *)0x0) || (in_EAX = (int *)*param_1, *in_EAX != 0x4d525453)) {
    return (uint)in_EAX & 0xffffff00;
  }
  if ((in_EAX[0x11] == 0) && (param_1[2] == 0)) {
    return 1;
  }
  return 0;
}

