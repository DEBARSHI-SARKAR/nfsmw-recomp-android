/* speed.exe 006182f0 FUN_006182f0; analysis pseudocode, not buildable source.
 * calls 007c6100 _sprintf
 * calls 00607570 FUN_00607570
 * calls 00614c50 FUN_00614c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006182f0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 local_460;
  int local_45c;
  undefined4 local_458;
  undefined4 local_454;
  char local_450 [80];
  undefined4 local_400;
  undefined1 local_3f8;
  
  iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 3) + 1;
  iVar7 = 1;
  local_45c = iVar4;
  if (1 < iVar4) {
    do {
      _sprintf(local_450,"%d/-%d",iVar7);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  iVar7 = 1;
  if (1 < iVar4) {
    do {
      local_400 = local_400 & 0xffffff00;
      if (0 < iVar7) {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + -8 + iVar7 * 8);
        if (puVar2 < *(undefined4 **)(param_1 + 8)) goto LAB_006183b7;
        goto switchD_006183ca_default;
      }
      if (iVar7 < -9999) {
        if (iVar7 == -0x2711) {
          puVar2 = (undefined4 *)(param_1 + 0x40);
        }
        else if (iVar7 == -10000) {
          puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c);
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + -4);
          if ((int)(uint)*(byte *)(iVar4 + 7) < -0x2711 - iVar7) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar2 = (undefined4 *)(iVar4 + 8 + (-0x2711 - iVar7) * 8);
          }
        }
      }
      else {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + iVar7 * 8);
      }
LAB_006183b7:
      if (puVar2 == (undefined4 *)0x0) goto switchD_006183ca_default;
      switch(*puVar2) {
      case 0:
        local_400 = 0x6c696e;
        break;
      case 1:
        if (iVar7 < 1) {
          if (iVar7 < -9999) {
            if (iVar7 == -0x2711) {
              piVar3 = (int *)(param_1 + 0x40);
            }
            else if (iVar7 == -10000) {
              piVar3 = (int *)(*(int *)(param_1 + 0x10) + 0x2c);
            }
            else {
              iVar4 = *(int *)(*(int *)(param_1 + 0xc) + -4);
              if ((int)(uint)*(byte *)(iVar4 + 7) < -0x2711 - iVar7) {
                piVar3 = (int *)0x0;
              }
              else {
                piVar3 = (int *)(iVar4 + 8 + (-0x2711 - iVar7) * 8);
              }
            }
          }
          else {
            piVar3 = (int *)(*(int *)(param_1 + 8) + iVar7 * 8);
          }
LAB_0061844d:
          if (((piVar3 != (int *)0x0) && (*piVar3 != 0)) && ((*piVar3 != 1 || (piVar3[1] != 0)))) {
            pcVar5 = "%s";
            goto LAB_006185fc;
          }
        }
        else {
          piVar3 = (int *)(*(int *)(param_1 + 0xc) + -8 + iVar7 * 8);
          if (piVar3 < *(int **)(param_1 + 8)) goto LAB_0061844d;
        }
        pcVar5 = "%s";
        goto LAB_006185fc;
      case 2:
      case 5:
      case 6:
      case 7:
      case 8:
        if (iVar7 < 1) {
          if (iVar7 < -9999) {
            if (iVar7 == -0x2711) {
              puVar2 = (undefined4 *)(param_1 + 0x40);
            }
            else if (iVar7 == -10000) {
              puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c);
            }
            else {
              iVar4 = *(int *)(*(int *)(param_1 + 0xc) + -4);
              if ((int)(uint)*(byte *)(iVar4 + 7) < -0x2711 - iVar7) {
                puVar2 = (undefined4 *)0x0;
              }
              else {
                puVar2 = (undefined4 *)(iVar4 + 8 + (-0x2711 - iVar7) * 8);
              }
            }
          }
          else {
            puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + iVar7 * 8);
          }
LAB_00618687:
          if (puVar2 == (undefined4 *)0x0) goto switchD_0061869d_caseD_3;
          switch(*puVar2) {
          case 2:
          case 7:
            if (iVar7 < 1) {
              if (iVar7 < -9999) {
                if (iVar7 == -0x2711) {
                  piVar3 = (int *)(param_1 + 0x40);
                }
                else if (iVar7 == -10000) {
                  piVar3 = (int *)(*(int *)(param_1 + 0x10) + 0x2c);
                }
                else {
                  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + -4);
                  if ((int)(uint)*(byte *)(iVar4 + 7) < -0x2711 - iVar7) {
                    piVar3 = (int *)0x0;
                  }
                  else {
                    piVar3 = (int *)(iVar4 + 8 + (-0x2711 - iVar7) * 8);
                  }
                }
              }
              else {
                piVar3 = (int *)(*(int *)(param_1 + 8) + iVar7 * 8);
              }
            }
            else {
              piVar3 = (int *)(*(int *)(param_1 + 0xc) + -8 + iVar7 * 8);
              if (*(int **)(param_1 + 8) <= piVar3) goto switchD_0061869d_caseD_3;
            }
            if (piVar3 == (int *)0x0) goto switchD_0061869d_caseD_3;
            if (*piVar3 == 2) goto switchD_0061869d_caseD_5;
            if (*piVar3 != 7) goto switchD_0061869d_caseD_3;
            break;
          default:
            goto switchD_0061869d_caseD_3;
          case 5:
          case 6:
          case 8:
switchD_0061869d_caseD_5:
          }
        }
        else {
          puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + -8 + iVar7 * 8);
          if (puVar2 < *(undefined4 **)(param_1 + 8)) goto LAB_00618687;
switchD_0061869d_caseD_3:
        }
        pcVar5 = "%08X";
LAB_006185fc:
        _sprintf((char *)&local_400,pcVar5);
        break;
      case 3:
        if (iVar7 < 1) {
          if (iVar7 < -9999) {
            if (iVar7 == -0x2711) {
              piVar3 = (int *)(param_1 + 0x40);
            }
            else if (iVar7 == -10000) {
              piVar3 = (int *)(*(int *)(param_1 + 0x10) + 0x2c);
            }
            else {
              iVar4 = *(int *)(*(int *)(param_1 + 0xc) + -4);
              if ((int)(uint)*(byte *)(iVar4 + 7) < -0x2711 - iVar7) {
                piVar3 = (int *)0x0;
              }
              else {
                piVar3 = (int *)(iVar4 + 8 + (-0x2711 - iVar7) * 8);
              }
            }
          }
          else {
            piVar3 = (int *)(*(int *)(param_1 + 8) + iVar7 * 8);
          }
LAB_006184f1:
          if ((((piVar3 != (int *)0x0) && (*piVar3 != 3)) && (*piVar3 == 4)) &&
             (iVar4 = FUN_00607570(piVar3[1] + 0x10,&local_460), iVar4 != 0)) {
            local_454 = local_460;
            local_458 = 3;
          }
        }
        else {
          piVar3 = (int *)(*(int *)(param_1 + 0xc) + -8 + iVar7 * 8);
          if (piVar3 < *(int **)(param_1 + 8)) goto LAB_006184f1;
        }
        _sprintf((char *)&local_400,"%.2f");
        break;
      case 4:
        if (iVar7 < 1) {
          if (iVar7 < -9999) {
            if (iVar7 == -0x2711) {
              piVar3 = (int *)(param_1 + 0x40);
            }
            else if (iVar7 == -10000) {
              piVar3 = (int *)(*(int *)(param_1 + 0x10) + 0x2c);
            }
            else {
              iVar4 = *(int *)(*(int *)(param_1 + 0xc) + -4);
              if ((int)(uint)*(byte *)(iVar4 + 7) < -0x2711 - iVar7) {
                piVar3 = (int *)0x0;
              }
              else {
                piVar3 = (int *)(iVar4 + 8 + (-0x2711 - iVar7) * 8);
              }
            }
          }
          else {
            piVar3 = (int *)(*(int *)(param_1 + 8) + iVar7 * 8);
          }
LAB_006185af:
          if (piVar3 == (int *)0x0) goto LAB_0061854b;
          if (*piVar3 == 4) {
            pcVar5 = (char *)(piVar3[1] + 0x10);
          }
          else {
            iVar4 = FUN_00614c50(param_1);
            if (iVar4 == 0) goto LAB_0061854b;
            pcVar5 = (char *)(piVar3[1] + 0x10);
          }
        }
        else {
          piVar3 = (int *)(*(int *)(param_1 + 0xc) + -8 + iVar7 * 8);
          if (piVar3 < *(int **)(param_1 + 8)) goto LAB_006185af;
LAB_0061854b:
          pcVar5 = (char *)0x0;
        }
        pcVar6 = (char *)&local_400;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
      }
switchD_006183ca_default:
      pcVar5 = (char *)&local_400;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (8 < (uint)((int)pcVar5 - ((int)&local_400 + 1))) {
        local_3f8 = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_45c);
  }
  return;
}

