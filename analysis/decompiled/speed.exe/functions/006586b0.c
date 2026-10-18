/* speed.exe 006586b0 FUN_006586b0; analysis pseudocode, not buildable source.
 * calls 00658300 FUN_00658300
 * calls 00653790 FUN_00653790
 * calls 006497b0 FUN_006497b0
 * calls 007c66d0 _malloc
 * calls 007c7250 FUN_007c7250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006586b0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined4 uVar12;
  int local_2c;
  int local_20;
  int local_1c;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x1e);
  if (*(int *)(param_1 + 4) == 1) {
    uVar5 = uVar4 - 1;
  }
  else {
    uVar5 = uVar4;
    uVar4 = uVar4 + 1;
  }
  fVar3 = _DAT_0089096c / (float)(int)uVar5;
  pvVar6 = _malloc(uVar4 * 8);
  puVar7 = _malloc((uint)*(ushort *)(param_1 + 0x1e) << 4);
  local_1c = 4;
  do {
    FUN_00658300(0x10);
    local_2c = 0;
    if (3 < uVar4) {
      local_20 = 2;
      puVar8 = (undefined4 *)((int)pvVar6 + 8);
      iVar9 = 0;
      do {
        puVar8[-2] = *(undefined4 *)(iVar9 + 0xc + *(int *)(param_1 + 0x24));
        puVar8[-1] = (float)local_2c;
        *puVar8 = *(undefined4 *)(iVar9 + 0x1c + *(int *)(param_1 + 0x24));
        local_2c = local_2c + 4;
        puVar8[1] = (float)(local_20 + -1);
        puVar8[2] = *(undefined4 *)(iVar9 + 0x2c + *(int *)(param_1 + 0x24));
        puVar8[3] = (float)local_20;
        puVar8[4] = *(undefined4 *)(iVar9 + 0x3c + *(int *)(param_1 + 0x24));
        iVar1 = local_20 + 1;
        local_20 = local_20 + 4;
        puVar8[5] = (float)iVar1;
        puVar8 = puVar8 + 8;
        iVar9 = iVar9 + 0x40;
      } while (local_2c < (int)(uVar4 - 3));
    }
    if (local_2c < (int)uVar4) {
      iVar9 = local_2c << 4;
      do {
        *(undefined4 *)((int)pvVar6 + local_2c * 8) =
             *(undefined4 *)(iVar9 + 0xc + *(int *)(param_1 + 0x24));
        *(float *)((int)pvVar6 + local_2c * 8 + 4) = (float)local_2c;
        local_2c = local_2c + 1;
        iVar9 = iVar9 + 0x10;
      } while (local_2c < (int)uVar4);
    }
    fVar2 = *(float *)(uVar4 * 8 + -8 + (int)pvVar6);
    local_2c = 0;
    puVar8 = puVar7;
    if (*(short *)(param_1 + 0x1e) != 0) {
      do {
        uVar12 = 0;
        fVar11 = (float10)FUN_00653790((float)local_2c * fVar2 * fVar3);
        FUN_006497b0(puVar8,(float)fVar11,uVar12);
        local_2c = local_2c + 1;
        puVar8 = puVar8 + 4;
      } while (local_2c < (int)(uint)*(ushort *)(param_1 + 0x1e));
    }
    puVar8 = puVar7;
    puVar10 = *(undefined4 **)(param_1 + 0x24);
    for (iVar9 = (uint)*(ushort *)(param_1 + 0x1e) << 2; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    local_1c = local_1c + -1;
    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  } while (local_1c != 0);
  FUN_00658300(0x10);
  FUN_007c7250(pvVar6);
  FUN_007c7250(puVar7);
  return;
}

