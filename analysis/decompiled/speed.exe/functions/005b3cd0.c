/* speed.exe 005b3cd0 FUN_005b3cd0; analysis pseudocode, not buildable source.
 * calls 005b26e0 FUN_005b26e0
 */

void __fastcall FUN_005b3cd0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_005b26e0(puVar1);
    do {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      puVar1 = *(undefined4 **)(param_1 + 8);
      if (puVar1 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 8) = puVar1[1];
        if (puVar1 == *(undefined4 **)(param_1 + 0xc)) {
          *(undefined4 *)(param_1 + 0xc) = puVar1[2];
        }
        if (puVar1[2] != 0) {
          *(undefined4 *)(puVar1[2] + 4) = puVar1[1];
        }
        if (puVar1[1] != 0) {
          *(undefined4 *)(puVar1[1] + 8) = puVar1[2];
        }
        puVar1[1] = 0xabadcafe;
        puVar1[2] = 0xabadcafe;
      }
    } while (puVar1 != (undefined4 *)0x0);
  }
  return;
}

