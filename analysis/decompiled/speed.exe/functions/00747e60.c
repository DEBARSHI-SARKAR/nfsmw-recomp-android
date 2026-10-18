/* speed.exe 00747e60 FUN_00747e60; analysis pseudocode, not buildable source.
 * calls 0056bb20 FUN_0056bb20
 * calls 0045d9a0 FUN_0045d9a0
 */

int __thiscall FUN_00747e60(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &DAT_008ec4e0;
  }
  if (*(int *)(param_1 + 0x94) == 1) {
    iVar1 = FUN_0056bb20();
    return (iVar1 != 0) + 1;
  }
  if (*(char *)(param_1 + 0x59) == '\0') {
    return 0;
  }
  iVar1 = FUN_0045d9a0((int)*(char *)(param_1 + 0x59),param_2);
  return (int)*(char *)(iVar1 + 0xbc + param_1);
}

