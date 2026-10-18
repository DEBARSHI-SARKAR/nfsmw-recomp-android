/* speed.exe 00665720 FUN_00665720; analysis pseudocode, not buildable source.
 * calls 006639c0 FUN_006639c0
 * calls 005d0370 FUN_005d0370
 * calls 00659260 FUN_00659260
 */

void __fastcall FUN_00665720(undefined4 *param_1)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087a3d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_006639c0(local_10,*(undefined4 *)param_1[5],(undefined4 *)param_1[5]);
  if (param_1[5] != 0) {
    FUN_005d0370(param_1[5],0x30,0);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  local_4 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(*param_1,param_1[1] << 4,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  param_1[2] = 0;
  param_1[3] = param_1[3] & 1;
  ExceptionList = local_c;
  return;
}

