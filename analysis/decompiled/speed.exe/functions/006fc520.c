/* speed.exe 006fc520 FUN_006fc520; analysis pseudocode, not buildable source.
 * calls 006fc060 FUN_006fc060
 */

void __thiscall FUN_006fc520(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    if (param_2 != 0) {
      FUN_006fc060();
      return;
    }
  }
  else if ((param_2 == 0) || (*(int *)(*(int *)(param_1 + 0x18) + 4) != *(int *)(param_2 + 4)))
  goto LAB_006fc543;
  *(undefined4 *)(param_1 + 0x18) = 0;
LAB_006fc543:
  FUN_006fc060();
  return;
}

