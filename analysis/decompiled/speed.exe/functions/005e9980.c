/* speed.exe 005e9980 FUN_005e9980; analysis pseudocode, not buildable source.
 * calls 005d94d0 FUN_005d94d0
 * calls 00659260 FUN_00659260
 * calls 00452880 FUN_00452880
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 * __thiscall FUN_005e9980(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  *param_1 = &PTR_FUN_008a39b8;
  if (iVar1 != 0) {
    FUN_005d94d0();
    FUN_00452880(0x14,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar1,0x14,0);
    param_1[2] = 0;
  }
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

