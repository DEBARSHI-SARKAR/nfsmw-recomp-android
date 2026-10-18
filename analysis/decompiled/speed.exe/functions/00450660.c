/* speed.exe 00450660 FUN_00450660; analysis pseudocode, not buildable source.
 * calls 0044b3a0 FUN_0044b3a0
 * calls 0044c060 FUN_0044c060
 * calls 0044efc0 FUN_0044efc0
 */

void __fastcall FUN_00450660(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869c8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0089389c;
  local_4 = 0;
  if (((DAT_0090d9ec == '\0') && (DAT_009260d8 == 0)) || (param_1[3] != 0)) {
    if (param_1[3] != 0) {
      FUN_0044b3a0();
      if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[3])(1);
      }
      param_1[3] = 0;
    }
    FUN_0044efc0(1,0);
  }
  local_4 = 0xffffffff;
  FUN_0044c060();
  ExceptionList = pvStack_c;
  return;
}

