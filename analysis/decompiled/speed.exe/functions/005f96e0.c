/* speed.exe 005f96e0 FUN_005f96e0; analysis pseudocode, not buildable source.
 * calls 005f9000 FUN_005f9000
 * calls 005e6f20 FUN_005e6f20
 */

void __thiscall FUN_005f96e0(int param_1,undefined4 *param_2,float *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pfVar3 = param_3;
  puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  bVar4 = true;
  bVar7 = true;
  cVar1 = *(char *)((int)puVar5 + 0x1d);
  puVar2 = *(undefined4 **)(param_1 + 4);
  while (cVar1 == '\0') {
    bVar4 = (float)puVar5[3] <= *param_3;
    if (bVar4) {
      puVar6 = (undefined4 *)puVar5[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
    }
    bVar7 = !bVar4;
    bVar4 = !bVar4;
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x1d);
  }
  param_3 = (float *)puVar2;
  if (bVar4) {
    if (puVar2 == (undefined4 *)**(int **)(param_1 + 4)) {
      bVar7 = true;
      goto LAB_005f9742;
    }
    FUN_005e6f20();
  }
  if (*pfVar3 <= param_3[3]) {
    *param_2 = param_3;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
LAB_005f9742:
  puVar5 = (undefined4 *)FUN_005f9000(&param_3,bVar7,puVar2,pfVar3);
  *param_2 = *puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

