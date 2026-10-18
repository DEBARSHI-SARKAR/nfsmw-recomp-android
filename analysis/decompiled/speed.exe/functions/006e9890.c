/* speed.exe 006e9890 FUN_006e9890; analysis pseudocode, not buildable source.
 * calls 005fdda0 FUN_005fdda0
 */

void __thiscall FUN_006e9890(int param_1,char param_2)

{
  if ((param_2 != '\0') && (*(char *)(param_1 + 10) == '\0')) {
    FUN_005fdda0(2);
  }
  *(char *)(param_1 + 10) = param_2;
  return;
}

