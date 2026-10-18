/* speed.exe 00510ac0 FUN_00510ac0; analysis pseudocode, not buildable source.
 * calls 0056e560 FUN_0056e560
 * calls 00573140 FUN_00573140
 * calls 005af1c0 FUN_005af1c0
 */

void __fastcall FUN_00510ac0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0056e560("TRACK_MAP_",*(int *)(param_1 + 0xc));
    return;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00573140("TRACK_MAP_UNLOCK_%d",*(int *)(param_1 + 0x18));
    return;
  }
  FUN_005af1c0("TRACK_MAP");
  return;
}

