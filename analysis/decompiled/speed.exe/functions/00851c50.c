/* speed.exe 00851c50 FUN_00851c50; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0085a5d0 FUN_0085a5d0
 * calls 0085ab90 FUN_0085ab90
 * calls 0085ac40 FUN_0085ac40
 * calls 007d6cb0 __security_check_cookie
 * calls 00859c90 FUN_00859c90
 * calls 0085a9d0 FUN_0085a9d0
 * calls 0083faa0 FUN_0083faa0
 * calls 0083fac0 FUN_0083fac0
 * calls 00859bc0 FUN_00859bc0
 * calls 0085a6f0 FUN_0085a6f0
 * calls 0085ab60 FUN_0085ab60
 * calls 0085a550 FUN_0085a550
 * calls 0078af60 thunk_FUN_004655f0
 * calls 00859e60 FUN_00859e60
 * calls 00859b60 FUN_00859b60
 * calls 00859ba0 FUN_00859ba0
 * calls 0078af30 FUN_0078af30
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00851c50(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  undefined1 local_14 [2];
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = DAT_00906980;
  if ((param_1[0x17] == 3) && (*param_1 == 0)) {
    if (param_1[0x1f] != 0) {
      thunk_FUN_004655f0(param_1[0x1f]);
    }
    piVar1[0x1d] = 0xc;
    piVar1[0x1e] = 0xc;
    puVar3 = (undefined1 *)FUN_0078af30(0xd);
    piVar1[0x1f] = (int)puVar3;
    puVar3[3] = 0xff;
    puVar3[2] = 0xff;
    puVar3[1] = 0xff;
    *puVar3 = 0xff;
    puVar3[7] = 0xfe;
    puVar3[6] = 0xfe;
    puVar3[5] = 0xfe;
    puVar3[4] = 0xfe;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0xc;
    piVar1[0x17] = 4;
  }
  if ((piVar1[0x17] == 4) && (piVar1[0x1c] != 0)) {
    piVar1[0x17] = 2;
    piVar1[0x18] = 0;
  }
  if (piVar1[0x17] == 1) {
    param_1 = (int *)&DAT_00000010;
    iVar4 = FUN_00859bc0(*piVar1,0,local_14,&param_1);
    if (iVar4 == 0) {
      return;
    }
    FUN_00859ba0(*piVar1);
    *piVar1 = iVar4;
    piVar1[0x17] = 3;
    piVar1[0x1a] = 0;
    if (piVar1[0x1f] != 0) {
      thunk_FUN_004655f0(piVar1[0x1f]);
    }
    piVar1[0x1d] = 0xc;
    piVar1[0x1e] = 0xc;
    puVar3 = (undefined1 *)FUN_0078af30(0xd);
    piVar1[0x1f] = (int)puVar3;
    puVar3[3] = 0xff;
    puVar3[2] = 0xff;
    puVar3[1] = 0xff;
    *puVar3 = 0xff;
    puVar3[7] = 0xff;
    puVar3[6] = 0xff;
    puVar3[5] = 0xff;
    puVar3[4] = 0xff;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0xc;
  }
  if (piVar1[0x17] == 2) {
    DVar5 = GetTickCount();
    if ((uint)piVar1[0x18] < DVar5) {
      if (*piVar1 != 0) {
        FUN_00859ba0(*piVar1);
      }
      iVar4 = FUN_00859b60();
      *piVar1 = iVar4;
      if (iVar4 == 0) {
        return;
      }
      uVar2 = FUN_0083faa0(*(undefined2 *)((int)piVar1 + 6));
      uVar6 = FUN_0083fac0(piVar1[2],uVar2);
      iVar4 = FUN_00859c90(*piVar1,(short)piVar1[0x23] != 0,piVar1 + 7,uVar6);
      if (iVar4 < 0) {
        return;
      }
      DVar5 = GetTickCount();
      piVar1[0x18] = DVar5 + 30000;
      FUN_0085a9d0(piVar1 + 0x39,0);
    }
    if (*piVar1 == 0) {
      return;
    }
    FUN_00859e60(*piVar1);
    iVar4 = FUN_0085a6f0(*piVar1,0x73746174,0,0);
    if (iVar4 < 1) {
      return;
    }
    if (piVar1[2] == 0) {
      FUN_0085a6f0(*piVar1,0x70656572,piVar1 + 1,0x10);
    }
    iVar4 = FUN_0085a6f0(*piVar1,0x62696e64,local_14,0x10);
    if (iVar4 == 0) {
      iVar4 = FUN_0083fac0(CONCAT22(uStack_e,local_10));
      piVar1[5] = iVar4;
      uVar7 = FUN_0083faa0(CONCAT22(local_10,uStack_12));
      piVar1[6] = uVar7 & 0xffff;
    }
    piVar1[0x17] = 3;
    piVar1[0x1a] = 0;
    if (piVar1[0x1f] != 0) {
      thunk_FUN_004655f0(piVar1[0x1f]);
    }
    piVar1[0x1d] = 0xc;
    piVar1[0x1e] = 0xc;
    puVar3 = (undefined1 *)FUN_0078af30(0xd);
    piVar1[0x1f] = (int)puVar3;
    puVar3[3] = 0xff;
    puVar3[2] = 0xff;
    puVar3[1] = 0xff;
    *puVar3 = 0xff;
    puVar3[7] = 0xff;
    puVar3[6] = 0xff;
    puVar3[5] = 0xff;
    puVar3[4] = 0xff;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0xc;
  }
  if (*piVar1 != 0) {
    FUN_00859e60(*piVar1);
    if (piVar1[0x1c] != 0) {
      iVar4 = piVar1[0x1a];
      if (iVar4 != piVar1[0x19]) {
        param_1 = (int *)FUN_0085a550(*piVar1,iVar4 + piVar1[0x1c],piVar1[0x19] - iVar4);
        if ((int)param_1 < 0) goto LAB_008520e0;
        if (0 < (int)param_1) {
          piVar1[0x1a] = piVar1[0x1a] + (int)param_1;
        }
        if (piVar1[0x1a] == piVar1[0x19]) {
          thunk_FUN_004655f0(piVar1[0x1c]);
          piVar1[0x1c] = 0;
        }
      }
    }
    if (piVar1[0x1f] == 0) {
      if (piVar1[0x1d] == piVar1[0x1e]) {
        piVar1[0x1d] = 0xc;
        piVar1[0x1e] = 0;
      }
      param_1 = (int *)FUN_0085a5d0(*piVar1,piVar1[0x1e] + 0x80 + (int)piVar1,
                                    piVar1[0x1d] - piVar1[0x1e]);
      if ((int)param_1 < 0) {
        FUN_00859ba0(*piVar1);
        *piVar1 = 0;
        return;
      }
      if (0 < (int)param_1) {
        piVar1[0x1e] = piVar1[0x1e] + (int)param_1;
      }
      if (piVar1[0x1e] == piVar1[0x1d]) {
        FUN_0085ab60(piVar1 + 0x39,piVar1 + 0x20,0xc);
        iVar4 = CONCAT31(CONCAT21(CONCAT11((char)piVar1[0x22],*(undefined1 *)((int)piVar1 + 0x89)),
                                  *(undefined1 *)((int)piVar1 + 0x8a)),
                         *(undefined1 *)((int)piVar1 + 0x8b));
        piVar1[0x1d] = iVar4;
        if ((iVar4 < 0xc) || (0x8000 < iVar4)) {
LAB_008520e0:
          FUN_00859ba0(*piVar1);
          *piVar1 = 0;
          return;
        }
        piVar8 = (int *)FUN_0078af30(iVar4 + 1);
        piVar1[0x1f] = (int)piVar8;
        if (piVar8 == (int *)0x0) {
          FUN_00859ba0(*piVar1);
          *piVar1 = 0;
          return;
        }
        uVar7 = piVar1[0x1e];
        piVar10 = piVar1 + 0x20;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *piVar8 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar8 = piVar8 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)piVar8 = (char)*piVar10;
          piVar10 = (int *)((int)piVar10 + 1);
          piVar8 = (int *)((int)piVar8 + 1);
        }
        if (((piVar1[0x1e] == piVar1[0x1d]) && (piVar1[0x1c] != 0)) &&
           (piVar1[0x1a] == piVar1[0x19])) {
          thunk_FUN_004655f0(piVar1[0x1c]);
          piVar1[0x1c] = 0;
        }
      }
    }
    if (piVar1[0x1f] != 0) {
      iVar4 = piVar1[0x1e];
      if (iVar4 < piVar1[0x1d]) {
        param_1 = (int *)FUN_0085a5d0(*piVar1,iVar4 + piVar1[0x1f],piVar1[0x1d] - iVar4);
        if ((int)param_1 < 0) {
          FUN_00859ba0(*piVar1);
          *piVar1 = 0;
          return;
        }
        if (0 < (int)param_1) {
          piVar1[0x1e] = piVar1[0x1e] + (int)param_1;
        }
        if (piVar1[0x1e] == piVar1[0x1d]) {
          piVar8 = piVar1 + 0x39;
          FUN_0085ab60(piVar8,piVar1[0x1f] + 0xc,piVar1[0x1e] + -0xc);
          iVar4 = FUN_0085ab90(piVar8,piVar1[0x1f],piVar1[0x1d]);
          if (iVar4 < 0) {
            FUN_00859ba0(*piVar1);
            *piVar1 = 0;
            return;
          }
          iVar4 = FUN_0085ac40(piVar8,piVar1[0x1d]);
          piVar1[0x1e] = iVar4;
          piVar1[0x1d] = iVar4;
        }
        if (((piVar1[0x1e] == piVar1[0x1d]) && (piVar1[0x1c] != 0)) &&
           (piVar1[0x1a] == piVar1[0x19])) {
          thunk_FUN_004655f0(piVar1[0x1c]);
          piVar1[0x1c] = 0;
        }
      }
    }
  }
  return;
}

