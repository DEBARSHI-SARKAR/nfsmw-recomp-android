/* speed.exe 0082aee0 FUN_0082aee0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0082aee0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 0) {
    return -0x2b;
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *param_2 = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0x104) = 0;
  return iVar1;
}

