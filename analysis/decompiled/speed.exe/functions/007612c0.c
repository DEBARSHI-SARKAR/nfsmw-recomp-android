/* speed.exe 007612c0 FUN_007612c0; analysis pseudocode, not buildable source.
 * calls 007a1050 FUN_007a1050
 * calls 00741780 FUN_00741780
 * calls 00735d20 FUN_00735d20
 * calls 00761240 FUN_00761240
 * calls 007c4b80 FUN_007c4b80
 * calls 0078a840 FUN_0078a840
 * calls 0078b2c0 FUN_0078b2c0
 * calls 00447350 FUN_00447350
 * calls 00734d30 FUN_00734d30
 * calls 00654af0 FUN_00654af0
 * calls 0079bac0 FUN_0079bac0
 * calls 0079a1d0 FUN_0079a1d0
 * calls 00627860 FUN_00627860
 * calls 0045d9a0 FUN_0045d9a0
 * calls 00761140 FUN_00761140
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007612c0(int *param_1,char param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *local_34;
  undefined1 local_1d;
  int local_1c;
  undefined1 *local_18;
  
  local_1c = CONCAT31(local_1c._1_3_,1);
  if (param_1[0x31] == 1) {
    local_1c = (uint)local_1c._1_3_ << 8;
  }
  local_18 = (undefined1 *)&local_34;
  local_34 = (int *)0x20d60dbf;
  FUN_00734d30(local_1c);
  FUN_00654af0();
  if (DAT_009b0858 != 0) {
    local_34 = (int *)0x761313;
    FUN_00447350();
  }
  if (*(int *)(DAT_0091cf90 + 0x13c) == 0) {
    local_34 = (int *)&local_1d;
    local_1d = 0;
    FUN_0079bac0();
    FUN_0079a1d0();
  }
  iVar8 = *param_1;
  if (((iVar8 == 5) || (iVar8 == 3)) || (iVar8 == 4)) {
    if (param_2 != '\0') {
      iVar8 = param_1[1];
      if (iVar8 != 0) {
        iVar7 = *(int *)(iVar8 + 0x1144);
        if (((iVar7 != 4) && (iVar7 != 6)) && ((iVar7 != 0 && (iVar7 != 5)))) {
          *(undefined4 *)(iVar8 + 0x1144) = 6;
        }
        *(undefined4 *)(iVar8 + 0x1170) = 0xc;
      }
      piVar5 = param_1 + 2;
      iVar8 = 4;
      do {
        iVar7 = *piVar5;
        if (((iVar7 != 0) && (iVar7 != param_1[1])) &&
           ((iVar9 = *(int *)(iVar7 + 0x1144), iVar9 != 4 &&
            (((((iVar9 != 6 && (iVar9 != 0)) && (iVar9 != 5)) && (iVar9 != 3)) &&
             ((DAT_009b0fa0 < 6 || (1 < iVar9)))))))) {
          iVar9 = *(int *)(iVar7 + 0x1144);
          if ((iVar9 != 4) && (((iVar9 != 6 && (iVar9 != 0)) && (iVar9 != 5)))) {
            *(undefined4 *)(iVar7 + 0x1144) = 0;
          }
          *(undefined4 *)(iVar7 + 0x1170) = 0xc;
        }
        piVar5 = piVar5 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = param_1[2];
    piVar5 = param_1 + 2;
    if (iVar8 != 0) {
      iVar7 = *(int *)(iVar8 + 0x1144);
      if ((((iVar7 == 4) || (iVar7 == 6)) || (iVar7 == 0)) || (iVar7 == 5)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(iVar8 + 0x1155) = uVar4;
    }
    iVar8 = param_1[3];
    if (iVar8 != 0) {
      iVar7 = *(int *)(iVar8 + 0x1144);
      if (((iVar7 == 4) || (iVar7 == 6)) || ((iVar7 == 0 || (iVar7 == 5)))) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(iVar8 + 0x1155) = uVar4;
    }
    iVar8 = param_1[4];
    if (iVar8 != 0) {
      iVar7 = *(int *)(iVar8 + 0x1144);
      if (((iVar7 == 4) || (iVar7 == 6)) || ((iVar7 == 0 || (iVar7 == 5)))) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(iVar8 + 0x1155) = uVar4;
    }
    iVar8 = param_1[5];
    if (iVar8 != 0) {
      iVar7 = *(int *)(iVar8 + 0x1144);
      if ((((iVar7 == 4) || (iVar7 == 6)) || (iVar7 == 0)) || (iVar7 == 5)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(iVar8 + 0x1155) = uVar4;
    }
    if (DAT_009b416c != 0) {
      iVar7 = 0;
      iVar9 = 0;
      fVar2 = (float)DAT_00925ae8 * _DAT_00890984;
      iVar8 = -1;
      do {
        iVar1 = *piVar5;
        iVar6 = iVar8;
        if (((iVar1 != 0) && (iVar1 != param_1[1])) &&
           ((fVar3 = ABS((float)*(int *)(iVar1 + 0x125c) * _DAT_00890984 - fVar2),
            fVar3 < _DAT_00894b58 != (fVar3 == _DAT_00894b58) &&
            (iVar7 = iVar7 + 1, iVar6 = iVar9, 1 < iVar7)))) {
          if (*(int *)(iVar1 + 0x1144) != 0) {
            *(undefined4 *)(iVar1 + 0x1144) = 0;
          }
          iVar6 = iVar8;
          if (-1 < iVar8) {
            if (*(int *)(param_1[iVar8 + 2] + 0x1144) != 0) {
              *(undefined4 *)(param_1[iVar8 + 2] + 0x1144) = 0;
            }
            iVar6 = -1;
          }
        }
        iVar9 = iVar9 + 1;
        piVar5 = piVar5 + 1;
        iVar8 = iVar6;
      } while (iVar9 < 4);
      if ((1 < iVar7) && (*(int *)(param_1[1] + 0x1144) != 4)) {
        *(undefined4 *)(param_1[1] + 0x1144) = 4;
      }
    }
    local_34 = (int *)0x761568;
    FUN_00735d20();
    local_34 = (int *)0x76156f;
    FUN_00741780();
    *(undefined1 *)(param_1 + 0x1a) = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_34 = (int *)0x761598;
    FUN_0078a840();
    local_34 = (int *)0x7615a3;
    FUN_0078a840();
    local_34 = (int *)0x7615ae;
    FUN_0078a840();
    local_34 = (int *)0x7615b9;
    FUN_0078a840();
    local_34 = (int *)0x7615c4;
    FUN_0078a840();
    local_34 = (int *)0x7615cf;
    FUN_0078a840();
    local_34 = (int *)0x7615da;
    FUN_0078a840();
    local_34 = (int *)0x7615e5;
    FUN_0078a840();
    local_34 = (int *)0x7615f0;
    FUN_0078a840();
  }
  if ((param_2 == '\0') && (iVar8 = *param_1, iVar8 != 6)) {
    *param_1 = 6;
    if (iVar8 == 5) {
      local_34 = (int *)0x761618;
      FUN_0078b2c0();
      local_34 = (int *)0x761647;
      local_34 = (int *)FUN_007c4b80();
      FUN_00627860();
      return;
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x111) != '\0') {
      local_34 = param_1 + 0x30;
      FUN_0045d9a0(2);
      local_34 = (int *)0x761683;
      FUN_00761240();
      iVar8 = *param_1;
      if ((iVar8 != 3) && (*param_1 = 3, iVar8 == 5)) {
        local_34 = (int *)0x76169f;
        FUN_0078b2c0();
        local_34 = (int *)0x7616ce;
        local_34 = (int *)FUN_007c4b80();
        FUN_00627860();
      }
      local_34 = (int *)0x7616df;
      FUN_007a1050();
      return;
    }
    local_34 = (int *)0x0;
    FUN_00761140();
  }
  return;
}

