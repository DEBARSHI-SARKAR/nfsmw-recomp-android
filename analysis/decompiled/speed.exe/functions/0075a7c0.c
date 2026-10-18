/* speed.exe 0075a7c0 FUN_0075a7c0; analysis pseudocode, not buildable source.
 * calls 00755800 FUN_00755800
 * calls 007517d0 FUN_007517d0
 * calls 0075a730 FUN_0075a730
 */

void __thiscall FUN_0075a7c0(int param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    bVar1 = 0;
    do {
      FUN_0075a730(uVar2,*param_2 >> (bVar1 & 0x1f) & 7);
      uVar2 = uVar2 + 1;
      bVar1 = bVar1 + 3;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(*(int *)(param_1 + 4) + 0x84) != 0) {
      FUN_007517d0();
    }
    FUN_00755800();
  }
  return;
}

