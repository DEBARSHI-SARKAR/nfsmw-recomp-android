/* speed.exe 00789000 FUN_00789000; analysis pseudocode, not buildable source.
 * calls 0077a230 FUN_0077a230
 * calls 005d29d0 FUN_005d29d0
 */

undefined1 * __fastcall FUN_00789000(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088244f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  iVar1 = FUN_005d29d0(0xc,0);
  local_4 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0077a230();
    *(int *)(iVar1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x15) = 1;
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 8) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(int *)(param_1 + 8) = iVar1;
    ExceptionList = local_c;
    return param_1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return param_1;
}

