/* speed.exe 0085b1d0 FUN_0085b1d0; analysis pseudocode, not buildable source.
 * calls 0085afb0 FUN_0085afb0
 */

void FUN_0085b1d0(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    uVar2 = 0x40 - iVar1;
    uVar6 = uVar2;
    if (param_3 < uVar2) {
      uVar6 = param_3;
    }
    puVar4 = param_2;
    puVar5 = (undefined4 *)(iVar1 + 0x1c + (int)param_1);
    for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    param_2 = (undefined4 *)((int)param_2 + uVar6);
    param_3 = param_3 - uVar6;
    if (uVar6 == uVar2) {
      FUN_0085afb0(param_1);
      *param_1 = *param_1 + 0x40;
      param_1[1] = 0;
    }
    else {
      param_1[1] = param_1[1] + uVar6;
    }
  }
  if (0x3f < param_3) {
    uVar6 = param_3 >> 6;
    do {
      FUN_0085afb0(param_1);
      param_3 = param_3 - 0x40;
      param_2 = param_2 + 0x10;
      uVar6 = uVar6 - 1;
      *param_1 = *param_1 + 0x40;
    } while (uVar6 != 0);
  }
  if (param_3 != 0) {
    puVar4 = (undefined4 *)((int)param_1 + param_1[1] + 0x1c);
    for (uVar6 = param_3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar6 = param_3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    param_1[1] = param_1[1] + param_3;
  }
  return;
}

