/* speed.exe 008371a0 FUN_008371a0; analysis pseudocode, not buildable source.
 */

uint FUN_008371a0(int *param_1)

{
  return *(uint *)(*param_1 + 0xf8) >> 9 & 1;
}

