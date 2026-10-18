/* speed.exe 0062f220 FUN_0062f220; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 * calls 00569bb0 FUN_00569bb0
 * calls 00542670 FUN_00542670
 * calls 00573020 FUN_00573020
 * calls 005102f0 FUN_005102f0
 * calls 00571eb0 FUN_00571eb0
 * calls 00516b50 FUN_00516b50
 * calls 00621e80 FUN_00621e80
 */

void __fastcall FUN_0062f220(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00877f97;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7110;
  local_4 = 0;
  if (param_1[2] == -1) {
    param_1[2] = 0;
  }
  if (param_1[3] != 1) {
    cVar1 = FUN_00542670(param_1[2],1,0);
    if (cVar1 == '\0') goto LAB_0062f343;
  }
  cVar1 = FUN_00516b50("Pause_Main.fng");
  if (cVar1 == '\0') {
    cVar1 = FUN_00569bb0();
    if (cVar1 != '\0') {
      iVar2 = DAT_00920390 + 0x10;
      bVar3 = DAT_00920390 != 0;
      local_4._0_1_ = 1;
      DAT_00920390 = iVar2;
      if (bVar3) {
        FUN_00621e80(0x14035fb);
      }
      local_4 = (uint)local_4._1_3_ << 8;
    }
    FUN_005102f0(param_1[2]);
    *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 0x10;
    FUN_00571eb0("Pause_Main.fng",0);
    *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) & 0xffffffef;
    FUN_00571eb0("Pause_Main.fng",0);
    iVar2 = FUN_00573020((int)*(char *)(param_1[2] + 0xc + DAT_0091cf90));
    if (iVar2 == 0) {
      iVar2 = 0xff;
    }
    FUN_005257f0("Pause_Main.fng",param_1[3],iVar2,0);
  }
LAB_0062f343:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

