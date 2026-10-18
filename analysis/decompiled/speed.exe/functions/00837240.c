/* speed.exe 00837240 FUN_00837240; analysis pseudocode, not buildable source.
 */

uint FUN_00837240(int *param_1)

{
  if (param_1 != (int *)0x0) {
    return *(uint *)(*param_1 + 0xf8) >> 2 & 1;
  }
  return 0;
}

