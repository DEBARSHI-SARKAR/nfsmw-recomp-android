/* speed.exe 007fab0e FUN_007fab0e; analysis pseudocode, not buildable source.
 */

int FUN_007fab0e(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((longlong)param_1 * (longlong)param_2);
  return (uVar1 >> 0x10) +
         (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20) * 0x10000 +
         (uint)((uVar1 >> 0xf & 1) != 0);
}

