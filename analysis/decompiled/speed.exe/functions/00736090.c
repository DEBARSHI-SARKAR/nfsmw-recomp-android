/* speed.exe 00736090 FUN_00736090; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00736090(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8 + param_2 * 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1144) != 1)) {
    *(undefined4 *)(iVar1 + 0x1144) = 1;
  }
  return;
}

