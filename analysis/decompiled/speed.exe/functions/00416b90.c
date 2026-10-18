/* speed.exe 00416b90 FUN_00416b90; analysis pseudocode, not buildable source.
 * calls 005fbe70 FUN_005fbe70
 * calls 006ff320 FUN_006ff320
 * calls 0045da70 FUN_0045da70
 * calls 00701510 FUN_00701510
 * calls 005fbd20 FUN_005fbd20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00416b90(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  char cStack_1e;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00867c3e;
  pvStack_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x4c);
  ExceptionList = &pvStack_c;
  piVar9 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 0xa0))();
  iVar6 = DAT_00993cc8;
  piVar10 = (int *)(**(code **)(*piVar1 + 8))();
  cStack_1e = '\0';
  bVar5 = false;
  bVar3 = true;
  if (*(int *)(DAT_0091e000 + 0x1968) != 0) {
    FUN_005fbe70();
    cStack_1e = FUN_005fbd20();
  }
  piVar11 = DAT_0092fd5c;
  piVar12 = DAT_0092fd5c;
  if (DAT_0092fd5c != DAT_0092fd5c + DAT_0092fd64) {
    do {
      piVar2 = (int *)*piVar11;
      if (piVar2 != (int *)0x0) {
        piVar12 = (int *)(**(code **)(*piVar1 + 4))();
        iVar14 = *piVar2;
        uVar13 = (**(code **)(*piVar12 + 0x34))();
        iVar14 = (**(code **)(iVar14 + 0x58))(uVar13);
        iVar15 = (**(code **)(*piVar1 + 8))();
        piVar12 = DAT_0092fd5c;
        if (iVar15 == iVar14) {
          bVar5 = true;
          break;
        }
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar12 + DAT_0092fd64);
  }
  if ((((iVar6 == 0) || (piVar9 == (int *)0x0)) || (*(char *)(param_1 + 0x760) == '\0')) ||
     (*(int *)(iVar6 + 0x194) == 0)) {
    *(undefined4 *)(param_1 + 0x764) = 0xffffffff;
  }
  else {
    cVar7 = (**(code **)(*piVar9 + 0x8c))();
    if (((cVar7 != '\0') && (cStack_1e == '\0')) && (*(int *)(iVar6 + 0x158) < 2)) {
      if ((*(int *)(iVar6 + 0x138) != 1) || (_DAT_00890da4 <= *(float *)(iVar6 + 0x140))) {
        if (*(int *)(iVar6 + 0x138) == 0x29a) {
          *(undefined4 *)(param_1 + 0x764) = 0xffffffff;
          bVar3 = false;
          *(int *)(param_1 + 0x76c) = DAT_00925ae8;
        }
      }
      else {
        bVar3 = false;
        fVar4 = (float)(DAT_00925ae8 - *(int *)(param_1 + 0x76c)) * _DAT_00890984;
        if ((DAT_0090d974 & 1) == 0) {
          DAT_0090d974 = DAT_0090d974 | 1;
          iVar14 = *(int *)(iVar6 + 0x198);
          uStack_4 = 0;
          fVar16 = (float10)FUN_0045da70(*(undefined4 *)(iVar14 + 0xa4));
          _DAT_0090d970 = (float)(fVar16 + (float10)*(float *)(iVar14 + 0xac));
          uStack_4 = 0xffffffff;
        }
        if ((_DAT_0090d970 < fVar4) && (*(int *)(param_1 + 0x764) == -1)) {
          *(int *)(param_1 + 0x770) = DAT_00925ae8;
          *(undefined4 *)(param_1 + 0x764) = 1;
        }
        if ((*(int *)(param_1 + 0x764) == 1) &&
           (_DAT_00890634 < (float)(DAT_00925ae8 - *(int *)(param_1 + 0x770)) * _DAT_00890984)) {
          *(undefined4 *)(param_1 + 0x764) = 0xffffffff;
          iVar14 = *(int *)(iVar6 + 0x198);
          fVar16 = (float10)FUN_0045da70(*(undefined4 *)(iVar14 + 0xa4));
          _DAT_0090d970 = (float)(fVar16 + (float10)*(float *)(iVar14 + 0xac));
          *(int *)(param_1 + 0x76c) = DAT_00925ae8;
        }
      }
    }
    cVar7 = (**(code **)(*piVar10 + 0x9c))(0x7000);
    if (cVar7 == '\0') {
      cVar7 = (**(code **)(*piVar10 + 0x7c))();
      if (cVar7 == '\0') {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = 3;
        *(undefined4 *)(param_1 + 0x764) = 3;
      }
      *(undefined4 *)(param_1 + 0x764) = uVar13;
    }
    if (bVar3) {
      fVar4 = (float)(DAT_00925ae8 - *(int *)(param_1 + 0x76c)) * _DAT_00890984;
      cVar7 = FUN_00701510();
      if (_DAT_00891048 <= fVar4) {
        bVar3 = false;
        if (*(char *)(param_1 + 0x768) != '\0') {
          *(int *)(param_1 + 0x770) = DAT_00925ae8;
          *(uint *)(param_1 + 0x764) = (uint)(cVar7 != '\0');
        }
      }
      else {
        bVar3 = true;
      }
      *(bool *)(param_1 + 0x768) = bVar3;
      if (bVar3) {
        if (cVar7 == '\0') {
          *(undefined4 *)(param_1 + 0x764) = 1;
        }
        else {
          uVar13 = 2;
          if (_DAT_00890604 <= fVar4) {
            uVar13 = 1;
          }
          *(undefined4 *)(param_1 + 0x764) = uVar13;
        }
      }
      else {
        cVar8 = (**(code **)(*piVar9 + 0x30))();
        if (((((cVar8 == '\0') && (cVar8 = (**(code **)(*piVar9 + 0x58))(), cVar8 == '\0')) &&
             (cVar8 = FUN_006ff320(0xa0), cVar8 == '\0')) &&
            (((cVar8 = FUN_006ff320(0xd6), cVar8 == '\0' &&
              (cVar8 = FUN_006ff320(0xde), cVar8 == '\0')) &&
             (cVar8 = FUN_006ff320(0x40), cVar8 == '\0')))) || (*(char *)(param_1 + 0x778) == '\0'))
        {
          fVar4 = (float)(DAT_00925ae8 - *(int *)(param_1 + 0x770)) * _DAT_00890984;
          if (fVar4 <= *(float *)(*(int *)(iVar6 + 0x198) + 0x7c) +
                       *(float *)(*(int *)(iVar6 + 0x198) + 0x58)) {
            if (*(float *)(*(int *)(iVar6 + 0x198) + 0x7c) < fVar4) {
              *(undefined4 *)(param_1 + 0x764) = 1;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x764) = 0;
            *(int *)(param_1 + 0x770) = DAT_00925ae8;
          }
        }
        else {
          if (cVar7 == '\0') {
            *(undefined4 *)(param_1 + 0x764) = 1;
          }
          else {
            fVar4 = (float)(DAT_00925ae8 - *(int *)(param_1 + 0x774)) * _DAT_00890984;
            if ((*(int *)(param_1 + 0x764) != 2) &&
               (*(float *)(*(int *)(iVar6 + 0x198) + 0xbc) < fVar4)) {
              *(undefined4 *)(param_1 + 0x764) = 2;
              *(int *)(param_1 + 0x774) = DAT_00925ae8;
              *(int *)(param_1 + 0x770) = DAT_00925ae8;
              goto LAB_004170a6;
            }
            if (*(float *)(*(int *)(iVar6 + 0x198) + 100) < fVar4) {
              *(undefined4 *)(param_1 + 0x764) = 1;
              *(int *)(param_1 + 0x774) = DAT_00925ae8;
              *(int *)(param_1 + 0x770) = DAT_00925ae8;
              goto LAB_004170a6;
            }
          }
          *(int *)(param_1 + 0x770) = DAT_00925ae8;
        }
      }
    }
  }
LAB_004170a6:
  if (bVar5) {
    *(undefined4 *)(param_1 + 0x764) = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

