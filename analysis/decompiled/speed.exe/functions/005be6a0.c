/* speed.exe 005be6a0 FUN_005be6a0; analysis pseudocode, not buildable source.
 * calls 005b0870 FUN_005b0870
 * calls 005bb7e0 FUN_005bb7e0
 * calls 005b3bd0 FUN_005b3bd0
 * calls 005b74c0 FUN_005b74c0
 */

undefined4 __thiscall FUN_005be6a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char local_1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xe0);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (param_2 == puVar1) break;
    puVar1 = (undefined4 *)puVar1[1];
  }
  if (*(int **)(param_1 + 0x108) == (int *)0x0) {
    local_1 = '\x01';
  }
  else {
    local_1 = (**(code **)(**(int **)(param_1 + 0x108) + 0x10))(puVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 0xe0);
  do {
    if (puVar2 == (undefined4 *)0x0) {
LAB_005be708:
      puVar2 = *(undefined4 **)(param_1 + 0x4128);
      while (puVar4 = puVar2, puVar4 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar4[1];
        if ((undefined4 *)puVar4[7] == param_2) {
          if (puVar4 == *(undefined4 **)(param_1 + 0x4128)) {
            *(undefined4 **)(param_1 + 0x4128) = puVar2;
          }
          if (puVar4 == *(undefined4 **)(param_1 + 0x412c)) {
            *(undefined4 *)(param_1 + 0x412c) = puVar4[2];
          }
          if (puVar4[2] != 0) {
            *(undefined4 *)(puVar4[2] + 4) = puVar4[1];
          }
          if (puVar4[1] != 0) {
            *(undefined4 *)(puVar4[1] + 8) = puVar4[2];
          }
          puVar4[1] = 0xabadcafe;
          puVar4[2] = 0xabadcafe;
          *(int *)(param_1 + 0x4124) = *(int *)(param_1 + 0x4124) + -1;
          (**(code **)*puVar4)(1);
        }
      }
      if (*(char *)((int)puVar1 + 0x15) == '\0') {
        for (iVar3 = puVar1[0x1f]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
          iVar5 = FUN_005b0870(*(undefined4 *)(iVar3 + 0x10));
          if (iVar5 != 0) {
            iVar6 = *(int *)(iVar5 + 0x1c) + -1;
            if (iVar6 < 1) {
              FUN_005bb7e0(iVar5);
            }
            else {
              *(int *)(iVar5 + 0x1c) = iVar6;
            }
          }
        }
        if (*(int **)(param_1 + 0x108) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x108) + 8))(puVar1,puVar1[0x19],puVar1[0x1a]);
        }
        if (local_1 != '\0') {
          (**(code **)*puVar1)(1);
        }
        return 1;
      }
      FUN_005b74c0(param_2);
      return 1;
    }
    if (puVar2 == param_2) {
      FUN_005b3bd0(param_2);
      goto LAB_005be708;
    }
    puVar2 = (undefined4 *)puVar2[1];
  } while( true );
}

