/* speed.exe 00752f00 FUN_00752f00; analysis pseudocode, not buildable source.
 * calls 00466340 FUN_00466340
 * calls 00748820 FUN_00748820
 * calls 007482d0 FUN_007482d0
 */

void __thiscall FUN_00752f00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880ecb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_00748820(param_2);
  if (piVar2 == (int *)0x0) {
    iVar3 = FUN_00466340(DAT_009b0a00);
    local_4 = 0;
    if (iVar3 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_007482d0(param_2,param_3);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x34);
    *puVar1 = piVar2;
    *(int **)(param_1 + 0x34) = piVar2;
    piVar2[1] = (int)puVar1;
    *piVar2 = param_1 + 0x30;
  }
  *(short *)(piVar2 + 3) = (short)piVar2[3] + 1;
  ExceptionList = local_c;
  return;
}

