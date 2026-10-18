/* speed.exe 00459040 FUN_00459040; analysis pseudocode, not buildable source.
 * calls 00458d20 FUN_00458d20
 */

bool __thiscall FUN_00459040(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return false;
  }
  cVar1 = FUN_00458d20(param_2,param_3);
  return cVar1 != '\0';
}

