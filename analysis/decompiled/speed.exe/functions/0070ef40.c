/* speed.exe 0070ef40 FUN_0070ef40; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070ef40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 != *(int *)(param_1 + 0x60)) {
    do {
      if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar1 + 4))(1);
      }
      iVar1 = iVar1 + 8;
    } while (iVar1 != *(int *)(param_1 + 0x60));
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 100) - iVar1 >> 3) << 3,0);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  iVar1 = *(int *)(param_1 + 0xec);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0xf4) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}

