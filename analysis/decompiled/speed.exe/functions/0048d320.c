/* speed.exe 0048d320 FUN_0048d320; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0048d320(int param_1,int param_2)

{
  return CONCAT31((int3)(param_2 >> 0xd),
                  (*(uint *)(param_1 + (param_2 >> 5) * 4) & 1 << ((byte)param_2 & 0x1f)) != 0);
}

