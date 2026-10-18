/* speed.exe 00720850 FUN_00720850; analysis pseudocode, not buildable source.
 * calls 00717530 FUN_00717530
 * calls 0071dc00 FUN_0071dc00
 * calls 0070e570 FUN_0070e570
 * calls 0071dc20 FUN_0071dc20
 * calls 0071dc80 FUN_0071dc80
 * calls 0045da30 FUN_0045da30
 * calls 00704e70 FUN_00704e70
 * calls 0071f6e0 FUN_0071f6e0
 * calls 00704e00 FUN_00704e00
 * calls 006269b0 FUN_006269b0
 * calls 0071dc40 FUN_0071dc40
 * calls 00704ad0 FUN_00704ad0
 * calls 007040c0 FUN_007040c0
 * calls 00452940 FUN_00452940
 * calls 0071dca0 FUN_0071dca0
 * calls 0045da70 FUN_0045da70
 * calls 0071dc60 FUN_0071dc60
 * calls 0071cb10 FUN_0071cb10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00720850(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  float10 fVar11;
  
  if ((((*(int **)(param_1 + 0x130) == (int *)0x0) ||
       (cVar6 = (**(code **)(**(int **)(param_1 + 0x130) + 0x8c))(), cVar6 == '\0')) ||
      (*(int **)(param_1 + 0x134) == (int *)0x0)) ||
     (cVar6 = (**(code **)(**(int **)(param_1 + 0x134) + 0x8c))(), cVar6 != '\0')) {
    FUN_00704e70();
  }
  if (*(int **)(param_1 + 0x130) == (int *)0x0) {
    if ((*(int *)(param_1 + 0x1d4) != 3) && (*(int *)(param_1 + 0x1d4) != 2)) {
      if ((*(int *)(param_1 + 0x134) == 0) || (*(char *)(param_1 + 0x15d) < '\x01')) {
        *(int *)(param_1 + 0x22c) = DAT_00925ae8;
        *(undefined4 *)(param_1 + 0x1d4) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x1d4) = 3;
      }
    }
  }
  else {
    cVar6 = (**(code **)(**(int **)(param_1 + 0x130) + 0x34))();
    if (((cVar6 == '\0') &&
        (cVar6 = (**(code **)(**(int **)(param_1 + 0x130) + 0x28))(), cVar6 != '\0')) &&
       (iVar10 = (**(code **)(**(int **)(param_1 + 0x130) + 0x114))(), iVar10 != 2)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((*(int **)(param_1 + 0xe0) == (int *)0x0) ||
       (cVar6 = (**(code **)(**(int **)(param_1 + 0xe0) + 0x60))(), cVar6 == '\0')) {
      cVar6 = '\0';
    }
    else {
      cVar6 = (**(code **)(**(int **)(param_1 + 0xe0) + 0x70))();
    }
    if ((bVar4) || ((*(short *)(param_1 + 0x148) == 0 && (cVar6 == '\0')))) {
      *(undefined4 *)(param_1 + 0x1d4) = 1;
    }
    else if (((0 < *(short *)(param_1 + 0x148)) || (cVar6 == '\x01')) ||
            (iVar10 = FUN_00704e00(), iVar10 != 0)) {
      if (*(int *)(param_1 + 0x1d4) != 0) {
        *(float *)(param_1 + 0x164) =
             (float)(DAT_00925ae8 - *(int *)(param_1 + 0x22c)) * _DAT_00890984;
      }
      *(undefined4 *)(param_1 + 0x1d4) = 0;
    }
    if ((*(int *)(param_1 + 0x1d4) == 0) || (*(int *)(param_1 + 0x1d4) == 1)) {
      *(undefined4 *)(param_1 + 0x14c) = 0;
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
  }
  iVar10 = DAT_00925ae8;
  fVar5 = (float)(DAT_00925ae8 - *(int *)(param_1 + 0x218)) * _DAT_00890984;
  if (*(int *)(param_1 + 0x1d4) == 0) {
    *(int *)(param_1 + 0x22c) = DAT_00925ae8;
    *(int *)(param_1 + 0x218) = iVar10;
  }
  else {
    *(int *)(param_1 + 0x21c) = DAT_00925ae8;
  }
  iVar10 = *(int *)(param_1 + 0x184);
  iVar7 = FUN_00452940();
  if (iVar7 == 0) {
    pfVar9 = (float *)FUN_006269b0(4);
  }
  else {
    pfVar9 = (float *)(iVar10 + 0x18);
  }
  iVar10 = *(int *)(param_1 + 0x184);
  fVar2 = *(float *)(iVar10 + 0x7c) + *pfVar9;
  uVar8 = FUN_00452940();
  if (uVar8 < 2) {
    pfVar9 = (float *)FUN_006269b0(4);
  }
  else {
    pfVar9 = (float *)(iVar10 + 0x1c);
  }
  fVar3 = *(float *)(*(int *)(param_1 + 0x184) + 0x7c) + *pfVar9;
  if (((*(int *)(param_1 + 0x138) == 0x29a) && (*(int *)(param_1 + 0x1d4) == 0)) &&
     (*(float *)(param_1 + 0x164) < fVar3)) {
    *(undefined4 *)(param_1 + 0x138) = 1;
    *(undefined4 *)(param_1 + 0x1d8) = 5;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffedff;
    FUN_0070e570();
    piVar1 = *(int **)(param_1 + 0x1fc);
    if ((DAT_00993cc8 != 0) && ((*(uint *)(DAT_00993cc8 + 0x54) >> 8 & 1) == 0)) {
      piVar1[4] = 3;
      (**(code **)(*piVar1 + 0xc))(2);
    }
    FUN_00704ad0();
  }
  if ((((*(int *)(param_1 + 0x138) != 2) ||
       ((*(int *)(param_1 + 0x1d4) != 1 && (*(int *)(param_1 + 0x1d4) != 2)))) || (fVar5 <= fVar2))
     || ((*(int **)(param_1 + 0x130) != (int *)0x0 &&
         ((iVar10 = (**(code **)(**(int **)(param_1 + 0x130) + 0x114))(), iVar10 != 2 ||
          (fVar11 = (float10)(**(code **)(**(int **)(param_1 + 0x130) + 0x20))(),
          fVar11 <= (float10)_DAT_00890968)))))) {
    if (*(int *)(param_1 + 0x138) == 0x29a) {
      if (((((*(int *)(param_1 + 0x1d4) != 1) && (*(int *)(param_1 + 0x1d4) != 2)) ||
           (fVar5 <= fVar2)) || ((fVar3 <= fVar5 || (cVar6 = FUN_007040c0(), cVar6 != '\0')))) ||
         ((*(int **)(param_1 + 0x130) != (int *)0x0 &&
          ((iVar10 = (**(code **)(**(int **)(param_1 + 0x130) + 0x114))(), iVar10 != 2 ||
           (fVar11 = (float10)(**(code **)(**(int **)(param_1 + 0x130) + 0x20))(),
           fVar11 <= (float10)_DAT_00890968)))))) {
        if (((*(int *)(param_1 + 0x138) == 0x29a) &&
            ((*(int *)(param_1 + 0x1d4) == 1 || (*(int *)(param_1 + 0x1d4) == 2)))) &&
           ((*(int **)(param_1 + 0x130) == (int *)0x0 ||
            ((iVar10 = (**(code **)(**(int **)(param_1 + 0x130) + 0x114))(), iVar10 == 2 &&
             (fVar11 = (float10)(**(code **)(**(int **)(param_1 + 0x130) + 0x20))(),
             (float10)_DAT_00890968 == fVar11)))))) {
          if ((*(int *)(param_1 + 0x1d8) == 4) &&
             (((*(int **)(param_1 + 0x130) == (int *)0x0 ||
               (iVar10 = (**(code **)(**(int **)(param_1 + 0x130) + 0x114))(), iVar10 == 4)) &&
              ((*(uint *)(param_1 + 0x54) & 0x1000) == 0)))) {
            FUN_0070e570();
            FUN_00717530();
            *(undefined4 *)(param_1 + 0x1d8) = 5;
            *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x1000;
          }
          else if (fVar3 < fVar5) {
            FUN_0071cb10(0);
          }
        }
      }
      else {
        iVar10 = *(int *)(param_1 + 0x1d8);
        if (iVar10 == 0) {
          FUN_0071dc00();
          *(undefined4 *)(param_1 + 0x1d8) = 1;
        }
        else if (iVar10 == 1) {
          fVar11 = (float10)FUN_0045da70(0x3f800000);
          if (fVar11 <= (float10)_DAT_008b0e70) {
            *(undefined4 *)(param_1 + 0x1d8) = 2;
            iVar10 = FUN_0045da30(3);
            if (iVar10 == 0) {
              FUN_0071dc20();
            }
            else if (iVar10 == 1) {
              FUN_0071dc40();
            }
            else {
              FUN_0071dc60();
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x1d8) = 3;
            FUN_0071dc80();
          }
        }
        else if (iVar10 == 3) {
          FUN_0071dca0();
          *(undefined4 *)(param_1 + 0x1d8) = 4;
        }
        else {
          *(undefined4 *)(param_1 + 0x1d8) = 4;
        }
      }
    }
  }
  else {
    FUN_0071f6e0(0);
  }
  if (*(int *)(param_1 + 0x138) == 999) {
    *(undefined4 *)(param_1 + 0x1d4) = 2;
  }
  iVar10 = *(int *)(param_1 + 0x1d4);
  fVar5 = _DAT_00890da8;
  if (((iVar10 == 0) || (iVar10 == 1)) && (*(int *)(param_1 + 0x130) != 0)) {
    fVar5 = (float)(DAT_00925ae8 - *(int *)(param_1 + 0x228)) * _DAT_00890984;
  }
  *(float *)(param_1 + 0x140) = fVar5;
  if ((((*(byte *)(param_1 + 0x54) & 0x40) != 0) && (*(int **)(param_1 + 0xe0) != (int *)0x0)) &&
     ((*(int *)(param_1 + 0x138) == 2 && (iVar10 != 2)))) {
    (**(code **)(**(int **)(param_1 + 0xe0) + 0xf4))();
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffffbf;
  }
  return;
}

