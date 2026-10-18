/* speed.exe 00447cc0 FUN_00447cc0; analysis pseudocode, not buildable source.
 */

void FUN_00447cc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    puVar1 = *(undefined4 **)(param_1 + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}

