/* speed.exe 005d9430 FUN_005d9430; analysis pseudocode, not buildable source.
 * calls 00452880 FUN_00452880
 * calls 00659260 FUN_00659260
 */

void FUN_005d9430(int param_1,int param_2)

{
  FUN_00452880(param_2,0);
  if ((param_1 != 0) && (param_2 != 0)) {
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1,param_2,0);
  }
  return;
}

