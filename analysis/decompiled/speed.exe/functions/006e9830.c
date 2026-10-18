/* speed.exe 006e9830 FUN_006e9830; analysis pseudocode, not buildable source.
 * calls 005fdda0 FUN_005fdda0
 */

void __thiscall FUN_006e9830(int param_1,char param_2)

{
  if ((param_2 != '\0') && (*(char *)(param_1 + 8) == '\0')) {
    FUN_005fdda0(1);
  }
  *(char *)(param_1 + 8) = param_2;
  return;
}

