/* speed.exe 005538e0 FUN_005538e0; analysis pseudocode, not buildable source.
 * calls 005496a0 FUN_005496a0
 * calls 00652ad0 _malloc
 */

void FUN_005538e0(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = PTR_s_MainMenu_fng_008f3284;
  puVar1 = PTR_s_OL_MAIN_fng_008f3280;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870a74;
  local_c = ExceptionList;
  DAT_009b4174 = 1;
  ExceptionList = &local_c;
  pvVar3 = _malloc(0x164);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    DAT_0091ca68 = 0;
  }
  else {
    DAT_0091ca68 = FUN_005496a0(param_1,puVar2,puVar1);
  }
  ExceptionList = local_c;
  return;
}

