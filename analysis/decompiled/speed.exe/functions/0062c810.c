/* speed.exe 0062c810 FUN_0062c810; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 00514ae0 FUN_00514ae0
 * calls 00514a70 FUN_00514a70
 * calls 00524a10 FUN_00524a10
 * calls 00516b50 FUN_00516b50
 * calls 004b9080 FUN_004b9080
 */

void __fastcall FUN_0062c810(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877ac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6c34;
  local_4 = 0;
  cVar4 = FUN_00516b50("FadeScreen.fng");
  if (cVar4 == '\0') goto LAB_0062c8c7;
  cVar4 = FUN_00524a10("FadeScreen.fng",0x27ff2dc,0xd42290dd);
  if ((cVar4 == '\0') || (param_1[2] != 0x16a259)) {
    iVar1 = param_1[2];
    if ((iVar1 != 0x14035fb) && ((iVar1 != 0x161a918 && (iVar1 != 0x1767f7e)))) goto LAB_0062c8c7;
    cVar4 = FUN_00524a10("FadeScreen.fng",0x27ff2dc,0x5079c8f8);
    if (cVar4 == '\0') goto LAB_0062c8c7;
    uVar5 = param_1[2];
  }
  else {
    uVar5 = 0x16a259;
  }
  FUN_00524920("FadeScreen.fng",0x27ff2dc,uVar5,1);
LAB_0062c8c7:
  if (DAT_00925e90 == 3) {
    cVar4 = FUN_00514ae0(4);
    if (cVar4 == '\0') {
      FUN_00514a70(4,1);
    }
  }
  puVar2 = DAT_00920390;
  puVar3 = DAT_00920390 + 4;
  if (DAT_00920390 != (undefined4 *)0x0) {
    puVar3 = DAT_00920390 + 1;
    DAT_00920390 = DAT_00920390 + 4;
    *puVar3 = 0x10;
    *puVar2 = &PTR_LAB_008a7590;
    puVar2[2] = 0xb;
    *(undefined1 *)(puVar2 + 3) = 0;
    puVar3 = DAT_00920390;
  }
  DAT_00920390 = puVar3;
  FUN_004b9080(0,0xe,"EFadeScreenOff");
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

