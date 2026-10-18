/* speed.exe 005dcbf0 FUN_005dcbf0; analysis pseudocode, not buildable source.
 * calls 00452880 FUN_00452880
 * calls 00659260 FUN_00659260
 * calls 005d94d0 FUN_005d94d0
 */

int __thiscall FUN_005dcbf0(int param_1,byte param_2)

{
  FUN_005d94d0();
  if ((param_2 & 1) != 0) {
    FUN_00452880(0x14,0);
    if (param_1 != 0) {
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1,0x14,0);
    }
  }
  return param_1;
}

