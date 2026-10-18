/* speed.exe 004106d0 FUN_004106d0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_004106d0(int param_1)

{
  if ((*(char *)(param_1 + 0x55) != '\0') &&
     ((*(int *)(param_1 + 0x58) != 0 || (*(int *)(param_1 + 0x5c) != 0)))) {
    return param_1 + 0x164;
  }
  return param_1 + 0x98;
}

