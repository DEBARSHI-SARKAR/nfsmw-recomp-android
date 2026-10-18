/* speed.exe 004068b0 FUN_004068b0; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 * calls 00452880 FUN_00452880
 * calls 00402e80 thunk_FUN_0045a430
 */

int __thiscall FUN_004068b0(int param_1,byte param_2)

{
  thunk_FUN_0045a430();
  if ((param_2 & 1) != 0) {
    FUN_00452880(0x14,0);
    if (param_1 != 0) {
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1,0x14,0);
    }
  }
  return param_1;
}

