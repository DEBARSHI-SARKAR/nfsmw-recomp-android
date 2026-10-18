/* speed.exe 006e7220 FUN_006e7220; analysis pseudocode, not buildable source.
 * calls 004faed0 FUN_004faed0
 * calls 006d0b00 FUN_006d0b00
 * calls 006c6f20 FUN_006c6f20
 * calls 00756060 FUN_00756060
 * calls 005029f0 FUN_005029f0
 * calls 006de300 FUN_006de300
 * calls 006c6f00 FUN_006c6f00
 * calls 006d4dc0 FUN_006d4dc0
 * calls 006bf290 FUN_006bf290
 * calls 006bfab0 FUN_006bfab0
 * calls 006db0d0 FUN_006db0d0
 * calls 006cfad0 FUN_006cfad0
 * calls 006c5da0 FUN_006c5da0
 * calls 006c0910 FUN_006c0910
 * calls 004fca50 FUN_004fca50
 * calls 006cf400 FUN_006cf400
 * calls 006cfce0 FUN_006cfce0
 * calls 006d7500 FUN_006d7500
 * calls 006c05e0 FUN_006c05e0
 * calls 006c27d0 FUN_006c27d0
 * calls 00517a20 FUN_00517a20
 * calls 006e6e40 FUN_006e6e40
 * calls 006c3870 FUN_006c3870
 * calls 006c6760 FUN_006c6760
 * calls 004fad80 FUN_004fad80
 * calls 006c9c80 FUN_006c9c80
 * calls 00504d00 FUN_00504d00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e7220(void)

{
  char cVar1;
  int iVar2;
  float unaff_ESI;
  undefined4 *puVar3;
  float unaff_EDI;
  undefined4 uVar4;
  float fVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = 0;
  DAT_00982c80 = 0;
  if (DAT_00901ac8 != '\0') {
    FUN_006bf290();
    DAT_00901ac8 = '\0';
  }
  if (DAT_00982b14 != 0) {
    FUN_006c5da0();
    FUN_006d7500();
    if (DAT_00982af0 != 0) {
      FUN_006d4dc0();
    }
    DAT_00982b14 = 0;
  }
  if (DAT_00982c39 != '\0') {
    FUN_006c5da0();
    FUN_006d7500();
    if (DAT_00982af0 != 0) {
      FUN_006d4dc0();
    }
    FUN_006c27d0(&local_8,&local_4);
    FUN_006bfab0(local_8,local_4,(&DAT_009829fc)[DAT_0090181c]);
    FUN_006db0d0();
    DAT_00982c39 = '\0';
  }
  DAT_00982bb8 = 0;
  if (DAT_00982bc0 == 0) {
    if (DAT_00982bbc != 0) {
      DAT_00982bb8 = 1;
    }
  }
  else {
    DAT_00982bb8 = 2;
    DAT_00982bbc = 0;
  }
  FUN_006cfad0();
  switch(DAT_009017f4) {
  case 0:
    DAT_00982b34 = 1;
    _DAT_009a3a34 = 1;
    DAT_00982ae0 = 2;
    break;
  case 1:
    DAT_00982b34 = 1;
    _DAT_009a3a34 = 1;
    DAT_00982ae0 = 1;
    break;
  case 2:
    DAT_00982b34 = 1;
    _DAT_009a3a34 = 1;
    goto LAB_006e735c;
  case 3:
    DAT_00982b34 = 0;
    _DAT_009a3a34 = 0;
LAB_006e735c:
    DAT_00982ae0 = 0;
  }
  if (DAT_009017b8 != 0) {
    FUN_00756060();
  }
  FUN_004fca50();
  do {
    if (iVar2 == 8) {
      FUN_006d0b00(&DAT_00919960,0);
    }
    if (((&DAT_009195e8)[iVar2 * 0x70] != '\0') || (0x11 < iVar2)) {
      uVar4 = DAT_00901ac4;
      if (*(int *)(&DAT_009195e4 + iVar2 * 0x70) != 3) {
        uVar4 = 0;
      }
      FUN_006cf400(&DAT_009195e0 + iVar2 * 0x1c,uVar4,0x466a6000,0,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  FUN_006cfce0();
  if ((DAT_009017f0 == 0) ||
     ((*(float *)(DAT_00919690 + 0xb4) == _DAT_00890968 &&
      (*(float *)(DAT_00919690 + 0xb8) == _DAT_00890968)))) {
    DAT_00982b24 = '\0';
  }
  else {
    DAT_00982b24 = '\x01';
    piVar6 = *(int **)(DAT_0093de78 + 0x48);
    fVar7 = *(float *)(*(int *)(DAT_0093de78 + 0x44) + 0x5c4);
    fVar8 = 0.0009765625;
    (**(code **)(*piVar6 + 0x78))(piVar6,fVar7,0x3a800000);
    fVar5 = _DAT_0089096c / (unaff_ESI * (float)_DAT_008b00b8);
    (**(code **)(**(int **)(DAT_0093de78 + 0x48) + 0x78))
              (*(int **)(DAT_0093de78 + 0x48),*(undefined4 *)(*(int *)(DAT_0093de78 + 0x44) + 0x2f4)
               ,fVar5);
    (**(code **)(**(int **)(DAT_0093de78 + 0x48) + 0x78))
              (*(int **)(DAT_0093de78 + 0x48),*(undefined4 *)(*(int *)(DAT_0093de78 + 0x44) + 0x31c)
               ,-((unaff_EDI + unaff_ESI) * fVar8));
    (**(code **)(**(int **)(DAT_0093de78 + 0x48) + 0x78))
              (*(int **)(DAT_0093de78 + 0x48),*(undefined4 *)(*(int *)(DAT_0093de78 + 0x44) + 0x344)
               ,((float)piVar6 - fVar7) * fVar5);
    DAT_00982b25 = 1;
    if (DAT_00982b24 != '\0') goto LAB_006e752c;
  }
  DAT_00982b25 = 0;
LAB_006e752c:
  iVar2 = (**(code **)(*DAT_00982bdc + 0xc))(DAT_00982bdc);
  if (iVar2 == -0x7789f797) {
    iVar2 = FUN_006db0d0();
  }
  if (iVar2 == 0) {
    (**(code **)(*DAT_00982bdc + 0xa4))(DAT_00982bdc);
    DAT_008fae6c = 2;
    FUN_006e6e40(1);
    cVar1 = FUN_00517a20();
    if (cVar1 == '\0') {
      puVar3 = &DAT_00919650;
      do {
        if (*(char *)(puVar3 + 2) != '\0') {
          FUN_005029f0();
        }
        puVar3 = puVar3 + 0x1c;
      } while ((int)puVar3 < 0x919731);
      if (DAT_009257ec == 0) {
        FUN_006cfce0();
      }
      FUN_006de300();
      FUN_006c3870();
    }
    FUN_006e6e40(0);
    (**(code **)(*DAT_00982bdc + 0xa8))(DAT_00982bdc);
  }
  FUN_006c6f00();
  if (DAT_00982bf8 != 0) {
    FUN_006c05e0(0);
    DAT_00982bf8 = 0;
  }
  FUN_006c0910();
  iVar2 = (**(code **)(*DAT_00982bdc + 0x44))(DAT_00982bdc,0,0,0,0);
  if ((iVar2 == -0x7789f798) &&
     (iVar2 = (**(code **)(*DAT_00982bdc + 0xc))(DAT_00982bdc), iVar2 == -0x7789f797)) {
    FUN_006db0d0();
  }
  if (DAT_009885c4 != 0) {
    FUN_006c6f20();
    DAT_009885c4 = 0;
  }
  FUN_006c6760();
  FUN_00504d00();
  (**(code **)(*DAT_00982bdc + 0xac))(DAT_00982bdc,0,0,7,0,0x3f800000,0);
  FUN_004fad80();
  FUN_004faed0();
  DAT_00982b78 = DAT_00982b78 + 1;
  DAT_00982ca0 = 0;
  DAT_00982ca4 = 0;
  FUN_006c9c80();
  return;
}

