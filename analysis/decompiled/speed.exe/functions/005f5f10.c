/* speed.exe 005f5f10 FUN_005f5f10; analysis pseudocode, not buildable source.
 * calls 005ec490 FUN_005ec490
 * calls 005f5d40 FUN_005f5d40
 * calls 005f53d0 FUN_005f53d0
 * calls 005f30f0 FUN_005f30f0
 */

uint * __thiscall FUN_005f5f10(int param_1,uint param_2,uint param_3,char param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint local_8;
  int local_4;
  
  iVar3 = param_1 + 300;
  if (param_4 == '\0') {
    iVar3 = param_1 + 0x138;
  }
  local_8 = param_2 >> ((byte)*(undefined4 *)(param_1 + 0x60) & 0x1f);
  FUN_005ec490(&local_4,&local_8);
  if (local_4 != *(int *)(iVar3 + 4)) {
    iVar3 = *(int *)(local_4 + 0x10);
    if (param_3 <= *(uint *)(iVar3 + 4)) {
      *(uint *)(iVar3 + 4) = param_3;
      return (uint *)(iVar3 + 8);
    }
    FUN_005f30f0(param_2);
  }
  uVar4 = param_3 + 0x17 & 0xfffffff0;
  uVar5 = 0;
  do {
    if (*(uint *)(param_1 + 0x128) < (*(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x120)) + uVar4
       ) {
      if (uVar5 != 0) {
        return (uint *)0x0;
      }
      FUN_005f5d40();
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  puVar1 = *(uint **)(param_1 + 0x124);
  *(undefined1 **)(param_1 + 0x124) = (undefined1 *)((int)puVar1 + uVar4);
  if (param_4 != '\0') {
    puVar6 = puVar1;
    for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (uint *)((int)puVar6 + 1);
    }
  }
  puVar1[1] = param_3;
  *puVar1 = param_2;
  puVar2 = (undefined4 *)FUN_005f53d0(&local_8);
  *puVar2 = puVar1;
  return puVar1 + 2;
}

