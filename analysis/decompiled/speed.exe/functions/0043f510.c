/* speed.exe 0043f510 thunk_FUN_00438190; analysis pseudocode, not buildable source.
 */

/* WARNING: Removing unreachable block (ram,0x004381f0) */

void __fastcall thunk_FUN_00438190(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00868cbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00892b68;
  iVar1 = param_1[5];
  uStack_4 = 0;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[7] - iVar1 >> 5) << 5,0);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  ExceptionList = pvStack_c;
  return;
}

