/* speed.exe 004e1020 FUN_004e1020; analysis pseudocode, not buildable source.
 */

int FUN_004e1020(float param_1)

{
  return ((int)(param_1 - (float)(int)ROUND(param_1)) >> 0x1f) + (int)ROUND(param_1);
}

