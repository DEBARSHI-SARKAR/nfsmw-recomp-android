/* speed.exe 00496f80 FUN_00496f80; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00496f80(int param_1,int param_2)

{
  return (uint)*(byte *)(param_1 + 6) * 0x10 + 0x12 +
         (((1 << (*(byte *)(param_1 + 0x10) & 0x1f)) + 1) * (uint)*(byte *)(param_1 + 6) * 3 + 1 &
         0xfffffffe) * param_2 + param_1;
}

