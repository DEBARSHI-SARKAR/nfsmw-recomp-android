/* speed.exe 007aa450 FUN_007aa450; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007aa450(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882ac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7580;
  local_4 = 0;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
  *param_1 = &PTR_FUN_0089c22c;
  ExceptionList = local_c;
  return;
}

