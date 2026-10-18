/* speed.exe 004574d0 FUN_004574d0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_004574d0(int param_1,ushort param_2)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 4) + 0x20) +
          (-(uint)((uint)param_2 < *(uint *)(*(int *)(param_1 + 4) + 0x18)) & (uint)param_2) * 4);
}

