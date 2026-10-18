/* speed.exe 00534de0 FUN_00534de0; analysis pseudocode, not buildable source.
 * calls 00589600 FUN_00589600
 * calls 00652ad0 _malloc
 * calls 0056bc10 FUN_0056bc10
 * calls 005af1c0 FUN_005af1c0
 * calls 005889f0 FUN_005889f0
 * calls 005252d0 FUN_005252d0
 * calls 005a5ea0 FUN_005a5ea0
 */

void __fastcall FUN_00534de0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f8f4;
  local_c = ExceptionList;
  iVar4 = DAT_0091ca68 + 0xfc;
  ExceptionList = &local_c;
  puVar2 = _malloc(0x18c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00589600(0x32,iVar4,4,1);
    *puVar2 = &PTR_FUN_0089c5f4;
  }
  local_4 = 0xffffffff;
  FUN_005889f0(puVar2);
  FUN_005a5ea0(1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_0056bc10(0x371b340f);
  uVar3 = FUN_005af1c0("info_text",uVar3);
  FUN_005252d0(uVar1,uVar3);
  ExceptionList = local_c;
  return;
}

