/* speed.exe 004b9390 FUN_004b9390; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 */

void __fastcall FUN_004b9390(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b716;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_00896f80;
  local_4 = 0;
  local_14 = 4;
  piVar2 = param_1;
  do {
    piVar3 = piVar2 + 1;
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_00831782();
      }
      FUN_00831682(piVar1);
    }
    piVar1 = (int *)*piVar3;
    piVar2[5] = 0;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_00831782();
      }
      FUN_00831682(piVar1);
    }
    *piVar3 = 0;
    local_14 = local_14 + -1;
    piVar2 = piVar3;
  } while (local_14 != 0);
  piVar2 = (int *)param_1[10];
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar2);
  }
  param_1[10] = 0;
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(param_1 + 0x11,0x1c,6,FUN_004b02a0);
  ExceptionList = local_c;
  return;
}

