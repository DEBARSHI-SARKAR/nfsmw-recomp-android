/* speed.exe 0062b180 FUN_0062b180; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 * calls 0056bb20 FUN_0056bb20
 * calls 00542670 FUN_00542670
 * calls 0056d720 FUN_0056d720
 * calls 00573020 FUN_00573020
 * calls 00714410 FUN_00714410
 * calls 0071d860 FUN_0071d860
 * calls 00516b50 FUN_00516b50
 */

void __fastcall FUN_0062b180(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008778b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a691c;
  local_4 = 0;
  iVar4 = FUN_0056bb20();
  if ((((iVar4 == 5) || (iVar4 == 7)) || (iVar4 == 0xd)) || ((iVar4 == 0xc || (iVar4 == 6)))) {
    cVar3 = FUN_00542670(0,1,0);
    if (cVar3 != '\0') {
      iVar4 = FUN_0056d720(param_1[2]);
      if (iVar4 != 0) {
        *(undefined1 *)(iVar4 + 1) = 2;
      }
      puVar1 = DAT_00920390;
      puVar2 = DAT_00920390 + 4;
      if (DAT_00920390 != (undefined4 *)0x0) {
        puVar2 = DAT_00920390 + 1;
        DAT_00920390 = DAT_00920390 + 4;
        *puVar2 = 0x10;
        *puVar1 = &PTR_LAB_008a7590;
        puVar1[2] = 8;
        *(undefined1 *)(puVar1 + 3) = 1;
        puVar2 = DAT_00920390;
      }
      DAT_00920390 = puVar2;
      uVar5 = FUN_00573020((int)*(char *)(DAT_0091cf90 + 0xc));
      if ((int)param_1[2] < 0) {
        cVar3 = FUN_00516b50("SMS_Mailboxes.fng");
        if (cVar3 == '\0') {
          FUN_005257f0("SMS_Mailboxes.fng",0,uVar5,0);
        }
      }
      else {
        uVar6 = FUN_0056d720(param_1[2]);
        cVar3 = FUN_00516b50("SMS_Mailboxes.fng");
        if (cVar3 == '\0') {
          FUN_005257f0("SMS_Mailboxes.fng",uVar6,uVar5,0);
        }
      }
    }
  }
  else {
    FUN_0071d860(param_1[2]);
    FUN_00714410();
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

