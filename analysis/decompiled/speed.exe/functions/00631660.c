/* speed.exe 00631660 FUN_00631660; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_00631660(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878428;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a7560;
  local_4 = 0;
  (**(code **)(*(int *)param_1[2] + 0x20))();
  piVar1 = (int *)FUN_005d59f0(&LAB_00565660);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(param_1[2],param_1[3]);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = pvStack_c;
  return;
}

