/* speed.exe 00620930 FUN_00620930; analysis pseudocode, not buildable source.
 * calls 005184d0 FUN_005184d0
 */

void __fastcall FUN_00620930(undefined4 *param_1)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876bc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6820;
  local_4 = 0;
  cVar1 = FUN_005184d0(0);
  if (cVar1 != '\0') {
    *(undefined1 *)(DAT_0091cb20 + 0x1f) = 1;
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

