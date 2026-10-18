/* speed.exe 0082ad20 FUN_0082ad20; analysis pseudocode, not buildable source.
 * calls 008294a0 FUN_008294a0
 * calls 00829480 FUN_00829480
 * calls 0082221f FUN_0082221f
 * calls 008221d3 FUN_008221d3
 */

undefined4 __thiscall FUN_0082ad20(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_2);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) != -1)) && (param_3 == 7)) {
    uVar2 = FUN_0082221f(*(int *)(iVar1 + 0x1c));
    iVar3 = FUN_00829480(uVar2);
    if (iVar3 != 0) {
      FUN_008221d3(iVar3,*(undefined4 *)(iVar1 + 0x1c));
      FUN_008294a0(*(undefined4 *)(iVar1 + 0x20));
      *(int *)(iVar1 + 0x20) = iVar3;
      return 0;
    }
    return 0xfffffff8;
  }
  return 0xfffffff8;
}

