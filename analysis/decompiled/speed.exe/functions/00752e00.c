/* speed.exe 00752e00 FUN_00752e00; analysis pseudocode, not buildable source.
 * calls 00466340 FUN_00466340
 * calls 00461970 FUN_00461970
 * calls 007487e0 FUN_007487e0
 */

void __thiscall FUN_00752e00(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880eab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_007487e0(param_2);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00466340(DAT_009b0a04);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      iVar3 = FUN_00461970(param_2);
      piVar2[2] = iVar3;
      piVar2[3] = 0;
      piVar2[4] = 0;
      *(undefined2 *)(piVar2 + 5) = 0;
      *(undefined1 *)((int)piVar2 + 0x16) = 0;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x2c);
    *puVar1 = piVar2;
    *(int **)(param_1 + 0x2c) = piVar2;
    piVar2[1] = (int)puVar1;
    *piVar2 = param_1 + 0x28;
  }
  *(short *)(piVar2 + 5) = (short)piVar2[5] + 1;
  ExceptionList = local_c;
  return;
}

