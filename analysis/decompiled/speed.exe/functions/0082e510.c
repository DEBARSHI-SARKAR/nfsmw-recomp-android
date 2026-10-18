/* speed.exe 0082e510 FUN_0082e510; analysis pseudocode, not buildable source.
 * calls 0082c7b0 FUN_0082c7b0
 * calls 00830640 FUN_00830640
 * calls 0082d820 FUN_0082d820
 * calls 0082dbb0 FUN_0082dbb0
 * calls 00830440 FUN_00830440
 * calls 0082def0 FUN_0082def0
 * calls 0082d9f0 FUN_0082d9f0
 * calls 0082fd50 FUN_0082fd50
 * calls 0082dd50 FUN_0082dd50
 */

void FUN_0082e510(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_10;
  uint local_c;
  
  bVar5 = DAT_0090d1e1 == 'B';
  if (bVar5) {
    local_c = *(uint *)(DAT_009c2964 + 0x10);
  }
  else {
    local_c = *(uint *)(DAT_009c2964 + 0xc);
    FUN_0082c7b0();
  }
  local_10 = 0;
  uVar4 = 0x40;
  do {
    iVar3 = *(int *)(uVar4 + DAT_009c2964);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 300) != 0)) {
      if ((*(short *)(iVar3 + 4) < 0) || (*(int *)(iVar3 + 0x60) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (-1 < *(short *)(iVar3 + 0x1c)) {
          FUN_0082d820(iVar3);
        }
        if (-1 < *(short *)(iVar3 + 0x2c)) {
          FUN_0082d9f0(iVar3);
        }
        if (-1 < *(short *)(iVar3 + 0x3c)) {
          FUN_0082dbb0(iVar3);
        }
        if (-1 < *(short *)(iVar3 + 0x4c)) {
          FUN_0082dd50(iVar3);
        }
        if (-1 < *(short *)(iVar3 + 0x5c)) {
          FUN_0082def0(iVar3);
        }
      }
      if ((*(uint *)(iVar3 + 0x70) != 0) &&
         (*(uint *)(iVar3 + 0x70) <= (local_c >> 1) + DAT_009c2980)) {
        (**(code **)(**(int **)(iVar3 + 300) + 0x10))(1);
        *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x2000000;
        *(undefined4 *)(iVar3 + 0x70) = 0;
      }
      if ((*(uint *)(iVar3 + 0x74) != 0) &&
         (*(uint *)(iVar3 + 0x74) <= (local_c >> 1) + DAT_009c2980)) {
        (**(code **)(**(int **)(iVar3 + 300) + 0x10))(0);
        *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfdffffff;
        *(undefined4 *)(iVar3 + 0x74) = 0;
      }
      if ((!bVar5) && (-1 < *(int *)(iVar3 + 0x11c))) {
        FUN_00830640(iVar3,*(int *)(iVar3 + 0x11c));
      }
      if ((((((*(uint *)(iVar3 + 8) & 0x8000000) != 0) == bVar5) && (bVar1)) &&
          ((*(uint *)(iVar3 + 8) & 0x2000000) == 0)) &&
         ((*(int *)(iVar3 + 0x11c) < 0 &&
          (iVar2 = (**(code **)(**(int **)(iVar3 + 300) + 0x1c))(), iVar2 != 0)))) {
        iVar2 = FUN_0082fd50(iVar3);
        if (*(uint *)(iVar3 + 0x6c) == 0) {
          if (iVar2 < (int)(*(uint *)(iVar3 + 8) & 0x7fff)) goto LAB_0082e6b4;
        }
        else if (*(uint *)(iVar3 + 0x6c) <= DAT_009c2980) {
LAB_0082e6b4:
          if ((*(short *)(iVar3 + 0x1a) == 0) &&
             (iVar2 = (**(code **)(**(int **)(iVar3 + 300) + 0x2c))(), iVar2 == 0)) {
            *(undefined2 *)(iVar3 + 0x1a) = 0xffff;
          }
          FUN_00830440(local_10);
        }
      }
    }
    local_10 = local_10 + 1;
    uVar4 = uVar4 + 4;
    if (0x9f < uVar4) {
      do {
        if (bVar5) {
          return;
        }
        iVar3 = FUN_0082c7b0();
      } while (iVar3 != 0);
      return;
    }
  } while( true );
}

