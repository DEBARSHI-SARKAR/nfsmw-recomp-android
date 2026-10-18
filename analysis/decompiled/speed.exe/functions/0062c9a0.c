/* speed.exe 0062c9a0 FUN_0062c9a0; analysis pseudocode, not buildable source.
 * calls 00516990 FUN_00516990
 * calls 00516e10 FUN_00516e10
 * calls 00514ae0 FUN_00514ae0
 * calls 00524920 FUN_00524920
 * calls 00514a10 FUN_00514a10
 * calls 00524a10 FUN_00524a10
 * calls 00516b50 FUN_00516b50
 * calls 004b9080 FUN_004b9080
 * calls 0064a7a0 FUN_0064a7a0
 */

undefined4 * __thiscall FUN_0062c9a0(undefined4 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877b08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7abc;
  *(undefined1 *)(param_1 + 2) = param_2;
  FUN_0064a7a0(2);
  cVar3 = FUN_00516b50("FadeScreen.fng");
  if (cVar3 == '\0') {
    FUN_00516990("FadeScreen.fng",0x67);
  }
  if (DAT_00925e90 == 3) {
    cVar3 = FUN_00514ae0(4);
    if (cVar3 != '\0') {
      FUN_00514a10(4,1);
    }
  }
  puVar4 = (undefined1 *)FUN_00516e10();
  *puVar4 = 1;
  cVar3 = FUN_00524a10("FadeScreen.fng",0x27ff2dc,0x5079c8f8);
  if (cVar3 == '\0') {
    if (*(char *)(param_1 + 2) == '\0') {
      uVar5 = 0x5079c8f8;
    }
    else {
      uVar5 = 0xd42290dd;
    }
    FUN_00524920("FadeScreen.fng",0x27ff2dc,uVar5,1);
  }
  puVar1 = DAT_00920390;
  puVar2 = DAT_00920390 + 4;
  if (DAT_00920390 != (undefined4 *)0x0) {
    puVar2 = DAT_00920390 + 1;
    DAT_00920390 = DAT_00920390 + 4;
    *puVar2 = 0x10;
    *puVar1 = &PTR_LAB_008a7590;
    puVar1[2] = 0xb;
    *(undefined1 *)(puVar1 + 3) = 1;
    puVar2 = DAT_00920390;
  }
  DAT_00920390 = puVar2;
  FUN_004b9080(1,0xe,"EFadeScreenOn");
  ExceptionList = local_c;
  return param_1;
}

