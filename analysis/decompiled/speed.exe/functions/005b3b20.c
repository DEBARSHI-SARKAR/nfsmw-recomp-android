/* speed.exe 005b3b20 FUN_005b3b20; analysis pseudocode, not buildable source.
 * calls 005aef40 FUN_005aef40
 */

void __fastcall FUN_005b3b20(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_005aef40(puVar1);
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
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      }
    } while (puVar1 != (undefined4 *)0x0);
  }
  return;
}

