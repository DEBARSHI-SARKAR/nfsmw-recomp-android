/* speed.exe 004e0ff0 FUN_004e0ff0; analysis pseudocode, not buildable source.
 */

int FUN_004e0ff0(float param_1)

{
  return (int)ROUND(param_1) - ((int)((float)(int)ROUND(param_1) - param_1) >> 0x1f);
}

