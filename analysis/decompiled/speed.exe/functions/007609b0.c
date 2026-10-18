/* speed.exe 007609b0 FUN_007609b0; analysis pseudocode, not buildable source.
 * calls 0075f5d0 FUN_0075f5d0
 * calls 007556c0 FUN_007556c0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00652ad0 _malloc
 */

void __thiscall FUN_007609b0(int param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881784;
  local_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 0x318);
  ExceptionList = &local_c;
  if (iVar3 != 0) {
    ExceptionList = &local_c;
    FUN_007556c0();
    thunk_FUN_007c7250(iVar3);
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(param_1 + 8);
    for (iVar3 = 0xc4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    pvVar1 = _malloc(0x17e0);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0075f5d0((undefined4 *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 0x318) = uVar2;
  }
  ExceptionList = local_c;
  return;
}

