/* speed.exe 00727480 FUN_00727480; analysis pseudocode, not buildable source.
 * calls 0045faa0 FUN_0045faa0
 * calls 004601b0 FUN_004601b0
 * calls 0045f9f0 FUN_0045f9f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00727480(int param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  iVar5 = param_3 * 0x4c + 0xc + param_1;
  if (param_2 == (float *)0x0) {
    bVar3 = false;
  }
  else {
    pfVar1 = (float *)(iVar5 + 0x14);
    iVar6 = FUN_0045f9f0((float *)(iVar5 + 0xc),pfVar1,param_2,0);
    if (iVar6 == 0) {
      uVar9 = *(uint *)(iVar5 + 8);
      *(float *)(iVar5 + 0xc) = *param_2 - _DAT_008b2a04;
      uVar8 = *(uint *)(iVar5 + 4);
      *(float *)(iVar5 + 0x10) = param_2[1] - _DAT_008b2a04;
      *pfVar1 = *param_2 + _DAT_008b2a04;
      fVar2 = param_2[1];
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      fVar2 = fVar2 + _DAT_008b2a04;
      *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + 1;
      *(float *)(iVar5 + 0x18) = fVar2;
      for (; uVar8 < uVar9; uVar8 = uVar8 + (int)*(short *)(uVar8 + 0x42)) {
        iVar6 = FUN_0045faa0(iVar5 + 0xc,pfVar1,uVar8 + 0x20,uVar8 + 0x28);
        if (iVar6 != 0) {
          if (*(int *)(iVar5 + 0x1c) < 8) {
            *(char *)(uVar8 + 0x19) = (char)*(int *)(iVar5 + 0x1c);
            *(uint *)(iVar5 + 0x2c + *(int *)(iVar5 + 0x1c) * 4) = uVar8;
          }
          *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
        }
      }
      iVar6 = *(int *)(iVar5 + 0x1c);
      bVar3 = iVar6 < 9;
      if (iVar6 < *(int *)(param_1 + 0x480)) {
        iVar6 = *(int *)(param_1 + 0x480);
      }
      *(int *)(param_1 + 0x480) = iVar6;
    }
    else {
      bVar3 = *(int *)(iVar5 + 0x1c) < 9;
    }
  }
  if (bVar3) {
    iVar6 = 0;
    *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
    if (param_4 != 0) {
      iVar6 = *(char *)(param_4 + 0x19) + 1;
    }
    if (iVar6 < *(int *)(iVar5 + 0x1c)) {
      puVar7 = (uint *)(iVar5 + 0x2c + iVar6 * 4);
      param_4 = iVar6;
      while( true ) {
        uVar9 = *puVar7;
        iVar6 = FUN_0045f9f0(uVar9 + 0x20,uVar9 + 0x28,param_2,0);
        if ((iVar6 != 0) &&
           (cVar4 = FUN_004601b0(param_2,uVar9 + 0x44,(int)*(short *)(uVar9 + 0x40)), cVar4 != '\0')
           ) break;
        param_4 = param_4 + 1;
        puVar7 = puVar7 + 1;
        if (*(int *)(iVar5 + 0x1c) <= param_4) {
          return 0;
        }
      }
      return uVar9;
    }
  }
  else {
    uVar9 = *(uint *)(iVar5 + 4);
    *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 1;
    uVar8 = *(uint *)(iVar5 + 8);
    if (param_4 != 0) {
      uVar9 = *(short *)(param_4 + 0x42) + param_4;
    }
    if (uVar9 < uVar8) {
      while ((param_2 != (float *)0x0 &&
             ((iVar5 = FUN_0045f9f0(uVar9 + 0x20,uVar9 + 0x28,param_2,0), iVar5 == 0 ||
              (cVar4 = FUN_004601b0(param_2,uVar9 + 0x44,(int)*(short *)(uVar9 + 0x40)),
              cVar4 == '\0'))))) {
        uVar9 = uVar9 + (int)*(short *)(uVar9 + 0x42);
        if (uVar8 <= uVar9) {
          return 0;
        }
      }
      return uVar9;
    }
  }
  return 0;
}

