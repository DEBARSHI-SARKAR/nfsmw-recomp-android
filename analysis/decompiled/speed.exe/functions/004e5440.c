/* speed.exe 004e5440 FUN_004e5440; analysis pseudocode, not buildable source.
 * calls 004afec0 FUN_004afec0
 * calls 004d9250 FUN_004d9250
 */

void __fastcall FUN_004e5440(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086ce00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00898c28;
  local_4 = 0;
  if (param_1[0x11] != 0) {
    FUN_004afec0(0);
    (**(code **)(*(int *)param_1[0x11] + 4))();
    param_1[0x11] = 0;
  }
  *param_1 = &PTR_FUN_00898614;
  local_4 = 1;
  FUN_004d9250();
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = pvStack_c;
  return;
}

