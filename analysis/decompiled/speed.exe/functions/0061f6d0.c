/* speed.exe 0061f6d0 FUN_0061f6d0; analysis pseudocode, not buildable source.
 * calls 0061d820 FUN_0061d820
 * calls 0060cd30 FUN_0060cd30
 * calls 00455bc0 FUN_00455bc0
 */

undefined4 * __fastcall FUN_0061f6d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876a8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0060cd30();
  param_1[2] = iVar1;
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  local_4 = 0;
  uVar2 = FUN_00455bc0(0x5cea9d46);
  *param_1 = uVar2;
  FUN_0061d820();
  ExceptionList = local_c;
  return param_1;
}

