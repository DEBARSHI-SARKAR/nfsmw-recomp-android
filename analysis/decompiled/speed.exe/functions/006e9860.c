/* speed.exe 006e9860 FUN_006e9860; analysis pseudocode, not buildable source.
 * calls 005fdda0 FUN_005fdda0
 */

void __thiscall FUN_006e9860(int param_1,char param_2)

{
  if ((param_2 != '\0') && (*(char *)(param_1 + 9) == '\0')) {
    FUN_005fdda0(4);
  }
  *(char *)(param_1 + 9) = param_2;
  return;
}

