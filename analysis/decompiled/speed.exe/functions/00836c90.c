/* speed.exe 00836c90 FUN_00836c90; analysis pseudocode, not buildable source.
 * calls 00836b60 FUN_00836b60
 * calls 00847bd0 FUN_00847bd0
 * calls 00848200 FUN_00848200
 */

undefined4 FUN_00836c90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000100;
  int in_stack_0000021c;
  
  iVar1 = FUN_00848200(*(undefined4 *)(param_1 + 8),&stack0x00000124);
  if ((iVar1 != 0) && (in_stack_00000100 == in_stack_0000021c)) {
LAB_00836d23:
    uVar3 = FUN_00836b60(param_1,iVar1);
    return uVar3;
  }
  iVar2 = FUN_00847bd0(*(undefined4 *)(param_1 + 8),&stack0x00000124,FUN_00836a90,param_1,
                       *(undefined4 *)(param_1 + 0xb0));
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (iVar1 == 0) {
      iVar1 = FUN_00848200(*(undefined4 *)(param_1 + 8),&stack0x00000124);
      goto LAB_00836d23;
    }
  }
  else {
    *(int *)(param_1 + 0x10) = iVar2;
  }
  return 0;
}

