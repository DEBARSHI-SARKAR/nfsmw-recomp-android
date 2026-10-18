/* speed.exe 0057c000 FUN_0057c000; analysis pseudocode, not buildable source.
 * calls 004e4ea0 FUN_004e4ea0
 * calls 007c6100 _sprintf
 * calls 007c4b80 FUN_007c4b80
 * calls 00454640 FUN_00454640
 * calls 0045a430 FUN_0045a430
 * calls 00460bf0 FUN_00460bf0
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 004ab2c0 FUN_004ab2c0
 * calls 00569730 FUN_00569730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057c000(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int local_4c;
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00871d70;
  local_c = ExceptionList;
  if (DAT_00926064 == 0) {
    if ((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1964) != 2)) {
      iVar4 = *(int *)(DAT_0091cf90 + 0x2c + *(int *)(DAT_0091cf90 + 0x18) * 0x18);
    }
    else {
      iVar4 = *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8);
    }
    piVar8 = (int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x414);
    iVar5 = 0;
    piVar7 = piVar8;
    do {
      if (*piVar7 == iVar4) {
        piVar8 = piVar8 + iVar5 * 5;
        goto LAB_0057c08a;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 5;
    } while (iVar5 < 200);
    piVar8 = (int *)0x0;
LAB_0057c08a:
    iVar4 = piVar8[2];
    ExceptionList = &local_c;
  }
  else {
    ExceptionList = &local_c;
    iVar4 = FUN_00454640(PTR_s_bmwm3gtre46_008f86a8);
  }
  FUN_004e4ea0(iVar4,0,0);
  local_4 = 0;
  iVar4 = FUN_00454810(0xf1f5fbc7,0);
  if (iVar4 == 0) {
    iVar4 = FUN_006269b0(0xc);
  }
  FUN_004ab2c0(iVar4,0,0);
  fVar1 = *(float *)(local_4c + 0x54);
  fVar2 = *(float *)(local_4c + 0x58);
  bVar9 = param_1 != 2;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00569730(fVar1);
  if (bVar9) {
    uVar6 = FUN_007c4b80(DAT_008f3c44);
    _sprintf(local_2c,"%d_LINES_%2.2d",uVar6);
  }
  else {
    uVar6 = FUN_007c4b80();
    _sprintf(local_2c,"DRAG_RPM_%d_LINES",uVar6);
  }
  uVar6 = FUN_00460bf0(local_2c);
  bVar3 = _DAT_00899100 <= fVar1;
  *param_2 = uVar6;
  if (bVar3) {
    if (_DAT_008a05c4 <= fVar1) {
      if (_DAT_00897674 <= fVar1) {
        if (_DAT_008a0e30 <= fVar2) {
          if (bVar9) {
            *param_3 = _DAT_008a0e28;
          }
          else {
            *param_3 = _DAT_008a0e2c;
          }
          goto LAB_0057c4fa;
        }
        if (fVar2 < _DAT_00897674) {
          if (_DAT_008a0e4c <= fVar2) {
            if (bVar9) {
              *param_3 = _DAT_008a0e1c;
            }
            else {
              *param_3 = _DAT_008a0e20;
            }
            goto LAB_0057c4fa;
          }
          if (_DAT_008a05c4 <= fVar2) {
            if (bVar9) {
              *param_3 = _DAT_008a0e18;
            }
            else {
              *param_3 = _DAT_008a0e38;
            }
            goto LAB_0057c4fa;
          }
          uVar6 = _DAT_008a0e58;
          if (!bVar9) {
            uVar6 = _DAT_008a0e14;
          }
        }
        else {
          uVar6 = _DAT_008a0e24;
          if (!bVar9) {
            uVar6 = _DAT_0089528c;
          }
        }
      }
      else if (fVar2 < _DAT_008a0e4c) {
        if (_DAT_008a05c4 <= fVar2) {
          if (bVar9) {
            *param_3 = _DAT_008a0e40;
          }
          else {
            *param_3 = _DAT_0089528c;
          }
          goto LAB_0057c4fa;
        }
        if (_DAT_008a0e74 <= fVar2) {
          if (bVar9) {
            *param_3 = _DAT_008a0e3c;
          }
          else {
            *param_3 = _DAT_008a0e90;
          }
          goto LAB_0057c4fa;
        }
        if (fVar2 < _DAT_00899100) {
          if (bVar9) {
            *param_3 = _DAT_008a0e34;
          }
          else {
            *param_3 = _DAT_0089d8d0;
          }
          goto LAB_0057c4fa;
        }
        uVar6 = _DAT_00896ab4;
        if (!bVar9) {
          uVar6 = _DAT_008a0e38;
        }
      }
      else {
        uVar6 = _DAT_008a0e44;
        if (!bVar9) {
          uVar6 = _DAT_008a0e48;
        }
      }
    }
    else {
      if (_DAT_008a0e74 <= fVar2) {
        if (bVar9) {
          *param_3 = _DAT_008a0e70;
        }
        else {
          *param_3 = _DAT_00891184;
        }
        goto LAB_0057c4fa;
      }
      if (_DAT_00899100 <= fVar2) {
        if (bVar9) {
          *param_3 = _DAT_008a0e68;
        }
        else {
          *param_3 = _DAT_008a0e6c;
        }
        goto LAB_0057c4fa;
      }
      if (fVar2 < _DAT_008a0e9c) {
        if (fVar2 < _DAT_00896cb8) {
          if (bVar9) {
            *param_3 = _DAT_008a0e50;
          }
          else {
            *param_3 = _DAT_008a0e54;
          }
        }
        else if (bVar9) {
          *param_3 = _DAT_008a0e58;
        }
        else {
          *param_3 = _DAT_008a0e5c;
        }
        goto LAB_0057c4fa;
      }
      uVar6 = _DAT_008a0e60;
      if (!bVar9) {
        uVar6 = _DAT_008a0e64;
      }
    }
  }
  else if (fVar2 < _DAT_008a0e9c) {
    if (_DAT_00896cb8 <= fVar2) {
      if (bVar9) {
        *param_3 = _DAT_008a0e8c;
      }
      else {
        *param_3 = _DAT_008a0e90;
      }
      goto LAB_0057c4fa;
    }
    if (_DAT_008a0e88 <= fVar2) {
      if (bVar9) {
        *param_3 = _DAT_008a0e80;
      }
      else {
        *param_3 = _DAT_008a0e84;
      }
      goto LAB_0057c4fa;
    }
    uVar6 = _DAT_008a0e78;
    if (!bVar9) {
      uVar6 = _DAT_008a0e7c;
    }
  }
  else {
    uVar6 = _DAT_008a0e94;
    if (!bVar9) {
      uVar6 = _DAT_008a0e98;
    }
  }
  *param_3 = uVar6;
LAB_0057c4fa:
  local_4 = local_4 & 0xffffff00;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

