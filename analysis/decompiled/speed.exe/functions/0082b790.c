/* speed.exe 0082b790 FUN_0082b790; analysis pseudocode, not buildable source.
 * calls 008294a0 FUN_008294a0
 * calls 0082acb0 FUN_0082acb0
 * calls 0082d030 FUN_0082d030
 * calls 0082d020 FUN_0082d020
 */

void __fastcall FUN_0082b790(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_008c5e98;
  iVar2 = 0;
  iVar1 = FUN_0082d030();
  if (0 < iVar1) {
    do {
      FUN_0082acb0(iVar2);
      iVar2 = iVar2 + 1;
      iVar1 = FUN_0082d030();
    } while (iVar2 < iVar1);
  }
  if (param_1[0x1a] != 0) {
    FUN_008294a0(param_1[0x1a]);
  }
  *param_1 = &PTR_FUN_008c5e08;
  FUN_008294a0(param_1[0x3f]);
  FUN_0082d020();
  return;
}

