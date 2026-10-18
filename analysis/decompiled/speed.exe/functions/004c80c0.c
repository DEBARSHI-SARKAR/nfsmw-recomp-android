/* speed.exe 004c80c0 FUN_004c80c0; analysis pseudocode, not buildable source.
 * calls 004b0720 FUN_004b0720
 * calls 004ba510 FUN_004ba510
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c80c0(int param_1,float param_2,float param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  undefined4 local_24;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0xb8) == 1) {
    *(undefined4 *)(param_1 + 0xb8) = 1;
    if (*(char *)(param_1 + 0xa0) == '\0') {
      *(float *)(param_1 + 0xbc) = param_2;
      iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x250);
      *(int *)(param_1 + 0xa8) = iVar6;
      if (iVar6 < 0) {
        return;
      }
      if (*(char *)(DAT_00912100 + 0x88) == '\0') {
        return;
      }
      if (*(int *)(DAT_00912100 + 8 + iVar6 * 8) < 2) {
        return;
      }
      *(float *)(param_1 + 0xbc) = param_2;
      *(undefined4 *)(param_1 + 0xb8) = 2;
      *(int *)(param_1 + 0xc0) = *(int *)(DAT_00912100 + 8 + iVar6 * 8) + -1;
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(DAT_00912100 + 0xc + iVar6 * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 0;
      switch(*(undefined4 *)(param_1 + 0xa4)) {
      case 6:
        *(undefined4 **)(param_1 + 0xc4) = &DAT_008eec90;
        *(undefined4 *)(param_1 + 0xc0) = 0x16;
        break;
      case 7:
        *(undefined4 **)(param_1 + 0xc4) = &DAT_008eeda8;
        *(undefined4 *)(param_1 + 0xc0) = 0x13;
        break;
      case 8:
        *(undefined4 **)(param_1 + 0xc4) = &DAT_008eee98;
        *(undefined4 *)(param_1 + 0xc0) = 0x43;
        break;
      case 9:
        *(undefined4 **)(param_1 + 0xc4) = &DAT_008ef1c8;
        *(undefined4 *)(param_1 + 0xc0) = 0x38;
        break;
      case 10:
        *(undefined4 **)(param_1 + 0xc4) = &DAT_008ef478;
        *(undefined4 *)(param_1 + 0xc0) = 0x22;
        break;
      case 0xb:
        *(undefined4 **)(param_1 + 0xc4) = &DAT_008ef620;
        *(undefined4 *)(param_1 + 0xc0) = 0x1e;
        break;
      case 0xc:
        *(undefined4 **)(param_1 + 0xc4) = &DAT_008ef798;
        *(undefined4 *)(param_1 + 0xc0) = 0x1d;
        break;
      default:
        *(undefined4 **)(param_1 + 0xc4) = &DAT_008eeb40;
        *(undefined4 *)(param_1 + 0xc0) = 0x1b;
      }
      puVar1 = *(undefined4 **)(param_1 + 0xc4);
      if (puVar1 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0xb8) = 2;
        FUN_004ba510((float)(int)puVar1[1],(float)(int)puVar1[4],*puVar1,puVar1[3]);
        FUN_004ba510((float)(int)puVar1[2],(float)(int)puVar1[5],*puVar1,puVar1[3]);
        FUN_004b0720();
        *(undefined4 *)(param_1 + 200) = local_24;
        FUN_004b0720();
        *(undefined4 *)(param_1 + 0xcc) = local_8;
      }
    }
  }
  if (*(int *)(param_1 + 0xb8) == 2) {
    if (_DAT_00890d60 <= param_2) {
      *(float *)(param_1 + 0xbc) = param_2;
    }
    else {
      *(float *)(param_1 + 0xbc) = param_3 + *(float *)(param_1 + 0xbc);
    }
    if (*(float *)(*(int *)(param_1 + 0xc4) + 0xc) < *(float *)(param_1 + 0xbc)) {
      do {
        if (*(int *)(param_1 + 0xb8) == 1) goto LAB_004c8494;
        piVar7 = (int *)(param_1 + 0xc0);
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          *(undefined4 *)(param_1 + 0xb8) = 1;
        }
        else {
          *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 0xc;
        }
      } while (*(float *)(*(int *)(param_1 + 0xc4) + 0xc) < *(float *)(param_1 + 0xbc));
    }
    if (*(int *)(param_1 + 0xb8) != 1) {
      puVar1 = *(undefined4 **)(param_1 + 0xc4);
      FUN_004ba510((float)(int)puVar1[1],(float)(int)puVar1[4],*puVar1,puVar1[3]);
      FUN_004ba510((float)(int)puVar1[2],(float)(int)puVar1[5],*puVar1,puVar1[3]);
      FUN_004b0720();
      *(undefined4 *)(param_1 + 200) = local_8;
      FUN_004b0720();
      *(undefined4 *)(param_1 + 0xcc) = local_24;
    }
LAB_004c8494:
    if (((((DAT_0092d884 != 0) && ((int *)*DAT_0092d87c != (int *)0x0)) &&
         (iVar6 = (**(code **)(*(int *)*DAT_0092d87c + 0x20))(), iVar6 != 0)) &&
        ((piVar7 = (int *)FUN_005d59f0(&LAB_004b4380), piVar7 != (int *)0x0 &&
         (fVar8 = (float10)(**(code **)(*piVar7 + 0xc))(), fVar8 < (float10)_DAT_0089096c)))) &&
       ((float10)_DAT_00890968 < fVar8)) {
      *(undefined4 *)(param_1 + 0xb8) = 3;
    }
  }
  else if (*(int *)(param_1 + 0xb8) == 3) {
    fVar3 = _DAT_00890968;
    if (*(float *)(*(int *)(param_1 + 0x18) + 100) < *(float *)(param_1 + 0x2c)) {
      fVar3 = _DAT_00890fc8;
    }
    *(float *)(param_1 + 0xcc) = fVar3;
    fVar3 = *(float *)(*(int *)(param_1 + 0x18) + 100);
    fVar2 = *(float *)(param_1 + 0x2c);
    fVar4 = fVar3 + _DAT_00896564;
    if ((fVar2 <= fVar4) && (fVar4 = fVar3 - _DAT_00896564, fVar4 <= fVar2)) {
      fVar4 = fVar2;
    }
    *(float *)(param_1 + 200) = fVar4;
  }
  else {
    *(float *)(param_1 + 200) = *(float *)(param_1 + 200) - _DAT_00896564;
    *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) - _DAT_0089654c;
  }
  fVar3 = *(float *)(param_1 + 200);
  fVar2 = _DAT_00896480;
  if ((_DAT_00896480 < fVar3) && (fVar2 = fVar3, _DAT_00896d28 < fVar3)) {
    fVar2 = _DAT_00896d28;
  }
  fVar3 = *(float *)(param_1 + 0xcc);
  *(float *)(param_1 + 200) = fVar2;
  fVar5 = _DAT_00896484;
  fVar4 = _DAT_00890968;
  if ((_DAT_00890968 < fVar3) && (fVar4 = fVar3, _DAT_00890fc8 < fVar3)) {
    fVar4 = _DAT_00890fc8;
  }
  *(float *)(param_1 + 0xcc) = fVar4;
  *(float *)(param_1 + 0x2c) = fVar2;
  *(float *)(param_1 + 0x40) = fVar4;
  *(bool *)(param_1 + 0x80) = fVar5 < fVar4;
  *(float *)(param_1 + 0x48) = fVar4;
  *(float *)(*(int *)(param_1 + 0x18) + 0x60) = fVar4;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 100) = *(undefined4 *)(param_1 + 0x2c);
  *(bool *)(*(int *)(param_1 + 0x18) + 0x68) = _DAT_00890968 != (float)*(byte *)(param_1 + 0x80);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x6c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x70) = *(undefined4 *)(param_1 + 0x48);
  return;
}

