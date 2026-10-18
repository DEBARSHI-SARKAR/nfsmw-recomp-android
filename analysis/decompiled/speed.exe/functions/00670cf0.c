/* speed.exe 00670cf0 FUN_00670cf0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006b7720 FUN_006b7720
 */

void __fastcall FUN_00670cf0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087a848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a98d0;
  param_1[2] = &PTR_LAB_008a98c4;
  param_1[0x12] = &PTR_LAB_008a9818;
  param_1[0x14] = &PTR_LAB_008a9770;
  param_1[0x16] = &PTR_LAB_008a9768;
  param_1[0x18] = &PTR_LAB_008a9730;
  param_1[0x19] = &PTR_FUN_008a972c;
  param_1[0x1a] = &PTR_LAB_008a971c;
  DAT_0092616c = DAT_0092616c + -1;
  local_4 = 0;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_006b7720();
  ExceptionList = local_c;
  return;
}

