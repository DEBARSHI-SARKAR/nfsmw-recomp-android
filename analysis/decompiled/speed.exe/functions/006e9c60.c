/* speed.exe 006e9c60 FUN_006e9c60; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e9c60(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_009885d0;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      _DAT_00000000 = param_2;
      return;
    }
    if (puVar1[8] == param_1) break;
    puVar1 = (undefined4 *)puVar1[5];
  }
  *puVar1 = param_2;
  return;
}

