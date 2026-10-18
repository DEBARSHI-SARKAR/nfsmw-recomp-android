/* speed.exe 006c68b0 FUN_006c68b0; analysis pseudocode, not buildable source.
 * calls 004fd2c0 FUN_004fd2c0
 * calls 004450c0 FUN_004450c0
 * calls 006c6810 FUN_006c6810
 * calls 006bc6a0 FUN_006bc6a0
 * calls 006c67c0 FUN_006c67c0
 * calls 006bc660 FUN_006bc660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c68b0(int *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  float10 fVar11;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int *piStack_9c;
  float fStack_98;
  uint uStack_94;
  uint uStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  
  iStack_84 = *(int *)(*param_1 + 0x18);
  if (iStack_84 != 0) {
    if (DAT_00982c80 == 0) {
      uStack_88 = 0;
      piStack_8c = DAT_00982bdc;
      uStack_90 = 0x6c6900;
      (**(code **)(*DAT_00982bdc + 0x104))();
    }
    else {
      piStack_8c = *(int **)(DAT_00982c80 + 0x48);
      uStack_88 = *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x22c);
      uStack_90 = 0x6c68ed;
      (**(code **)(*piStack_8c + 0xd0))();
    }
    bVar10 = *(char *)((int)param_1 + 0x55) != '\x01';
    if (bVar10) {
      uStack_90 = 0;
    }
    else {
      uStack_90 = 0x5f;
    }
    uStack_94 = (uint)!bVar10;
    fStack_98 = 9.95593e-39;
    FUN_006c67c0();
    bVar1 = *(byte *)((int)param_1 + 0x4f);
    uStack_90 = ((byte)~bVar1 & 1) << 1 | 1;
    uStack_94 = 1;
    fStack_98 = 0.0;
    piStack_9c = DAT_00982bdc;
    fStack_a0 = 9.955996e-39;
    (**(code **)(*DAT_00982bdc + 0x114))();
    fStack_a0 = (float)((uint)((bVar1 >> 1 & 1) == 0) * 2 + 1);
    fStack_a4 = 2.8026e-45;
    fStack_a8 = 0.0;
    (**(code **)(*DAT_00982bdc + 0x114))(DAT_00982bdc);
    cVar9 = *(char *)((int)param_1 + 0x55);
    if (*(char *)((int)param_1 + 0x56) == '\0') {
      (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,1);
      FUN_006c6810(0,5,6);
      if (((cVar9 == '\x01') || ((*(byte *)((int)param_1 + 0x57) >> 1 & 1) != 0)) ||
         (DAT_008fae44 == '\0')) {
        cVar9 = '\0';
      }
      else {
        cVar9 = '\x01';
      }
    }
    else {
      cVar9 = '\0';
      if ((DAT_00982c80 != 0) && (*(int *)(DAT_00982c80 + 4) == 4)) {
        cVar9 = '\x01';
      }
      uVar6 = 5;
      uVar8 = 6;
      switch(*(char *)((int)param_1 + 0x56)) {
      case '\x01':
        uVar6 = 5;
        uVar8 = 6;
        break;
      case '\x02':
        uVar6 = 5;
        uVar8 = 2;
        break;
      case '\x03':
        uVar6 = 1;
        uVar8 = 4;
        break;
      case '\x05':
        uVar6 = 7;
        uVar8 = 8;
        break;
      case '\x06':
        uVar6 = 7;
        uVar8 = 2;
      }
      FUN_006c6810(1,uVar6,uVar8);
    }
    cVar5 = DAT_008fae44;
    if (*(char *)((int)param_1 + 0x56) != '\0') {
      if (*(int *)(DAT_00982c80 + 4) == 4) {
        (**(code **)(*DAT_00982bdc + 0xe4))();
        cVar9 = cVar5;
      }
      else {
        cVar9 = '\0';
        (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,0);
      }
    }
    iVar2 = *(int *)(*(int *)(DAT_00982c80 + 0x44) + 0x1dc);
    if (iVar2 != 0) {
      if ((cVar9 == '\0') || (DAT_008fae6c == 1)) {
        iVar7 = 1;
      }
      else {
        iVar7 = 3 - (uint)((param_2 >> 0x12 & 1) != (uint)(DAT_008fae6c == 2));
      }
      (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x68))
                (*(int **)(DAT_00982c80 + 0x48),iVar2,iVar7);
    }
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x70))
              (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x9c),
               &DAT_0093de20,5);
    piStack_9c = (int *)0x0;
    fStack_98 = 0.0;
    uStack_94 = 0;
    uStack_90 = 0;
    if (*(int *)(*(int *)(DAT_00982c80 + 0x44) + 0xed4) != 0) {
      if (DAT_009017e8 != 0) {
        fVar4 = (float)DAT_00925ae8 * _DAT_00890984;
        if (*(char *)((int)param_1 + 0x52) == '\x03') {
          fStack_a8 = (float)(int)(short)param_1[0x18];
          piStack_9c = (int *)((float)(int)*(short *)((int)param_1 + 0x5e) * _DAT_008af2bc);
          fVar11 = (float10)(int)fStack_a8 * (float10)_DAT_008af2bc;
        }
        else {
          fStack_a8 = fVar4;
          if ((_DAT_00982c98 == _DAT_00890968) && (_DAT_00982c9c == _DAT_00890968)) {
            fVar11 = (float10)FUN_006bc660(fVar4);
            piStack_9c = (int *)(float)fVar11;
            fVar11 = (float10)FUN_006bc6a0(fVar4);
          }
          else {
            fStack_a0 = _DAT_00982c98 / (float)(int)(short)param_1[0x11];
            fStack_a4 = _DAT_00982c9c / (float)(int)*(short *)((int)param_1 + 0x46);
            fVar11 = (float10)FUN_004fd2c0(fVar4,fStack_a0,DAT_008fae48,DAT_008fae4c);
            piStack_9c = (int *)(float)fVar11;
            fVar11 = (float10)FUN_004fd2c0(fVar4,fStack_a4,DAT_008fae48,DAT_008fae4c);
          }
        }
        fStack_98 = (float)fVar11;
      }
      DAT_00982ccc = 1;
    }
    iVar2 = DAT_00982c80;
    if (((DAT_00982c80 != 0) && (DAT_00982ccc != 0)) &&
       (*(int *)(*(int *)(DAT_00982c80 + 0x44) + 0xed4) != 0)) {
      FUN_004450c0(&piStack_8c);
      piVar3 = *(int **)(iVar2 + 0x48);
      (**(code **)(*piVar3 + 0x98))
                (piVar3,*(undefined4 *)(*(int *)(iVar2 + 0x44) + 0xefc),&piStack_8c);
      (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x88))
                (*(int **)(DAT_00982c80 + 0x48),
                 *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xed4),&fStack_a8);
    }
    if (*(char *)((int)param_1 + 0x52) == '\0') {
      DAT_00982ccc = 0;
    }
  }
  return;
}

