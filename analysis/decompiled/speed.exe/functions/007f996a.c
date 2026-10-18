/* speed.exe 007f996a FUN_007f996a; analysis pseudocode, not buildable source.
 * calls 007f992c FUN_007f992c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f996a(void)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int local_c;
  
  puVar5 = &DAT_00908648;
  puVar6 = &DAT_00908e48;
  puVar4 = &DAT_00909648;
  local_c = 0;
  do {
    uVar3 = (undefined2)local_c;
    *puVar5 = uVar3;
    puVar5[1] = uVar3;
    puVar5[2] = uVar3;
    puVar5[3] = 0xff;
    fVar1 = (float)(local_c + -0x80);
    puVar5 = puVar5 + 4;
    uVar3 = FUN_007f992c((float)(local_c + -0x80) * _DAT_008c279c);
    *puVar6 = uVar3;
    uVar3 = FUN_007f992c(fVar1 * _DAT_008c2798);
    puVar6[1] = uVar3;
    fVar2 = fVar1 * _DAT_008c2794;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar4 = 0;
    puVar6 = puVar6 + 4;
    uVar3 = FUN_007f992c(fVar2);
    fVar1 = fVar1 * _DAT_008c2790;
    puVar4[1] = uVar3;
    uVar3 = FUN_007f992c(fVar1);
    puVar4[2] = uVar3;
    puVar4[3] = 0;
    puVar4 = puVar4 + 4;
    local_c = local_c + 1;
  } while (local_c < 0x100);
  DAT_009bfe18 = 0;
  return;
}

