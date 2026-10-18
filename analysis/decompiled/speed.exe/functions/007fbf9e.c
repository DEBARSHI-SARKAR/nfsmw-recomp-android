/* speed.exe 007fbf9e FUN_007fbf9e; analysis pseudocode, not buildable source.
 * calls 007fbe2f FUN_007fbe2f
 * calls 007fc5f5 FUN_007fc5f5
 * calls 007ffeb9 FUN_007ffeb9
 * calls 007ffbf0 FUN_007ffbf0
 * calls 007fc81c FUN_007fc81c
 * calls 007fcc70 FUN_007fcc70
 * calls 007ffe05 FUN_007ffe05
 * calls 007fdd78 FUN_007fdd78
 */

uint FUN_007fbf9e(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int local_c;
  int local_8;
  
  FUN_007fdd78(&local_c);
  iVar5 = FUN_007fbe2f(param_1);
  *(int *)(param_1 + 0x1a0) = iVar5;
  if ((iVar5 == 0) && ((*(int *)(param_1 + 0x1dc) == 0 || (*(int *)(param_1 + 0x4948) == 0)))) {
    FUN_007fdd78(&local_8);
  }
  else {
    if (*(int *)(param_1 + 0x25c) == 0) {
      iVar5 = FUN_007fc5f5(*(int *)(param_1 + 0x208) + 0x20 + *(int *)(param_1 + 0x20c) * 2 +
                           *(int *)(param_1 + 0x1b8),0);
      *(int *)(param_1 + 0x260) = iVar5;
      *(uint *)(param_1 + 0x25c) = iVar5 + 0x1fU & 0xffffffe0;
      FUN_007fc81c(*(undefined4 *)(param_1 + 0x29c));
    }
    uVar7 = *(uint *)(param_1 + 0x1a0);
    uVar8 = *(undefined4 *)(param_1 + 0x148);
    uVar2 = *(undefined4 *)(param_1 + 0x25c);
    uVar3 = *(undefined4 *)(param_1 + 0x254);
    uVar4 = *(undefined4 *)(param_1 + 0x6a4);
    if (uVar7 < 0xc9) {
      if (uVar7 < 0x65) {
        FUN_007fcc70(*(undefined4 *)(param_1 + 0x29c),*(undefined1 *)(param_1 + 0x19c),
                     *(undefined1 *)(param_1 + 0x1ac),uVar7,uVar4,uVar3,uVar2,uVar8,4,1);
        FUN_007fdd78(&local_8);
      }
      else {
        FUN_007fcc70(*(undefined4 *)(param_1 + 0x29c),*(undefined1 *)(param_1 + 0x19c),
                     *(undefined1 *)(param_1 + 0x1ac),uVar7 - 100,uVar4,uVar3,uVar2,uVar8,4,1);
        FUN_007fdd78(&local_8);
        FUN_007ffe05(param_1);
      }
    }
    else {
      FUN_007fcc70(*(undefined4 *)(param_1 + 0x29c),*(undefined1 *)(param_1 + 0x19c),
                   *(undefined1 *)(param_1 + 0x1ac),uVar7 - 200,uVar4,uVar3,uVar2,uVar8,4,1);
      FUN_007fdd78(&local_8);
      FUN_007ffeb9(param_1);
    }
    if (*(int *)(param_1 + 0x4940) != 0) {
      (*DAT_009c6ac8)(*(undefined4 *)(param_1 + 0x29c),*(int *)(param_1 + 0x4940),
                      *(undefined4 *)(param_1 + 0x4944),*(undefined4 *)(param_1 + 0x25c),
                      *(undefined4 *)(param_1 + 0x25c));
    }
  }
  if ((*(uint *)(param_1 + 0x1b0) < *(uint *)(param_1 + 0x23c)) ||
     (*(uint *)(param_1 + 0x1b4) < *(uint *)(param_1 + 0x240))) {
    *param_2 = *(uint *)(param_1 + 0x23c) + 0x20;
    uVar7 = *param_2;
    param_2[1] = *(int *)(param_1 + 0x240) + 0x20;
    param_2[4] = (int)param_2[1] / 2;
    param_2[2] = uVar7;
    uVar6 = (int)uVar7 / 2;
    param_2[3] = uVar6;
    param_2[5] = uVar6;
    param_2[6] = *(uint *)(param_1 + 0x264);
    param_2[7] = *(int *)(param_1 + 0x264) + param_2[1] * uVar7;
    param_2[8] = ((int)param_2[1] / 2) * uVar6 + param_2[1] * uVar7 + *(int *)(param_1 + 0x264);
    param_2[9] = *(uint *)(param_1 + 0x264);
    if (*(int *)(param_1 + 0x1a0) == 0) {
      uVar8 = *(undefined4 *)(param_1 + 0x254);
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0x25c);
    }
    FUN_007ffbf0(*(undefined4 *)(param_1 + 0x29c),uVar8,param_2);
    param_2[6] = param_2[6] +
                 (param_2[1] - *(int *)(param_1 + 0x240) >> 1) * param_2[2] +
                 (*param_2 - *(int *)(param_1 + 0x23c) >> 1);
    *param_2 = *(uint *)(param_1 + 0x23c);
    param_2[1] = *(uint *)(param_1 + 0x240);
    param_2[7] = param_2[7] +
                 (param_2[4] - (*(uint *)(param_1 + 0x240) >> 1) >> 1) * param_2[5] +
                 (param_2[3] - (*(uint *)(param_1 + 0x23c) >> 1) >> 1);
    param_2[8] = param_2[8] +
                 (param_2[4] - (*(uint *)(param_1 + 0x240) >> 1) >> 1) * param_2[5] +
                 (param_2[3] - (*(uint *)(param_1 + 0x23c) >> 1) >> 1);
    param_2[3] = *(uint *)(param_1 + 0x23c) >> 1;
    param_2[4] = *(uint *)(param_1 + 0x240) >> 1;
  }
  else {
    *param_2 = *(uint *)(param_1 + 0x1b0);
    param_2[1] = *(uint *)(param_1 + 0x1b4);
    param_2[2] = *(uint *)(param_1 + 0x1b8);
    param_2[3] = *(uint *)(param_1 + 0x1b0) >> 1;
    param_2[4] = *(uint *)(param_1 + 0x1b4) >> 1;
    param_2[5] = *(uint *)(param_1 + 0x1bc);
    if ((*(int *)(param_1 + 0x1a0) == 0) &&
       ((*(int *)(param_1 + 0x1dc) == 0 || (*(int *)(param_1 + 0x4948) == 0)))) {
      param_2[6] = (*(int *)(param_1 + 0x1b8) + 1) * 0x30 + *(int *)(param_1 + 0x254) +
                   *(int *)(param_1 + 0x21c);
      param_2[7] = *(int *)(param_1 + 0x220) + (*(int *)(param_1 + 0x1bc) + 1) * 0x18 +
                   *(int *)(param_1 + 0x254);
      param_2[8] = *(int *)(param_1 + 0x224) + (*(int *)(param_1 + 0x1bc) + 1) * 0x18 +
                   *(int *)(param_1 + 0x254);
      uVar7 = *(int *)(param_1 + 0x254) + *(int *)(param_1 + 0x21c);
    }
    else {
      param_2[6] = (*(int *)(param_1 + 0x1b8) + 1) * 0x30 + *(int *)(param_1 + 0x21c) +
                   *(int *)(param_1 + 0x25c);
      param_2[7] = *(int *)(param_1 + 0x220) + (*(int *)(param_1 + 0x1bc) + 1) * 0x18 +
                   *(int *)(param_1 + 0x25c);
      param_2[8] = *(int *)(param_1 + 0x224) + (*(int *)(param_1 + 0x1bc) + 1) * 0x18 +
                   *(int *)(param_1 + 0x25c);
      uVar7 = *(int *)(param_1 + 0x21c) + *(int *)(param_1 + 0x25c);
    }
    param_2[9] = uVar7;
  }
  (*DAT_009c6810)();
  uVar7 = (uint)(local_8 - local_c) / *(uint *)(param_1 + 0x1a4);
  uVar6 = *(uint *)(param_1 + 0x1a0) / 10;
  puVar1 = (uint *)(param_1 + 0x91c + (*(uint *)(param_1 + 0x1a0) % 10) * 4);
  if (*puVar1 == 0) {
    *puVar1 = uVar7;
  }
  else {
    uVar6 = *puVar1 * 7 + uVar7 >> 3;
    *puVar1 = uVar6;
  }
  return uVar6;
}

