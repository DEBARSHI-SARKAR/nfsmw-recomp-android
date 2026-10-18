/* speed.exe 0065b790 FUN_0065b790; analysis pseudocode, not buildable source.
 * calls 00650cb0 FUN_00650cb0
 */

int __fastcall FUN_0065b790(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_00650cb0();
  }
  return param_1 + 0x69;
}

