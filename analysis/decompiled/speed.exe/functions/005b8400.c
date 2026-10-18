/* speed.exe 005b8400 FUN_005b8400; analysis pseudocode, not buildable source.
 * calls 005b7c30 FUN_005b7c30
 */

void __thiscall FUN_005b8400(int param_1,int param_2,char param_3)

{
  if ((param_3 != '\0') || (param_2 != *(int *)(param_1 + 0x54))) {
    *(int *)(param_1 + 0x54) = param_2;
    if (param_2 != 0) {
      FUN_005b7c30();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x10) = 0;
  }
  return;
}

