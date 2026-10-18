/* speed.exe 00625ad0 FUN_00625ad0; analysis pseudocode, not buildable source.
 * calls 00542670 FUN_00542670
 * calls 00573020 FUN_00573020
 * calls 00525940 FUN_00525940
 */

undefined4 * __fastcall FUN_00625ad0(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7730;
  cVar1 = FUN_00542670(0,1,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_00573020((int)*(char *)(DAT_0091cf90 + 0xc));
    FUN_00525940("WorldMapMain.fng",0,uVar2,0);
  }
  ExceptionList = local_c;
  return param_1;
}

