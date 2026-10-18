/* speed.exe 005b45b0 FUN_005b45b0; analysis pseudocode, not buildable source.
 * calls 005adc30 FUN_005adc30
 * calls 005ae140 FUN_005ae140
 * calls 005b4510 FUN_005b4510
 */

undefined4 __thiscall
FUN_005b45b0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
            undefined4 param_6,char param_7)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (param_2 == 0) {
    return 0;
  }
  cVar1 = FUN_005b4510(param_2,*param_3,*param_4,param_5,param_6);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_005ae140(param_2,param_3,param_4,param_5,param_6), cVar1 != '\0')) {
    if (param_5 != 0) {
      if (param_7 == '\0') {
        if (param_2 < 1) {
          if (*(int *)(param_1 + 0xc0) == 0) {
            if (*(int *)(param_1 + 0x5c) != 0) {
              uVar7 = *(uint *)(param_1 + 0x60);
              _param_7 = 0;
              if (uVar7 != 0) {
                param_4 = (undefined4 *)0x0;
                do {
                  iVar8 = *(int *)(param_1 + 100) + -1;
                  uVar2 = *(undefined4 *)
                           ((uVar7 * iVar8 + _param_7) * 0x30 + 0x20 + *(int *)(param_1 + 0x8c));
                  while (iVar8 != 0) {
                    iVar5 = *(int *)(param_1 + 0x60) * iVar8 + _param_7;
                    iVar8 = iVar8 + -1;
                    puVar10 = (undefined4 *)
                              ((iVar5 - *(int *)(param_1 + 0x60)) * 0x30 + *(int *)(param_1 + 0x8c))
                    ;
                    puVar9 = (undefined4 *)(iVar5 * 0x30 + *(int *)(param_1 + 0x8c));
                    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *puVar9 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar9 = puVar9 + 1;
                    }
                  }
                  *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x20 + (int)param_4) = uVar2;
                  iVar8 = **(int **)(param_1 + 0x5c);
                  uVar2 = FUN_005adc30(*(undefined4 *)(param_1 + 0x78),
                                       *(undefined4 *)(param_1 + 0x70));
                  (**(code **)(iVar8 + 0x4c))(param_1,*(undefined4 *)(param_1 + 0x74),uVar2);
                  uVar7 = *(uint *)(param_1 + 0x60);
                  _param_7 = _param_7 + 1;
                  param_4 = (undefined4 *)((int)param_4 + 0x30);
                } while (_param_7 < uVar7);
              }
            }
          }
          else {
            uVar7 = *(uint *)(param_1 + 0x60);
            _param_7 = 0;
            if (uVar7 != 0) {
              param_4 = (undefined4 *)0x0;
              do {
                iVar8 = *(int *)(param_1 + 100) + -1;
                uVar2 = *(undefined4 *)
                         ((uVar7 * iVar8 + _param_7) * 0x30 + 0x20 + *(int *)(param_1 + 0x8c));
                while (iVar8 != 0) {
                  iVar5 = iVar8 * *(int *)(param_1 + 0x60) + _param_7;
                  iVar8 = iVar8 + -1;
                  puVar10 = (undefined4 *)
                            ((iVar5 - *(int *)(param_1 + 0x60)) * 0x30 + *(int *)(param_1 + 0x8c));
                  puVar9 = (undefined4 *)(iVar5 * 0x30 + *(int *)(param_1 + 0x8c));
                  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *puVar9 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar9 = puVar9 + 1;
                  }
                }
                *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x20 + (int)param_4) = uVar2;
                iVar8 = *(int *)(param_1 + 0x78);
                iVar5 = *(int *)(param_1 + 0x70);
                if (iVar8 < 0) {
                  if (iVar5 < 2) {
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = iVar5 - -iVar8 % iVar5;
                  }
                }
                else {
                  iVar8 = iVar8 % iVar5;
                }
                (**(code **)(param_1 + 0xc0))
                          (*(undefined4 *)(param_1 + 0xc4),param_1,*(undefined4 *)(param_1 + 0x74),
                           iVar8);
                uVar7 = *(uint *)(param_1 + 0x60);
                _param_7 = _param_7 + 1;
                param_4 = (undefined4 *)((int)param_4 + 0x30);
              } while (_param_7 < uVar7);
              return 1;
            }
          }
        }
        else {
          iVar8 = *(int *)(param_1 + 100);
          uVar2 = FUN_005adc30(*(int *)(param_1 + 0x78) + -1 + iVar8,*(undefined4 *)(param_1 + 0x70)
                              );
          if (*(int *)(param_1 + 0xc0) == 0) {
            if ((*(int *)(param_1 + 0x5c) != 0) &&
               (param_4 = (undefined4 *)0x0, *(int *)(param_1 + 0x60) != 0)) {
              param_3 = (undefined4 *)0x0;
              do {
                uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x20 + (int)param_3);
                uVar7 = 0;
                if (iVar8 != 1) {
                  do {
                    iVar5 = uVar7 * *(int *)(param_1 + 0x60) + (int)param_4;
                    uVar7 = uVar7 + 1;
                    puVar10 = (undefined4 *)
                              ((*(int *)(param_1 + 0x60) + iVar5) * 0x30 + *(int *)(param_1 + 0x8c))
                    ;
                    puVar9 = (undefined4 *)(iVar5 * 0x30 + *(int *)(param_1 + 0x8c));
                    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *puVar9 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar9 = puVar9 + 1;
                    }
                  } while (uVar7 < iVar8 - 1U);
                }
                *(undefined4 *)
                 ((*(int *)(param_1 + 0x60) * uVar7 + (int)param_4) * 0x30 + 0x20 +
                 *(int *)(param_1 + 0x8c)) = uVar4;
                iVar5 = **(int **)(param_1 + 0x5c);
                uVar4 = FUN_005adc30(*(int *)(param_1 + 0x74) + (int)param_4,
                                     *(undefined4 *)(param_1 + 0x6c),uVar2);
                (**(code **)(iVar5 + 0x4c))(param_1,uVar4);
                param_4 = (undefined4 *)((int)param_4 + 1);
                param_3 = (undefined4 *)((int)param_3 + 0x30);
              } while (param_4 < *(uint *)(param_1 + 0x60));
              return 1;
            }
          }
          else {
            param_4 = (undefined4 *)0x0;
            if (*(int *)(param_1 + 0x60) != 0) {
              param_3 = (undefined4 *)0x0;
              do {
                uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x20 + (int)param_3);
                uVar7 = 0;
                if (iVar8 != 1) {
                  do {
                    iVar5 = *(int *)(param_1 + 0x60) * uVar7 + (int)param_4;
                    uVar7 = uVar7 + 1;
                    puVar10 = (undefined4 *)
                              ((*(int *)(param_1 + 0x60) + iVar5) * 0x30 + *(int *)(param_1 + 0x8c))
                    ;
                    puVar9 = (undefined4 *)(iVar5 * 0x30 + *(int *)(param_1 + 0x8c));
                    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *puVar9 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar9 = puVar9 + 1;
                    }
                  } while (uVar7 < iVar8 - 1U);
                }
                *(undefined4 *)
                 ((*(int *)(param_1 + 0x60) * uVar7 + (int)param_4) * 0x30 + 0x20 +
                 *(int *)(param_1 + 0x8c)) = uVar4;
                iVar3 = *(int *)(param_1 + 0x74) + (int)param_4;
                iVar5 = *(int *)(param_1 + 0x6c);
                if (iVar3 < 0) {
                  if (iVar5 < 2) {
                    iVar3 = 0;
                  }
                  else {
                    iVar3 = iVar5 - -iVar3 % iVar5;
                  }
                }
                else {
                  iVar3 = iVar3 % iVar5;
                }
                (**(code **)(param_1 + 0xc0))(*(undefined4 *)(param_1 + 0xc4),param_1,iVar3,uVar2);
                param_4 = (undefined4 *)((int)param_4 + 1);
                param_3 = (undefined4 *)((int)param_3 + 0x30);
              } while (param_4 < *(uint *)(param_1 + 0x60));
              return 1;
            }
          }
        }
      }
      else if (param_2 < 1) {
        if (*(int *)(param_1 + 0xc0) == 0) {
          if ((*(int *)(param_1 + 0x5c) != 0) && (uVar7 = 0, *(int *)(param_1 + 100) != 0)) {
            _param_7 = 0x30;
            do {
              iVar8 = *(int *)(param_1 + 0x60);
              uVar2 = *(undefined4 *)(_param_7 * iVar8 + -0x10 + *(int *)(param_1 + 0x8c));
              while (iVar8 = iVar8 + -1, iVar8 != 0) {
                puVar10 = (undefined4 *)
                          ((*(int *)(param_1 + 0x60) * uVar7 + iVar8) * 0x30 +
                          *(int *)(param_1 + 0x8c));
                puVar9 = puVar10 + -0xc;
                for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar10 = puVar10 + 1;
                }
              }
              *(undefined4 *)
               (*(int *)(param_1 + 0x60) * uVar7 * 0x30 + 0x20 + *(int *)(param_1 + 0x8c)) = uVar2;
              iVar8 = **(int **)(param_1 + 0x5c);
              uVar2 = FUN_005adc30(*(int *)(param_1 + 0x78) + uVar7,*(undefined4 *)(param_1 + 0x70))
              ;
              (**(code **)(iVar8 + 0x4c))(param_1,*(undefined4 *)(param_1 + 0x74),uVar2);
              uVar7 = uVar7 + 1;
              _param_7 = _param_7 + 0x30;
            } while (uVar7 < *(uint *)(param_1 + 100));
            return 1;
          }
        }
        else {
          uVar7 = 0;
          if (*(int *)(param_1 + 100) != 0) {
            _param_7 = 0x30;
            do {
              iVar8 = *(int *)(param_1 + 0x60);
              uVar2 = *(undefined4 *)(_param_7 * iVar8 + -0x10 + *(int *)(param_1 + 0x8c));
              while (iVar8 = iVar8 + -1, iVar8 != 0) {
                puVar10 = (undefined4 *)
                          ((*(int *)(param_1 + 0x60) * uVar7 + iVar8) * 0x30 +
                          *(int *)(param_1 + 0x8c));
                puVar9 = puVar10 + -0xc;
                for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar10 = *puVar9;
                  puVar9 = puVar9 + 1;
                  puVar10 = puVar10 + 1;
                }
              }
              *(undefined4 *)
               (*(int *)(param_1 + 0x60) * uVar7 * 0x30 + 0x20 + *(int *)(param_1 + 0x8c)) = uVar2;
              iVar5 = *(int *)(param_1 + 0x78) + uVar7;
              iVar8 = *(int *)(param_1 + 0x70);
              if (iVar5 < 0) {
                if (iVar8 < 2) {
                  iVar5 = 0;
                }
                else {
                  iVar5 = iVar8 - -iVar5 % iVar8;
                }
              }
              else {
                iVar5 = iVar5 % iVar8;
              }
              (**(code **)(param_1 + 0xc0))
                        (*(undefined4 *)(param_1 + 0xc4),param_1,*(undefined4 *)(param_1 + 0x74),
                         iVar5);
              uVar7 = uVar7 + 1;
              _param_7 = _param_7 + 0x30;
            } while (uVar7 < *(uint *)(param_1 + 100));
            return 1;
          }
        }
      }
      else {
        iVar8 = *(int *)(param_1 + 0x60);
        uVar2 = FUN_005adc30(*(int *)(param_1 + 0x74) + -1 + iVar8,*(undefined4 *)(param_1 + 0x6c));
        if (*(int *)(param_1 + 0xc0) == 0) {
          if ((*(int *)(param_1 + 0x5c) != 0) && (uVar7 = 0, *(int *)(param_1 + 100) != 0)) {
            do {
              uVar4 = *(undefined4 *)
                       (*(int *)(param_1 + 0x60) * uVar7 * 0x30 + 0x20 + *(int *)(param_1 + 0x8c));
              uVar6 = 0;
              if (iVar8 != 1) {
                do {
                  puVar10 = (undefined4 *)
                            ((*(int *)(param_1 + 0x60) * uVar7 + uVar6) * 0x30 +
                            *(int *)(param_1 + 0x8c));
                  uVar6 = uVar6 + 1;
                  puVar9 = puVar10 + 0xc;
                  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar10 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar10 = puVar10 + 1;
                  }
                } while (uVar6 < iVar8 - 1U);
              }
              *(undefined4 *)
               ((*(int *)(param_1 + 0x60) * uVar7 + uVar6) * 0x30 + 0x20 + *(int *)(param_1 + 0x8c))
                   = uVar4;
              iVar5 = **(int **)(param_1 + 0x5c);
              uVar4 = FUN_005adc30(*(int *)(param_1 + 0x78) + uVar7,*(undefined4 *)(param_1 + 0x70))
              ;
              (**(code **)(iVar5 + 0x4c))(param_1,uVar2,uVar4);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + 100));
            return 1;
          }
        }
        else {
          uVar7 = 0;
          if (*(int *)(param_1 + 100) != 0) {
            do {
              uVar4 = *(undefined4 *)
                       (*(int *)(param_1 + 0x60) * uVar7 * 0x30 + 0x20 + *(int *)(param_1 + 0x8c));
              uVar6 = 0;
              if (iVar8 != 1) {
                do {
                  puVar10 = (undefined4 *)
                            ((*(int *)(param_1 + 0x60) * uVar7 + uVar6) * 0x30 +
                            *(int *)(param_1 + 0x8c));
                  uVar6 = uVar6 + 1;
                  puVar9 = puVar10 + 0xc;
                  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar10 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar10 = puVar10 + 1;
                  }
                } while (uVar6 < iVar8 - 1U);
              }
              *(undefined4 *)
               ((*(int *)(param_1 + 0x60) * uVar7 + uVar6) * 0x30 + 0x20 + *(int *)(param_1 + 0x8c))
                   = uVar4;
              iVar3 = *(int *)(param_1 + 0x78) + uVar7;
              iVar5 = *(int *)(param_1 + 0x70);
              if (iVar3 < 0) {
                if (iVar5 < 2) {
                  iVar3 = 0;
                }
                else {
                  iVar3 = iVar5 - -iVar3 % iVar5;
                }
              }
              else {
                iVar3 = iVar3 % iVar5;
              }
              (**(code **)(param_1 + 0xc0))(*(undefined4 *)(param_1 + 0xc4),param_1,uVar2,iVar3);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + 100));
            return 1;
          }
        }
      }
    }
    return 1;
  }
  return 0;
}

