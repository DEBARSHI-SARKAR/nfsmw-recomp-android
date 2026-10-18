/* speed.exe 004f5bc0 FUN_004f5bc0; analysis pseudocode, not buildable source.
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 * calls 004ca430 FUN_004ca430
 */

void __fastcall FUN_004f5bc0(undefined4 *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d6b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00899500;
  piVar1 = (int *)param_1[10];
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  *param_1 = &PTR_FUN_008983e8;
  local_4 = 1;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

