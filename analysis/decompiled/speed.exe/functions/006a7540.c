/* speed.exe 006a7540 FUN_006a7540; analysis pseudocode, not buildable source.
 * calls 0069a5d0 FUN_0069a5d0
 * calls 0069a1d0 FUN_0069a1d0
 * calls 0069a2a0 FUN_0069a2a0
 */

void FUN_006a7540(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  
  if (DAT_00938248 == 0) {
    puVar3 = (undefined *)0x0;
    puVar6 = puVar3;
  }
  else {
    puVar3 = (undefined *)(DAT_00938248 + -0x58);
    puVar6 = puVar3;
  }
  while (puVar3 != &DAT_009381f0) {
    FUN_0069a1d0(param_1);
    if (*(int *)(puVar3 + 0x58) == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = (undefined *)(*(int *)(puVar3 + 0x58) + -0x58);
    }
  }
  DAT_009378d0 = 0;
  DAT_009378d4 = 0;
  puVar4 = &DAT_009378d0;
  puVar5 = &DAT_009378d8;
  for (iVar2 = 0x23e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (puVar6 != &DAT_009381f0) {
    do {
      cVar1 = (**(code **)(*(int *)(puVar6 + 0x50) + 0xc))();
      if (cVar1 != '\0') {
        FUN_0069a5d0(param_1);
      }
      cVar1 = (**(code **)(*(int *)(puVar6 + 0x50) + 8))();
      if (cVar1 != '\0') {
        if (*(int *)(puVar6 + 0x58) == 0) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = (undefined *)(*(int *)(puVar6 + 0x58) + -0x58);
        }
        if (puVar3 != &DAT_009381f0) {
          do {
            cVar1 = (**(code **)(*(int *)(puVar3 + 0x50) + 8))();
            if (cVar1 != '\0') {
              FUN_0069a2a0(puVar3);
            }
            if (*(int *)(puVar3 + 0x58) == 0) {
              puVar3 = (undefined *)0x0;
            }
            else {
              puVar3 = (undefined *)(*(int *)(puVar3 + 0x58) + -0x58);
            }
          } while (puVar3 != &DAT_009381f0);
        }
      }
      if (*(int *)(puVar6 + 0x58) == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = (undefined *)(*(int *)(puVar6 + 0x58) + -0x58);
      }
    } while (puVar6 != &DAT_009381f0);
  }
  return;
}

