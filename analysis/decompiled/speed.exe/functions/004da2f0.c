/* speed.exe 004da2f0 FUN_004da2f0; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 007c4b80 FUN_007c4b80
 * calls 004ae980 FUN_004ae980
 * calls 008311aa FUN_008311aa
 * calls 004b02b0 FUN_004b02b0
 * calls 004d8720 FUN_004d8720
 * calls 004aecf0 FUN_004aecf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004da2f0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_stack_00000014;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c9db;
  local_c = ExceptionList;
  if (((*(char *)(param_1 + 8) != '\0') && (DAT_008f86f8 == 1)) && (*(int *)(param_1 + 0x38) == 0))
  {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 100) = 1;
    if (_DAT_00891050 < *(float *)(param_1 + 0x70)) {
      iVar2 = FUN_004aecf0(2);
      *(int *)(param_1 + 100) = iVar2 + 2;
    }
    uVar3 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    FUN_004ae980("SND: Turbo");
    iVar2 = FUN_00831667(0x1c);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar4 = FUN_007c4b80();
      uVar6 = 0;
      uVar3 = in_stack_00000014;
      uVar5 = FUN_007c4b80(0,in_stack_00000014,uVar4);
      uVar3 = FUN_004d8720(*(undefined4 *)(param_1 + 100),0,uVar5,uVar6,uVar3,uVar4);
    }
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    DAT_009142f0 = DAT_009142f0 + 1;
    local_4 = 0xffffffff;
    if (*(int **)(param_1 + 0x38) == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      in_stack_00000014 = 0;
      if (**(int **)(param_1 + 0x38) != 0) {
        FUN_008311aa(&stack0x00000014);
      }
      uVar1 = (undefined2)in_stack_00000014;
    }
    *(undefined2 *)(param_1 + 0x1c) = uVar1;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3c);
    FUN_004b02b0(0x3f800000,0x3f800000,1,0);
  }
  ExceptionList = local_c;
  return 0;
}

