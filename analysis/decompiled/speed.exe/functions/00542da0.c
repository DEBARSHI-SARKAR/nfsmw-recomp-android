/* speed.exe 00542da0 FUN_00542da0; analysis pseudocode, not buildable source.
 * calls 00517b30 FUN_00517b30
 * calls 00526080 FUN_00526080
 * calls 0056bb20 FUN_0056bb20
 */

void __thiscall FUN_00542da0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00517b30(param_2);
  iVar1 = FUN_0056bb20();
  if ((iVar1 != 0) || (*(char *)(param_1 + 0x1c) != '\0')) {
    FUN_00526080(param_2,param_3);
  }
  return;
}

