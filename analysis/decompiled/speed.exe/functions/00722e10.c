/* speed.exe 00722e10 FUN_00722e10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00722e10(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < *(int *)(param_1 + 4) + uVar1) {
    do {
      *(undefined2 *)(uVar1 + 0x1a) = 0;
      uVar1 = uVar1 + (int)*(short *)(uVar1 + 0x42);
    } while (uVar1 < (uint)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8)));
  }
  return;
}

