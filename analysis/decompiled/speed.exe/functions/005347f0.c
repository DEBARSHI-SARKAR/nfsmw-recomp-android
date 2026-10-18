/* speed.exe 005347f0 FUN_005347f0; analysis pseudocode, not buildable source.
 * calls 0052c360 FUN_0052c360
 * calls 00573140 FUN_00573140
 * calls 005868e0 FUN_005868e0
 * calls 00652ac0 _malloc
 * calls 0056bc10 FUN_0056bc10
 * calls 005a8d10 FUN_005a8d10
 * calls 0051dcf0 FUN_0051dcf0
 * calls 0059b710 FUN_0059b710
 * calls 00586760 FUN_00586760
 */

void __fastcall FUN_005347f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f8b1;
  local_c = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_c;
  do {
    puVar2 = _malloc(0x1c);
    if (iVar4 == 10) {
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
        uRam00000014 = 0;
      }
      else {
        puVar1 = puVar2 + 3;
        *puVar2 = &PTR_FUN_0089d344;
        *puVar1 = puVar1;
        puVar2[4] = puVar1;
        local_4 = 1;
        *(undefined1 *)(puVar2 + 5) = 1;
        FUN_0051dcf0(&DAT_00890978,0);
        *puVar2 = &PTR_FUN_0089dbc4;
        puVar2[6] = 10;
        *(undefined1 *)(puVar2 + 5) = 0;
      }
    }
    else {
      local_4 = 2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = FUN_00573140("ON_CNTRY_%s",&DAT_00899f78 + iVar4 * 3);
        uVar3 = FUN_0056bc10(uVar3);
        FUN_0052c360(uVar3,0);
        *puVar2 = &PTR_FUN_0089dbc4;
        puVar2[6] = iVar4;
      }
    }
    local_4 = 0xffffffff;
    FUN_005868e0(puVar2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xf1);
  if (*(int *)(DAT_0091ca68 + 0x13c) < 1) {
    FUN_0059b710(1);
  }
  else {
    FUN_005a8d10(*(int *)(DAT_0091ca68 + 0x13c));
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00586760(0x249db7b7);
  }
  ExceptionList = local_c;
  return;
}

