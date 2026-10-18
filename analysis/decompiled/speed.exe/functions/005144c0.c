/* speed.exe 005144c0 FUN_005144c0; analysis pseudocode, not buildable source.
 * calls 0078c730 FUN_0078c730
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00837090 FUN_00837090
 */

void __thiscall FUN_005144c0(int param_1,char param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0056c6e0(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    iVar1 = FUN_0078c730();
    if (*(int *)(iVar1 + 0xfc) == 1) {
      iVar1 = FUN_0078c730();
      if (*(int *)(iVar1 + 0xf8) != 0) {
        iVar1 = FUN_0078c730();
        FUN_00837090(*(undefined4 *)(iVar1 + 0xf8));
      }
    }
  }
  return;
}

