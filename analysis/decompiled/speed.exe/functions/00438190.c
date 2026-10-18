/* speed.exe 00438190 FUN_00438190; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

/* WARNING: Removing unreachable block (ram,0x004381f0) */

void __fastcall FUN_00438190(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00868cbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00892b68;
  iVar1 = param_1[5];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[7] - iVar1 >> 5) << 5,0);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  ExceptionList = local_c;
  return;
}

