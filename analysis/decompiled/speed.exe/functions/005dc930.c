/* speed.exe 005dc930 FUN_005dc930; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_005dc930(uint *param_1,uint param_2)

{
  if (param_2 < *param_1) {
    return param_1[3] + param_2 * 0x14;
  }
  return param_1[(param_2 - *param_1) + 4];
}

