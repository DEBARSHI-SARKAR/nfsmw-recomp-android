/* speed.exe 0078a220 FUN_0078a220; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 */

void __thiscall FUN_0078a220(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  FUN_00460c70(param_1,param_2);
  iVar1 = 0;
  *(int *)(param_1 + 0x130) = param_3;
  *(int *)(param_1 + 0x134) = param_4;
  *(undefined4 *)(param_1 + 300) = 0;
  if (param_4 - param_3 != -1) {
    do {
      iVar1 = iVar1 + 1;
    } while ((uint)(1 << ((byte)iVar1 & 0x1f)) < (param_4 - param_3) + 1U);
    *(int *)(param_1 + 300) = iVar1;
  }
  *(int *)(param_1 + 0x138) = param_4 + 1;
  *(int *)(param_1 + 0x13c) = param_3 + -1;
  *(undefined1 *)(param_1 + 0x140) = 1;
  return;
}

