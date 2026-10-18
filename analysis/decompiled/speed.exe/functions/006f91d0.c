/* speed.exe 006f91d0 FUN_006f91d0; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006f7c80 FUN_006f7c80
 * calls 006f8430 FUN_006f8430
 */

void __fastcall FUN_006f91d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087f21f;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x13;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b0d30;
  param_1[2] = &PTR_LAB_008b0d28;
  param_1[0xb] = &PTR_LAB_008b0d00;
  param_1[0xe] = &PTR_LAB_008b0ce4;
  *puVar1 = &PTR_LAB_008b0cd4;
  param_1[0x15] = &PTR_LAB_008b0c80;
  local_4 = 1;
  if (param_1[0x19] != 0) {
    param_1[9] = param_1[9] + -1;
    for (iVar2 = DAT_009885d0; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
      if (*(int *)(iVar2 + 0x20) == param_1[0x19]) goto LAB_006f9246;
    }
    iVar2 = 0;
LAB_006f9246:
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 0x10;
  }
  FUN_006f7c80();
  *puVar1 = &PTR_FUN_00890970;
  local_4 = local_4 & 0xffffff00;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006f8430();
  ExceptionList = local_c;
  return;
}

