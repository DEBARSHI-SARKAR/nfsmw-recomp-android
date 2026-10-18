/* speed.exe 00803b27 FUN_00803b27; analysis pseudocode, not buildable source.
 * calls 008029a5 FUN_008029a5
 */

void FUN_00803b27(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 undefined4 *param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_c;
  
  pcVar1 = DAT_009c6ad0;
  local_c = 4;
  puVar2 = param_7;
  do {
    puVar4 = (undefined4 *)((param_6 - (int)param_7) + (int)puVar2);
    puVar6 = puVar2;
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar2 = (undefined4 *)((int)puVar2 + param_2);
    local_c = local_c + -1;
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  } while (local_c != 0);
  if (1 < param_5) {
    iVar5 = param_5 - 1;
    do {
      param_7 = param_7 + param_2 * 2;
      param_6 = param_6 + param_2 * 8;
      (*pcVar1)(param_1,param_6,param_7,param_2,param_4,param_3,param_8);
      param_3 = param_3 + param_4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar2 = param_7 + param_2;
  param_5 = 4;
  do {
    puVar4 = (undefined4 *)((int)puVar2 + (param_6 - (int)param_7));
    puVar6 = puVar2;
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar2 = (undefined4 *)((int)puVar2 + param_2);
    param_5 = param_5 + -1;
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  } while (param_5 != 0);
  FUN_008029a5(param_1,param_6,param_7,param_2,param_4,param_3,param_8);
  return;
}

