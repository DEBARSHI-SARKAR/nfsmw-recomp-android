/* speed.exe 0057f7b0 FUN_0057f7b0; analysis pseudocode, not buildable source.
 * calls 0056d810 FUN_0056d810
 * calls 005f7410 FUN_005f7410
 * calls 0056d8c0 FUN_0056d8c0
 */

undefined4 * __thiscall FUN_0057f7b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (DAT_0091e00c == 0) {
    puVar4 = param_2;
    for (iVar3 = 0x1000; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    FUN_005f7410(param_2,0x4000);
  }
  puVar4 = param_2 + 0x1000;
  if (param_2 + 0x1001 <= param_3) {
    param_2[0x1000] = *param_1;
    puVar4 = param_2 + 0x1001;
  }
  if ((undefined4 *)((int)puVar4 + 1) <= param_3) {
    *(undefined1 *)puVar4 = *(undefined1 *)(param_1 + 2);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if (puVar4 + 1 <= param_3) {
    *puVar4 = param_1[3];
    puVar4 = puVar4 + 1;
  }
  if ((undefined4 *)((int)puVar4 + 2) <= param_3) {
    *(undefined2 *)puVar4 = *(undefined2 *)(param_1 + 4);
    puVar4 = (undefined4 *)((int)puVar4 + 2);
  }
  if (puVar4 + 1 <= param_3) {
    *puVar4 = param_1[1];
    puVar4 = puVar4 + 1;
  }
  puVar6 = puVar4;
  if (puVar4 + 0x96 <= param_3) {
    puVar2 = (undefined4 *)((int)param_1 + 0x12);
    puVar5 = puVar4;
    for (iVar3 = 0x96; puVar6 = puVar4 + 0x96, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((undefined4 *)((int)puVar6 + 2) <= param_3) {
    *(undefined2 *)puVar6 = *(undefined2 *)((int)param_1 + 0x26a);
    puVar6 = (undefined4 *)((int)puVar6 + 2);
  }
  if (puVar6 + 4 <= param_3) {
    *puVar6 = param_1[0x9b];
    puVar6[1] = param_1[0x9c];
    puVar6[2] = param_1[0x9d];
    puVar6[3] = param_1[0x9e];
    puVar6 = puVar6 + 4;
  }
  uVar1 = FUN_0056d810(puVar6,param_3);
  puVar2 = (undefined4 *)FUN_0056d8c0(uVar1,param_3);
  puVar4 = &DAT_0091d928;
  puVar6 = puVar2;
  for (iVar3 = 0xbd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  return puVar2 + 0xbd;
}

