/* speed.exe 007e9f70 FUN_007e9f70; analysis pseudocode, not buildable source.
 * calls 007e9ef0 FUN_007e9ef0
 * calls 007e9d50 FUN_007e9d50
 */

void __thiscall FUN_007e9f70(uint *param_1,int param_2)

{
  int iVar1;
  
  FUN_007e9ef0(param_2);
  *(undefined1 *)param_1 = *(undefined1 *)(param_2 + 0x54);
  param_1[6] = (uint)*(ushort *)(param_2 + 0x5c);
  param_1[7] = 1;
  *param_1 = ((*(int *)(param_2 + 0x58) != 1) - 1 & 0x4000) << 8 | *param_1 & 0xebfff00 |
             *param_1 & 0xff;
  iVar1 = FUN_007e9d50(param_2);
  if (param_1 + 8 == (uint *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  param_1[2] = (int)(param_1 + 8) - (int)param_1;
  param_1[3] = iVar1 - 0x20;
  return;
}

