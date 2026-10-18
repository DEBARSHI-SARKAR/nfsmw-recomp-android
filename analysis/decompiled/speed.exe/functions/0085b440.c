/* speed.exe 0085b440 FUN_0085b440; analysis pseudocode, not buildable source.
 * calls 0085b3b0 FUN_0085b3b0
 * calls 007d6cb0 __security_check_cookie
 * calls 0085b360 FUN_0085b360
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0085b440(undefined4 *param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint local_418;
  undefined4 *local_414;
  int local_410;
  uint local_40c;
  undefined4 local_404 [128];
  undefined4 local_204 [128];
  undefined4 local_4;
  
  uVar7 = param_2 * 2;
  local_4 = DAT_00906980;
  puVar12 = local_404;
  puVar10 = puVar12;
  for (uVar5 = (param_2 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  local_418 = param_2 * 0x10 - 1;
  puVar10 = local_204;
  if (-1 < (int)local_418) {
    local_410 = (param_2 * 0x10 - local_418) + -1;
    local_414 = puVar10;
    do {
      puVar2 = (undefined2 *)(uVar7 + (int)puVar12);
      uVar5 = 0;
      puVar6 = puVar2;
      puVar8 = puVar2;
      local_40c = param_2;
      if (0 < (int)param_2) {
        do {
          puVar1 = puVar2 + -1;
          puVar2 = puVar2 + -1;
          uVar5 = (uint)(ushort)puVar6[-1] + *puVar1 + uVar5;
          puVar8[-1] = (short)uVar5;
          uVar5 = uVar5 >> 0x10;
          local_40c = local_40c - 1;
          puVar6 = puVar6 + -1;
          puVar8 = puVar8 + -1;
          puVar10 = local_414;
        } while (local_40c != 0);
      }
      iVar3 = FUN_0085b3b0(puVar10);
      if ((iVar3 == 0) || (puVar9 = puVar10, puVar11 = puVar12, uVar5 != 0)) {
        puVar9 = puVar12;
        puVar11 = puVar10;
        local_414 = puVar12;
      }
      uVar5 = local_418 & 0x8000000f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
      }
      puVar10 = puVar9;
      puVar12 = puVar11;
      if ((*(ushort *)(param_3 + ((int)(local_410 + (local_410 >> 0x1f & 0xfU)) >> 4) * 2) &
          (ushort)(1 << ((byte)uVar5 & 0x1f))) != 0) {
        iVar3 = FUN_0085b360(puVar11);
        iVar4 = FUN_0085b3b0(puVar9);
        if ((iVar4 == 0) || (iVar3 != 0)) {
          puVar10 = puVar11;
          puVar12 = puVar9;
          local_414 = puVar11;
        }
      }
      local_418 = local_418 - 1;
      local_410 = local_410 + 1;
    } while (-1 < (int)local_418);
  }
  for (uVar5 = (param_2 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    *param_1 = *puVar12;
    puVar12 = puVar12 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar12;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}

