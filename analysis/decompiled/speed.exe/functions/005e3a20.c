/* speed.exe 005e3a20 FUN_005e3a20; analysis pseudocode, not buildable source.
 * calls 00452880 FUN_00452880
 * calls 00659260 FUN_00659260
 * calls 005d94d0 FUN_005d94d0
 */

void __fastcall FUN_005e3a20(undefined4 *param_1)

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
  return;
}

