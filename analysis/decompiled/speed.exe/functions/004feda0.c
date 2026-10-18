/* speed.exe 004feda0 FUN_004feda0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_004feda0(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0x10;
  iVar1 = 0;
  if (-1 < param_2) {
    do {
      if (iVar1 == param_2) {
        return -(uint)(*(short *)(param_1 + 10) != 0) & param_1 + 0x50U;
      }
      iVar1 = iVar1 + 1;
      param_1 = (uint)*(ushort *)(param_1 + 10) * 0x30 + param_1 + 0x50U;
    } while (iVar1 <= param_2);
  }
  return 0;
}

