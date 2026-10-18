/* speed.exe 00761b30 FUN_00761b30; analysis pseudocode, not buildable source.
 * calls 00735ef0 FUN_00735ef0
 * calls 00754fd0 FUN_00754fd0
 * calls 007a12e0 FUN_007a12e0
 * calls 0078c180 FUN_0078c180
 * calls 00794170 FUN_00794170
 * calls 007617d0 FUN_007617d0
 * calls 007350a0 FUN_007350a0
 * calls 00741ca0 FUN_00741ca0
 * calls 0079f090 FUN_0079f090
 * calls 007a13c0 FUN_007a13c0
 * calls 00735650 FUN_00735650
 * calls 0078c2a0 FUN_0078c2a0
 * calls 0045ce40 FUN_0045ce40
 * calls 007361e0 FUN_007361e0
 * calls 00741bf0 FUN_00741bf0
 * calls 00654870 FUN_00654870
 * calls 0078b010 FUN_0078b010
 * calls 005d59f0 FUN_005d59f0
 * calls 007612c0 FUN_007612c0
 * calls 007a1740 FUN_007a1740
 * calls 0078b2c0 FUN_0078b2c0
 * calls 0078eba0 FUN_0078eba0
 * calls 0078c380 FUN_0078c380
 * calls 005e8b20 FUN_005e8b20
 * calls 0045ce70 FUN_0045ce70
 * calls 00741430 FUN_00741430
 * calls 00733200 FUN_00733200
 * calls 00740fa0 FUN_00740fa0
 * calls 00549460 FUN_00549460
 * calls 00793d10 FUN_00793d10
 * calls 007359f0 FUN_007359f0
 * calls 00734fe0 FUN_00734fe0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00761b30(int *param_1,char param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_00794170();
  iVar4 = FUN_0078b2c0();
  if (100 < (uint)(iVar4 - param_1[7])) {
    FUN_0078b2c0();
  }
  param_1[7] = iVar4;
  if (((DAT_00925e90 == 6) && (DAT_0091ca58 != '\0')) && (DAT_0091ca60 == 0)) {
    FUN_00549460(0);
    return;
  }
  if (((*(char *)((int)param_1 + 0x19) != '\0') || (cVar3 = FUN_0078eba0(), cVar3 != '\0')) &&
     ((*param_1 != 6 && ((DAT_009b416c == 0 && (DAT_0091ca58 == '\0')))))) {
    FUN_0079f090();
    iVar4 = FUN_0078c380(0);
    if (iVar4 != 0) {
      FUN_0079f090();
      iVar4 = FUN_0078c380(0);
      if (*(int *)(iVar4 + 0x88) == 3) goto LAB_00761bf2;
    }
    if (DAT_00925e90 == 6) {
      FUN_00549460(0);
    }
  }
LAB_00761bf2:
  if ((*param_1 == 5) && (DAT_009b416c == 0)) {
    iVar5 = FUN_0078b2c0();
    iVar4 = param_1[8];
    iVar6 = FUN_0078b2c0();
    iVar8 = (iVar6 + param_1[10]) - (iVar5 - iVar4);
    if ((iVar8 < 0x65) && (-0x65 < iVar8)) {
      iVar4 = param_1[8];
      if (iVar8 < 4) {
        if (iVar8 < -1) {
          iVar4 = iVar4 + 1;
        }
        else {
          iVar4 = iVar4 - iVar8;
        }
      }
      else {
        iVar4 = iVar4 + -3;
      }
    }
    else {
      iVar4 = param_1[8] + ((iVar5 - iVar4) - (iVar6 + param_1[10]));
    }
    param_1[8] = iVar4;
  }
  switch(*param_1) {
  case 1:
    if (((DAT_009b4174 == 0) && (DAT_00926064 != 0)) && (cVar3 = FUN_0078b010(), cVar3 == '\x01')) {
      *(undefined1 *)(DAT_0091cf90 + 0x141) = 0;
      FUN_007617d0();
    }
    *(undefined1 *)(param_1 + 0x46) = 0;
    *(undefined1 *)((int)param_1 + 0x119) = 0;
    break;
  case 2:
  case 3:
    break;
  case 4:
    if (DAT_009b416c == 0) {
      iVar4 = FUN_0045ce40();
      fVar10 = (float10)FUN_0045ce70(param_1[0x45],iVar4);
      if ((float10)_DAT_008b536c < fVar10) {
        param_1[0x45] = iVar4;
        FUN_00793d10();
      }
    }
    if ((((param_1[0x1f] != 0) && (param_1[0x1f] != 0x7fffffff)) && ((char)param_1[0xb] == '\0')) &&
       (cVar3 = FUN_00735650(), cVar3 == '\0')) {
      if (DAT_009b416c == 0) {
        if (_DAT_008b265c < (float)(DAT_00925b14 - param_1[0x1f]) * _DAT_00890984) {
          param_1[0x1f] = 0;
          FUN_007a12e0();
        }
      }
      else if (_DAT_008970c0 < (float)(DAT_00925b14 - param_1[0x1f]) * _DAT_00890984) {
        param_1[0x1f] = 0;
        FUN_007a13c0();
      }
    }
    uVar11 = FUN_0045ce40();
    fVar10 = (float10)FUN_007359f0(uVar11);
    if (fVar10 < (float10)_DAT_00890968 != (fVar10 == (float10)_DAT_00890968)) {
      FUN_00741430();
    }
    break;
  case 5:
    if (DAT_00925e90 == 6) {
      cVar3 = FUN_007361e0();
      if ((cVar3 == '\x01') && (DAT_0091ca58 == '\0')) {
        uVar12 = 0;
        uVar11 = 0;
        FUN_0079f090(0,0);
        FUN_0078c180(uVar11,uVar12);
        FUN_007612c0(0);
        FUN_00549460(0);
      }
      else {
        FUN_0079f090();
        iVar4 = FUN_0078c2a0();
        if ((iVar4 == 0) && (cVar3 = FUN_00734fe0(), cVar3 == '\0')) {
          FUN_007350a0(0,0xc);
        }
        FUN_0079f090();
        iVar4 = FUN_0078c2a0();
        if ((iVar4 == 0) && (cVar3 = FUN_00734fe0(), cVar3 == '\0')) {
          FUN_007350a0(0,0xc);
        }
        bVar2 = true;
        puVar9 = DAT_0092d84c;
        if (DAT_0092d84c == DAT_0092d84c + DAT_0092d854) {
LAB_00761eba:
          if (param_1[0x31] == 0) {
            param_1[0x31] = 1;
          }
        }
        else {
          do {
            piVar1 = (int *)*puVar9;
            piVar7 = (int *)FUN_005d59f0(&LAB_00402840);
            if (piVar7 == (int *)0x0) break;
            iVar4 = (**(code **)(*piVar7 + 8))();
            uVar11 = (**(code **)(*piVar1 + 4))();
            iVar5 = FUN_005e8b20(uVar11);
            if (iVar4 != 0) {
              if ((*(char *)(iVar5 + 0x21) == '\0') && (cVar3 = FUN_00734fe0(), cVar3 == '\0')) {
                if (DAT_009b416c != 0) {
                  iVar4 = FUN_00654870(DAT_009259bc);
                  if (iVar4 == 0) {
                    FUN_00735ef0();
                    param_1[0x1b] = 4000;
                  }
                }
                iVar4 = FUN_00654870(DAT_009259bc);
                if (iVar4 == 0) {
                  FUN_00741ca0();
                  param_1[0x1c] = 20000;
                }
                if (_DAT_00890d3c < (float)(DAT_00925b14 - param_1[0x33]) * _DAT_00890984) {
                  FUN_00741bf0();
                  param_1[0x33] = DAT_00925b14;
                }
                goto LAB_00761f86;
              }
              cVar3 = FUN_00733200();
              if (cVar3 != '\0') {
                bVar2 = false;
              }
            }
            puVar9 = puVar9 + 1;
          } while (puVar9 != DAT_0092d84c + DAT_0092d854);
          if (bVar2) goto LAB_00761eba;
        }
        FUN_007612c0(0);
        if ((bVar2) && (DAT_0091ca58 == '\0')) {
          FUN_00549460(0);
        }
LAB_00761f86:
        iVar4 = *(int *)(param_1[1] + 0x1144);
        if (((((iVar4 != 4) && (iVar4 != 6)) && (iVar4 != 0)) && (iVar4 != 5)) &&
           (((FUN_00754fd0(DAT_00925970), *(char *)(DAT_0091cf90 + 0x141) != '\0' ||
             (DAT_00926064 != 0)) &&
            ((DAT_009b10a5 == '\0' && (*(float *)(param_1[1] + 0x1264) < _DAT_008af9f0)))))) {
          param_1 = param_1 + 2;
          iVar4 = 4;
          do {
            if ((*param_1 != 0) && (cVar3 = FUN_00734fe0(), cVar3 == '\0')) {
              FUN_00740fa0(4);
              FUN_007350a0(3,0xb);
            }
            param_1 = param_1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    break;
  case 6:
    *(undefined1 *)(param_1 + 0x44) = 0;
    if ((param_1[0x1e] == 0) || (param_1[0x1e] == 0x7fffffff)) {
      param_1[0x1e] = DAT_00925ae8;
    }
    break;
  default:
    goto switchD_00761c5d_default;
  }
switchD_00761c5d_default:
  if ((param_2 != '\0') && (cVar3 = FUN_0078eba0(), cVar3 != '\0')) {
    FUN_007a1740();
  }
  return;
}

