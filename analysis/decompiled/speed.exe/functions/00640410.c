/* speed.exe 00640410 FUN_00640410; analysis pseudocode, not buildable source.
 * calls 004af1e0 FUN_004af1e0
 * calls 006dfaf0 FUN_006dfaf0
 * calls 005dbef0 FUN_005dbef0
 * calls 0073def0 FUN_0073def0
 * calls 004b9080 FUN_004b9080
 */

void __fastcall FUN_00640410(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008796d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a68e8;
  local_4 = 0;
  if (((DAT_0092d854 < 2) && (DAT_0092d884 != 0)) && (*DAT_0092d87c != 0)) {
    iVar1 = FUN_005dbef0();
    if (iVar1 == 2) {
      iVar1 = FUN_006dfaf0();
      if (iVar1 != 0) {
        FUN_0073def0(0);
      }
      if (DAT_00911fa8 != 0) {
        *(undefined1 *)(DAT_00911fa8 + 0xc) = 1;
        FUN_004af1e0(0,10);
        FUN_004b9080(0,1,"ECameraPhotoFinish");
      }
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

