/* speed.exe 00643d50 FUN_00643d50; analysis pseudocode, not buildable source.
 * calls 00640f00 FUN_00640f00
 */

void __fastcall FUN_00643d50(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879c27;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7b20;
  iVar1 = DAT_00920390 + 0x30;
  bVar2 = DAT_00920390 != 0;
  local_4 = 1;
  DAT_00920390 = iVar1;
  if (bVar2) {
    FUN_00640f00(0,param_1[2],"Intro",0,0,&DAT_00890978,&DAT_00890978);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

