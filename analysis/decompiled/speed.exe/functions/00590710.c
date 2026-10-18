/* speed.exe 00590710 FUN_00590710; analysis pseudocode, not buildable source.
 * calls 00581730 FUN_00581730
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00590710(int *param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint local_c;
  float local_8;
  
  local_c = 0xffffffff;
  puVar5 = (uint *)(param_1 + 8);
  iVar7 = 0x28;
  do {
    if ((((puVar5[-8] != 0xffffffff) && ((puVar5[-5] & 0xf0000) != 0)) &&
        ((puVar5[-5] >> 1 & 1) != 0)) &&
       (((bVar2 = *(byte *)((int)puVar5 + -0xf), bVar2 < 0x1a &&
         (piVar6 = param_1 + (uint)bVar2 * 0xe + 0x21ca,
         (char)param_1[(uint)bVar2 * 0xe + 0x21ca] != -1)) &&
        ((piVar6 != (int *)0x0 &&
         (((char)piVar6[1] != '\0' && ((int)(uint)*(byte *)((int)piVar6 + 5) < (int)local_c))))))))
    {
      local_c = (uint)*(byte *)((int)piVar6 + 5);
    }
    if (((((puVar5[-3] != 0xffffffff) && ((*puVar5 & 0xf0000) != 0)) && ((*puVar5 >> 1 & 1) != 0))
        && ((bVar2 = *(byte *)((int)puVar5 + 5), bVar2 < 0x1a &&
            (piVar6 = param_1 + (uint)bVar2 * 0xe + 0x21ca,
            (char)param_1[(uint)bVar2 * 0xe + 0x21ca] != -1)))) &&
       ((piVar6 != (int *)0x0 &&
        (((char)piVar6[1] != '\0' && ((int)(uint)*(byte *)((int)piVar6 + 5) < (int)local_c)))))) {
      local_c = (uint)*(byte *)((int)piVar6 + 5);
    }
    if (((((puVar5[2] != 0xffffffff) && ((puVar5[5] & 0xf0000) != 0)) && ((puVar5[5] >> 1 & 1) != 0)
         ) && ((bVar2 = *(byte *)((int)puVar5 + 0x19), bVar2 < 0x1a &&
               (piVar6 = param_1 + (uint)bVar2 * 0xe + 0x21ca,
               (char)param_1[(uint)bVar2 * 0xe + 0x21ca] != -1)))) &&
       ((piVar6 != (int *)0x0 &&
        (((char)piVar6[1] != '\0' && ((int)(uint)*(byte *)((int)piVar6 + 5) < (int)local_c)))))) {
      local_c = (uint)*(byte *)((int)piVar6 + 5);
    }
    if ((((puVar5[7] != 0xffffffff) && ((puVar5[10] & 0xf0000) != 0)) &&
        ((puVar5[10] >> 1 & 1) != 0)) &&
       (((bVar2 = *(byte *)((int)puVar5 + 0x2d), bVar2 < 0x1a &&
         (piVar6 = param_1 + (uint)bVar2 * 0xe + 0x21ca,
         (char)param_1[(uint)bVar2 * 0xe + 0x21ca] != -1)) &&
        ((piVar6 != (int *)0x0 &&
         (((char)piVar6[1] != '\0' && ((int)(uint)*(byte *)((int)piVar6 + 5) < (int)local_c))))))))
    {
      local_c = (uint)*(byte *)((int)piVar6 + 5);
    }
    if ((((((puVar5[0xc] != 0xffffffff) && ((puVar5[0xf] & 0xf0000) != 0)) &&
          ((puVar5[0xf] >> 1 & 1) != 0)) &&
         ((bVar2 = *(byte *)((int)puVar5 + 0x41), bVar2 < 0x1a &&
          (piVar6 = param_1 + (uint)bVar2 * 0xe + 0x21ca,
          (char)param_1[(uint)bVar2 * 0xe + 0x21ca] != -1)))) && (piVar6 != (int *)0x0)) &&
       (((char)piVar6[1] != '\0' && ((int)(uint)*(byte *)((int)piVar6 + 5) < (int)local_c)))) {
      local_c = (uint)*(byte *)((int)piVar6 + 5);
    }
    puVar5 = puVar5 + 0x19;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_8 = 1e+09;
  piVar6 = (int *)0x0;
  iVar7 = 200;
  piVar8 = param_1;
  do {
    if ((((*piVar8 != -1) && ((piVar8[3] & 0xf0000U) != 0)) && (((uint)piVar8[3] >> 1 & 1) != 0)) &&
       (((*(byte *)((int)piVar8 + 0x11) < 0x1a &&
         (piVar1 = param_1 + (uint)*(byte *)((int)piVar8 + 0x11) * 0xe + 0x21ca, (char)*piVar1 != -1
         )) && ((piVar1 != (int *)0x0 && (*(byte *)((int)piVar1 + 5) == local_c)))))) {
      FUN_00581730();
      iVar4 = FUN_007c4b80();
      fVar3 = (float)iVar4;
      if (iVar4 < 0) {
        fVar3 = fVar3 + _DAT_00891214;
      }
      if (fVar3 < local_8) {
        FUN_00581730();
        iVar4 = FUN_007c4b80();
        local_8 = (float)iVar4;
        piVar6 = piVar8;
        if (iVar4 < 0) {
          local_8 = local_8 + _DAT_00891214;
        }
      }
    }
    piVar8 = piVar8 + 5;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (piVar6 != (int *)0x0) {
    if (param_2 != (int *)0x0) {
      FUN_00581730();
      iVar7 = FUN_007c4b80();
      fVar3 = (float)iVar7;
      if (iVar7 < 0) {
        fVar3 = fVar3 + _DAT_00891214;
      }
      if (fVar3 < local_8) {
        return param_2;
      }
    }
    return piVar6;
  }
  return param_2;
}

