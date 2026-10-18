/* speed.exe 00432920 FUN_00432920; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00432920(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != param_2) {
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + -0x1c) + 0xc))(iVar1);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    (**(code **)(*(int *)(param_1 + -0x1c) + 8))(param_2);
    *(int *)(param_1 + 0x28) = param_2;
  }
  return;
}

