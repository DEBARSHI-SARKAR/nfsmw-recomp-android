/* speed.exe 007647b0 FUN_007647b0; analysis pseudocode, not buildable source.
 */

ushort __thiscall FUN_007647b0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return *(ushort *)(param_1 + 10) >> 10 & 0xff01;
  }
  return *(ushort *)(param_1 + 10) >> 9 & 0xff01;
}

