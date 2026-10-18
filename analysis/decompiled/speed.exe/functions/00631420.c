/* speed.exe 00631420 FUN_00631420; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 * calls 00542670 FUN_00542670
 * calls 00573020 FUN_00573020
 * calls 0056d720 FUN_0056d720
 * calls 00516b50 FUN_00516b50
 */

undefined4 * __thiscall FUN_00631420(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008783c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7b38;
  param_1[2] = param_2;
  cVar3 = FUN_00542670(0,1,0);
  puVar1 = DAT_00920390;
  if (cVar3 != '\0') {
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
    uVar4 = FUN_00573020((int)*(char *)(DAT_0091cf90 + 0xc));
    if ((int)param_1[2] < 0) {
      cVar3 = FUN_00516b50("SMS_Mailboxes.fng");
      if (cVar3 == '\0') {
        FUN_005257f0("SMS_Mailboxes.fng",0,uVar4,0);
        ExceptionList = local_c;
        return param_1;
      }
    }
    else {
      uVar5 = FUN_0056d720(param_1[2]);
      cVar3 = FUN_00516b50("SMS_Mailboxes.fng");
      if (cVar3 == '\0') {
        FUN_005257f0("SMS_Mailboxes.fng",uVar5,uVar4,0);
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

