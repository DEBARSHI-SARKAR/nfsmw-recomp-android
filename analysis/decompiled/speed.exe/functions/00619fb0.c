/* speed.exe 00619fb0 FUN_00619fb0; analysis pseudocode, not buildable source.
 * calls 00619d50 FUN_00619d50
 * calls 0060d680 FUN_0060d680
 */

int __thiscall FUN_00619fb0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_008768d0;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  ExceptionList = &local_10;
  cVar1 = FUN_00619d50(iVar2);
  if (cVar1 != '\0') {
    local_8 = 0;
    uVar3 = FUN_0060d680(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(param_1 + 4),param_1,param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  ExceptionList = local_10;
  return param_1;
}

