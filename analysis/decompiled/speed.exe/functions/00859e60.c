/* speed.exe 00859e60 FUN_00859e60; analysis pseudocode, not buildable source.
 * calls 00858e00 FUN_00858e00
 * calls 007d6cb0 __security_check_cookie
 * calls 008586f0 FUN_008586f0
 * calls 00856e70 FUN_00856e70
 * calls 008588b0 FUN_008588b0
 * calls 0084b000 FUN_0084b000
 * calls 0084b1e0 FUN_0084b1e0
 * calls 0085ba60 FUN_0085ba60
 * calls 0085bac0 FUN_0085bac0
 * calls 00858ab0 FUN_00858ab0
 * calls 00856dc0 FUN_00856dc0
 * calls 0085ad50 FUN_0085ad50
 * calls 0084b350 FUN_0084b350
 * calls 00856d90 FUN_00856d90
 * calls 0084b110 FUN_0084b110
 * calls 0085bb80 FUN_0085bb80
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_00859e60(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined1 auStack_988 [96];
  undefined1 auStack_928 [2];
  undefined1 uStack_926;
  undefined1 uStack_925;
  undefined4 uStack_924;
  undefined1 auStack_920 [2];
  undefined1 auStack_91e [2];
  int aiStack_91c [253];
  undefined4 auStack_528 [327];
  undefined4 local_c;
  
  piVar5 = (int *)param_1[0x48];
  local_c = DAT_00906980;
  if (((*param_1 != 0) && (9 < param_1[0x46])) && (param_1[0x46] < 0x11)) {
    iVar8 = *piVar5;
    if (iVar8 < piVar5[1]) {
      iVar8 = FUN_0084b110(*param_1,iVar8 + 8 + (int)piVar5,piVar5[1] - iVar8,0,0,0);
      if (0 < iVar8) {
        *piVar5 = *piVar5 + iVar8;
      }
      if (*piVar5 == piVar5[1]) {
        piVar5[1] = 0;
        *piVar5 = 0;
      }
    }
    iVar8 = piVar5[0x1004];
    if (iVar8 < 4) {
      iVar8 = FUN_0084b1e0(*param_1,iVar8 + 0x4018 + (int)piVar5,4 - iVar8,0,0,0);
      if (0 < iVar8) {
        iVar9 = piVar5[0x1004];
        piVar5[0x1004] = iVar9 + iVar8;
        piVar5[0x1003] = iVar9 + iVar8;
      }
      if (iVar8 < 0) {
        param_1[0x47] = 1;
      }
    }
    if (piVar5[0x1004] == 4) {
      bVar1 = *(byte *)((int)piVar5 + 0x4019);
      bVar2 = *(byte *)(piVar5 + 0x1006);
      piVar5[0x1004] = (uint)CONCAT11(bVar2,bVar1);
      if (CONCAT11(bVar2,bVar1) < 0x8000) {
        piVar5[0x1004] = *(byte *)((int)piVar5 + 0x401a) + 3 + ((bVar2 & 0x3f) << 8 | (uint)bVar1);
      }
      else {
        piVar5[0x1004] = ((bVar2 & 0x7f) << 8 | (uint)bVar1) + 2;
      }
    }
    iVar8 = piVar5[0x1003];
    if (iVar8 < piVar5[0x1004]) {
      iVar8 = FUN_0084b1e0(*param_1,iVar8 + 0x4018 + (int)piVar5,piVar5[0x1004] - iVar8,0,0,0);
      if (0 < iVar8) {
        piVar5[0x1003] = piVar5[0x1003] + iVar8;
      }
      if (iVar8 < 0) {
        param_1[0x47] = 1;
      }
    }
  }
  if (param_1[0x46] == 1) {
    iVar8 = (**(code **)(param_1[1] + 8))(param_1[1]);
    if (iVar8 != 0) {
      iVar8 = param_1[1];
      if (*(int *)(iVar8 + 4) == 0) {
        param_1[0x46] = 0x1001;
      }
      else {
        param_1[0x46] = 2;
        uVar6 = *(undefined4 *)(iVar8 + 4);
        *(char *)((int)param_1 + 0x10f) = (char)uVar6;
        *(char *)((int)param_1 + 0x10e) = (char)((uint)uVar6 >> 8);
        *(char *)((int)param_1 + 0x10d) = (char)((uint)uVar6 >> 0x10);
        *(char *)(param_1 + 0x43) = (char)((uint)uVar6 >> 0x18);
      }
      (**(code **)(iVar8 + 0xc))(iVar8);
      param_1[1] = 0;
    }
  }
  if (param_1[0x46] == 2) {
    FUN_0084b000(*param_1,param_1 + 0x42,0x10);
    param_1[0x46] = 3;
  }
  if (param_1[0x46] == 3) {
    iVar8 = FUN_0084b350(*param_1,0x73746174,0,0);
    if (0 < iVar8) {
      param_1[0x46] = (-(uint)(piVar5 != (int *)0x0) & 0xfffffff6) + 0x14;
      param_1[0x47] = 0;
    }
    if (iVar8 < 0) {
      param_1[0x46] = 0x1002;
      param_1[0x47] = 1;
    }
  }
  if (param_1[0x46] == 10) {
    auStack_91e[1] = DAT_008c779a;
    _auStack_928 = 0x20001;
    uStack_924 = CONCAT13((char)((uint)piVar5[0x206d] >> 8),3);
    _auStack_920 = CONCAT21(DAT_008c7798,(char)piVar5[0x206d]);
    uVar11 = piVar5[0x206d];
    piVar13 = piVar5 + 0x206e;
    piVar16 = (int *)(auStack_91e + 2);
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *piVar16 = *piVar13;
      piVar13 = piVar13 + 1;
      piVar16 = piVar16 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(char *)piVar16 = (char)*piVar13;
      piVar13 = (int *)((int)piVar13 + 1);
      piVar16 = (int *)((int)piVar16 + 1);
    }
    FUN_008588b0(param_1,auStack_928,piVar5[0x206d] + 0xc);
    param_1[0x46] = 0xb;
  }
  if (((param_1[0x46] == 0xb) && (piVar5[0x1003] == piVar5[0x1004])) && (4 < piVar5[0x1004])) {
    iVar8 = FUN_00858ab0(param_1);
    uVar3 = *(undefined1 *)(iVar8 + 7);
    uVar4 = *(undefined1 *)(iVar8 + 8);
    uVar11 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 5),*(undefined1 *)(iVar8 + 6));
    uVar7 = CONCAT11(*(undefined1 *)(iVar8 + 9),*(undefined1 *)(iVar8 + 10));
    iVar9 = FUN_00858e00(param_1,piVar5 + 0x207d,iVar8 + 0xb,uVar11);
    if (iVar9 < 0) {
      param_1[0x46] = 0x1003;
    }
    else {
      puVar14 = (undefined2 *)(iVar8 + 0xb + uVar11);
      *(undefined2 *)(piVar5 + 0x2008) = *puVar14;
      *(undefined1 *)((int)piVar5 + 0x8022) = *(undefined1 *)(puVar14 + 1);
      piVar5[0x2074] = (uint)uVar7;
      piVar13 = (int *)((int)puVar14 + (uint)CONCAT11(uVar3,uVar4));
      piVar16 = piVar5 + 0x2075;
      for (uVar11 = (uint)(uVar7 >> 2); uVar11 != 0; uVar11 = uVar11 - 1) {
        *piVar16 = *piVar13;
        piVar13 = piVar13 + 1;
        piVar16 = piVar16 + 1;
      }
      for (uVar11 = uVar7 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(char *)piVar16 = (char)*piVar13;
        piVar13 = (int *)((int)piVar13 + 1);
        piVar16 = (int *)((int)piVar16 + 1);
      }
      param_1[0x46] = 0xc;
      piVar5[0x1004] = 0;
      piVar5[0x1003] = 0;
    }
  }
  if (param_1[0x46] == 0xc) {
    uVar11 = (uint)(*(byte *)((int)piVar5 + 0x8022) >> 3);
    piVar13 = piVar5 + 0x200a;
    piVar5[0x2009] = uVar11;
    FUN_008586f0(piVar13,uVar11,piVar5 + 0x21af);
    FUN_00856d90(auStack_988);
    FUN_00856dc0(auStack_988,piVar13,piVar5[0x2009]);
    FUN_00856dc0(auStack_988,&DAT_0089ddf0,0xffffffff);
    FUN_00856dc0(auStack_988,piVar5 + 0x206e,piVar5[0x206d]);
    FUN_00856dc0(auStack_988,piVar5 + 0x2075,piVar5[0x2074]);
    piVar5[0x202a] = 0x10;
    FUN_00856e70(auStack_988,piVar5 + 0x202b,0x10);
    FUN_0085ad50(piVar5 + 0x21af,piVar5 + 0x202b,piVar5[0x202a],1);
    FUN_0085ba60(auStack_528,piVar5 + 0x216c,piVar5[0x216b],piVar5 + 0x218e,piVar5[0x218d]);
    FUN_0085bac0(auStack_528,piVar13,piVar5[0x2009]);
    FUN_0085bb80(auStack_528);
    _auStack_920 = 0;
    _auStack_928 = CONCAT13(*(undefined1 *)((int)piVar5 + 0x8022),
                            CONCAT12(*(undefined1 *)((int)piVar5 + 0x8021),
                                     CONCAT11((char)piVar5[0x2008],2)));
    uStack_924 = (uint)CONCAT11((char)piVar5[0x216b],(char)((uint)piVar5[0x216b] >> 8)) << 0x10;
    uVar11 = piVar5[0x216b];
    puVar12 = auStack_528;
    puVar15 = (undefined4 *)auStack_91e;
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar15 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
    FUN_008588b0(param_1,auStack_928,piVar5[0x216b] + 10);
    param_1[0x46] = 0xd;
  }
  if (((param_1[0x46] == 0xd) && (piVar5[0x1003] == piVar5[0x1004])) && (4 < piVar5[0x1004])) {
    FUN_00858ab0(param_1);
    param_1[0x46] = 0xe;
    piVar5[0x1004] = 0;
    piVar5[0x1003] = 0;
  }
  if (param_1[0x46] == 0xe) {
    FUN_00856d90(auStack_988);
    FUN_00856dc0(auStack_988,piVar5 + 0x200a,piVar5[0x2009]);
    FUN_00856dc0(auStack_988,&DAT_008a04fc,0xffffffff);
    FUN_00856dc0(auStack_988,piVar5 + 0x206e,piVar5[0x206d]);
    FUN_00856dc0(auStack_988,piVar5 + 0x2075,piVar5[0x2074]);
    piVar5[0x204b] = 0x10;
    FUN_00856e70(auStack_988,piVar5 + 0x204c,0x10);
    FUN_0085ad50((int)piVar5 + 0x87be,piVar5 + 0x204c,piVar5[0x204b],1);
    _auStack_928 = CONCAT31(stack0xfffff6d9,3);
    uVar11 = piVar5[0x2074];
    piVar13 = piVar5 + 0x2075;
    piVar16 = (int *)((int)auStack_928 + 1);
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *piVar16 = *piVar13;
      piVar13 = piVar13 + 1;
      piVar16 = piVar16 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(char *)piVar16 = (char)*piVar13;
      piVar13 = (int *)((int)piVar13 + 1);
      piVar16 = (int *)((int)piVar16 + 1);
    }
    FUN_008588b0(param_1,auStack_928,piVar5[0x2074] + 1);
    param_1[0x46] = 0xf;
  }
  if (((param_1[0x46] == 0xf) && (piVar5[0x1003] == piVar5[0x1004])) && (4 < piVar5[0x1004])) {
    FUN_00858ab0(param_1);
    piVar5[0x1004] = 0;
    piVar5[0x1003] = 0;
    param_1[0x46] = 0x10;
  }
  return;
}

