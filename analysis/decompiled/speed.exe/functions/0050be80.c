/* speed.exe 0050be80 FUN_0050be80; analysis pseudocode, not buildable source.
 * calls 0050b4a0 FUN_0050b4a0
 * calls 00508510 FUN_00508510
 */

void __thiscall FUN_0050be80(int param_1,undefined4 *param_2)

{
  undefined4 local_8;
  undefined4 *local_4;
  
  local_8 = *param_2;
  local_4 = param_2;
  FUN_00508510(&param_2,*(undefined4 *)(param_1 + 0x39c),*(undefined4 *)(param_1 + 0x3a0),&local_8,0
              );
  FUN_0050b4a0(param_2,1,&local_8);
  return;
}

