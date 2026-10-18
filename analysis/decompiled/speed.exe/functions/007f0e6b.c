/* speed.exe 007f0e6b FUN_007f0e6b; analysis pseudocode, not buildable source.
 */

uint FUN_007f0e6b(uint *param_1,int param_2)

{
  if (param_2 == 1) {
    return (uint)(byte)*param_1;
  }
  if (param_2 == 2) {
    return (uint)(ushort)*param_1;
  }
  if (param_2 == 3) {
    return *param_1 & 0xffffff;
  }
  if (param_2 == 4) {
    return *param_1;
  }
  return 0;
}

