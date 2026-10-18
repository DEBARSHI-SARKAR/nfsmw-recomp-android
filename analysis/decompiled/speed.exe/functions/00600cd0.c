/* speed.exe 00600cd0 FUN_00600cd0; analysis pseudocode, not buildable source.
 * calls 005fac80 FUN_005fac80
 * calls 005faa20 FUN_005faa20
 * calls 005ea390 FUN_005ea390
 * calls 005fb920 FUN_005fb920
 * calls 005fb800 FUN_005fb800
 * calls 005fab40 FUN_005fab40
 * calls 005fb990 FUN_005fb990
 * calls 005fd240 FUN_005fd240
 * calls 005fbd20 FUN_005fbd20
 * calls 005fb850 FUN_005fb850
 * calls 005fba00 FUN_005fba00
 * calls 005fc0a0 FUN_005fc0a0
 * calls 005fbc40 FUN_005fbc40
 * calls 005fccc0 FUN_005fccc0
 * calls 005fbad0 FUN_005fbad0
 * calls 005fc110 FUN_005fc110
 * calls 005fc180 FUN_005fc180
 * calls 005fbe00 FUN_005fbe00
 * calls 005fbcb0 FUN_005fbcb0
 * calls 007c4b80 FUN_007c4b80
 * calls 005fa9a0 FUN_005fa9a0
 * calls 00460cd0 FUN_00460cd0
 * calls 005fcea0 FUN_005fcea0
 * calls 005fba70 FUN_005fba70
 * calls 005faab0 FUN_005faab0
 * calls 005fbe70 FUN_005fbe70
 * calls 00527d40 FUN_00527d40
 * calls 005fc030 FUN_005fc030
 * calls 005fbf50 FUN_005fbf50
 * calls 005fbfc0 FUN_005fbfc0
 * calls 005fc1f0 FUN_005fc1f0
 * calls 005fbd90 FUN_005fbd90
 * calls 005fbbd0 FUN_005fbbd0
 * calls 005fbee0 FUN_005fbee0
 * calls 005fbb60 FUN_005fbb60
 * calls 005fb8b0 FUN_005fb8b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00600cd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float local_10 [2];
  undefined1 local_8 [8];
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  uVar5 = FUN_005fb800();
  *param_1 = uVar5;
  uVar5 = FUN_005fab40();
  param_1[5] = uVar5;
  uVar4 = FUN_005fb990();
  *(undefined2 *)(param_1 + 8) = uVar4;
  fVar8 = (float10)FUN_005fb850();
  param_1[7] = (float)fVar8;
  fVar8 = (float10)FUN_005fbad0();
  local_10[0] = (float)fVar8;
  FUN_00527d40();
  uVar4 = FUN_007c4b80();
  *(undefined2 *)((int)param_1 + 0x26) = uVar4;
  iVar6 = FUN_005fb8b0();
  FUN_005ea390((float)iVar6);
  param_1._0_2_ = (undefined2)iVar6;
  *(undefined2 *)(puVar1 + 9) = param_1._0_2_;
  fVar8 = (float10)FUN_005fb920();
  FUN_005ea390((float)fVar8);
  *(undefined2 *)((int)puVar1 + 0x22) = param_1._0_2_;
  uVar5 = FUN_005fa9a0();
  puVar1[4] = uVar5;
  fVar8 = (float10)FUN_005fbb60();
  FUN_005ea390((float)fVar8);
  *(undefined2 *)((int)puVar1 + 0xe) = param_1._0_2_;
  uVar2 = FUN_005fba00();
  *(undefined1 *)(puVar1 + 10) = uVar2;
  uVar2 = FUN_005fd240();
  *(undefined1 *)((int)puVar1 + 0x2a) = uVar2;
  uVar2 = FUN_005faa20();
  *(undefined1 *)((int)puVar1 + 0x2b) = uVar2;
  uVar2 = FUN_005faab0();
  *(undefined1 *)((int)puVar1 + 0x29) = uVar2;
  puVar1[6] = 0;
  cVar3 = FUN_005fbbd0();
  puVar1[6] = puVar1[6] | (uint)(cVar3 != '\0');
  cVar3 = FUN_005fbc40();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 2;
  cVar3 = FUN_005fbcb0();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 4;
  cVar3 = FUN_005fac80();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 8;
  cVar3 = FUN_005fbd20();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x10;
  cVar3 = FUN_005fbd90();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x20;
  cVar3 = FUN_005fbe00();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x40;
  cVar3 = FUN_005fbe70();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x80;
  cVar3 = FUN_005fbee0();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x100;
  cVar3 = FUN_005fbf50();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x200;
  cVar3 = FUN_005fbfc0();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x400;
  cVar3 = FUN_005fc030();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x800;
  cVar3 = FUN_005fc0a0();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x1000;
  fVar8 = (float10)FUN_005fccc0();
  if (fVar8 <= (float10)_DAT_0089119c) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x2000;
  }
  puVar1[6] = puVar1[6] | uVar7;
  cVar3 = FUN_005fc110();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x4000;
  cVar3 = FUN_005fc180();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x8000;
  cVar3 = FUN_005fc1f0();
  puVar1[6] = puVar1[6] | -(uint)(cVar3 != '\0') & 0x10000;
  fVar8 = (float10)FUN_005fccc0();
  if (fVar8 < (float10)_DAT_0089119c) {
    fVar8 = (float10)FUN_005fccc0();
    if (fVar8 < (float10)_DAT_00890968) goto LAB_00600f94;
    uVar7 = puVar1[6] | 0x20000;
  }
  else {
    uVar7 = puVar1[6] | 0x2000;
  }
  puVar1[6] = uVar7;
LAB_00600f94:
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 3) = 0;
  uVar5 = FUN_005fba70(10);
  FUN_00460cd0(puVar1 + 1,uVar5);
  FUN_005fcea0(local_10,local_8);
  uVar2 = FUN_007c4b80();
  *(undefined1 *)(puVar1 + 0xb) = uVar2;
  uVar2 = FUN_007c4b80();
  *(undefined1 *)((int)puVar1 + 0x2d) = uVar2;
  uVar2 = FUN_007c4b80();
  *(undefined1 *)((int)puVar1 + 0x2e) = uVar2;
  uVar2 = FUN_007c4b80();
  *(undefined1 *)((int)puVar1 + 0x2f) = uVar2;
  return;
}

