/* speed.exe 006f9070 FUN_006f9070; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006f8db0 FUN_006f8db0
 */

void __fastcall FUN_006f9070(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087f1d8;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x23;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b0c70;
  param_1[2] = &PTR_LAB_008b0c68;
  param_1[0xb] = &PTR_LAB_008b0c40;
  param_1[0xe] = &PTR_LAB_008b0c24;
  param_1[0x13] = &PTR_LAB_008b0bd0;
  param_1[0x15] = &PTR_FUN_008b0bcc;
  *puVar1 = &PTR_LAB_008b0bbc;
  local_4 = 0;
  if (param_1[0x26] != 0) {
    param_1[9] = param_1[9] + -1;
    for (iVar2 = DAT_009885d0; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
      if (*(int *)(iVar2 + 0x20) == param_1[0x26]) goto LAB_006f90ee;
    }
    iVar2 = 0;
LAB_006f90ee:
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 0x10;
  }
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006f8db0();
  ExceptionList = local_c;
  return;
}

