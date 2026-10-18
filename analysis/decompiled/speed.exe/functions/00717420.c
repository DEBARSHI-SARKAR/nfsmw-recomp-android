/* speed.exe 00717420 FUN_00717420; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 * calls 007018c0 FUN_007018c0
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_00717420(int param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar1 = DAT_00993cc8;
  if (DAT_00993cc8 != 0) {
    cVar2 = FUN_007018c0(*(undefined4 *)(DAT_00993cc8 + 0x1c8),&local_18,&local_14);
    if ((cVar2 == '\0') &&
       (cVar2 = FUN_007018c0(*(undefined4 *)(iVar1 + 0x1a8),&local_18,&local_14), cVar2 == '\0')) {
      FUN_007018c0(*(undefined4 *)(iVar1 + 0x1b0),&local_18,&local_14);
    }
    local_4 = *(int *)(iVar1 + 0x1c4);
    if (((local_4 == 0) && (local_4 = *(int *)(iVar1 + 0x1a4), local_4 == 0)) &&
       (local_4 = *(int *)(iVar1 + 0x1ac), local_4 == 0)) {
      bVar3 = FUN_0045da30(4);
      local_4 = 1 << (bVar3 & 0x1f);
    }
    local_10 = *(undefined4 *)(param_1 + 0xc);
    local_c = local_18;
    local_8 = local_14;
    FUN_00713b20(0x10,&local_10,&PTR_s_AnytimeEvents_DispBreakAway_00901e24,&DAT_0099264c,param_1);
  }
  return;
}

