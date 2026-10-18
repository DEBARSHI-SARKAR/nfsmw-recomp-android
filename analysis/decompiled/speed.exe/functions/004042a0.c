/* speed.exe 004042a0 FUN_004042a0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_004042a0(byte *param_1,char param_2,char param_3)

{
  if (param_2 != param_3) {
    return (uint)*param_1 - (uint)param_1[1];
  }
  return (uint)param_1[1];
}

