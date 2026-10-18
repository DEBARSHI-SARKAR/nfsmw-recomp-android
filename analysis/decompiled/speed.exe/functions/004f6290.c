/* speed.exe 004f6290 FUN_004f6290; analysis pseudocode, not buildable source.
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 * calls 004ca430 FUN_004ca430
 */

void __fastcall FUN_004f6290(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d7b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00899704;
  local_4 = 0;
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
    param_1[0xc] = 0;
  }
  piVar1 = (int *)param_1[0xe];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
    param_1[0xe] = 0;
  }
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_008983e8;
  local_4 = 1;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = pvStack_c;
  return;
}

