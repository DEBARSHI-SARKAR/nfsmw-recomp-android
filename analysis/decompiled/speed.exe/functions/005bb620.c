/* speed.exe 005bb620 FUN_005bb620; analysis pseudocode, not buildable source.
 * calls 005b3b20 FUN_005b3b20
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005bb620(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  do {
    while( true ) {
      puVar3 = *(undefined4 **)(param_1 + 0xe0);
      if (puVar3 == (undefined4 *)0x0) {
        FUN_005b3b20();
        FUN_005b3b20();
        FUN_005b3b20();
        thunk_FUN_007c7250(*(undefined4 *)(param_1 + 4));
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0;
        *(undefined1 *)(param_1 + 0x524d) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x4144) = 0;
        puVar3 = (undefined4 *)(param_1 + 0x4148);
        for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        *(undefined4 *)(param_1 + 0x5148) = 0;
        puVar3 = (undefined4 *)(param_1 + 0x514c);
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        FUN_005b3b20();
        return;
      }
      puVar1 = puVar3;
      if (puVar3 != (undefined4 *)0x0) break;
LAB_005bb699:
      (**(code **)*puVar3)(1);
    }
    do {
      if (puVar1 == puVar3) {
        *(undefined4 *)(param_1 + 0xe0) = puVar3[1];
        if (puVar3 == *(undefined4 **)(param_1 + 0xe4)) {
          *(undefined4 *)(param_1 + 0xe4) = puVar3[2];
        }
        if (puVar3[2] != 0) {
          *(undefined4 *)(puVar3[2] + 4) = puVar3[1];
        }
        if (puVar3[1] != 0) {
          *(undefined4 *)(puVar3[1] + 8) = puVar3[2];
        }
        puVar3[1] = 0xabadcafe;
        puVar3[2] = 0xabadcafe;
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + -1;
        goto LAB_005bb699;
      }
      puVar1 = (undefined4 *)puVar1[1];
    } while (puVar1 != (undefined4 *)0x0);
    (**(code **)*puVar3)(1);
  } while( true );
}

