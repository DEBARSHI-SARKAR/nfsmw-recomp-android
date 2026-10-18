/* speed.exe 004526c0 FUN_004526c0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_004526c0(int param_1,int param_2)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(int *)(*(int *)(param_1 + 0x10) + 4 + param_2 * 4) != 0);
}

