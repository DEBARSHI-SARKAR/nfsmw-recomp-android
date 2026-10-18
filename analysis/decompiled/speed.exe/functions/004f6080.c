/* speed.exe 004f6080 FUN_004f6080; analysis pseudocode, not buildable source.
 * calls 004b02a0 FUN_004b02a0
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 * calls 004ca430 FUN_004ca430
 */

void __fastcall FUN_004f6080(undefined4 *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086d76b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00899698;
  piVar1 = (int *)param_1[10];
  local_4 = 1;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  piVar1 = (int *)param_1[0xb];
  param_1[10] = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  param_1[0xb] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_004b02a0();
  *param_1 = &PTR_FUN_008983e8;
  local_4 = 2;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

