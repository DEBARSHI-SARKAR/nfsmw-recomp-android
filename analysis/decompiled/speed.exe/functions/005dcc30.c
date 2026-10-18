/* speed.exe 005dcc30 FUN_005dcc30; analysis pseudocode, not buildable source.
 * calls 00452880 FUN_00452880
 * calls 00659260 FUN_00659260
 * calls 005d94d0 FUN_005d94d0
 */

void __fastcall FUN_005dcc30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    FUN_005d94d0();
    FUN_00452880(0x14,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar1,0x14,0);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

