/* speed.exe 007f66a8 FUN_007f66a8; analysis pseudocode, not buildable source.
 * calls 007f6386 FUN_007f6386
 * calls 007f628e FUN_007f628e
 * calls 007f6337 FUN_007f6337
 * calls 007f6455 FUN_007f6455
 * calls 007f4cb2 FUN_007f4cb2
 * calls 007f407e FUN_007f407e
 */

void __thiscall FUN_007f66a8(int *param_1,int param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = param_1[0x41];
  piVar1 = param_1 + iVar7 * 0x15 + 2;
  iVar2 = *piVar1;
  if (iVar2 < 0x11) {
    if (iVar2 == 0x10) {
      if (param_2 == 0) {
        if ((((uint)piVar1[3] <= (uint)piVar1[2]) && ((uint)piVar1[1] <= (uint)piVar1[3])) ||
           ((uint)piVar1[1] <= (uint)piVar1[2])) {
          FUN_007f407e(piVar1[4]);
          piVar1[4] = 0;
          param_1[0x41] = param_1[0x41] + 1;
        }
        FUN_007f628e();
        (**(code **)(*(int *)param_1[1] + 0x1c))(param_4);
      }
      else if (param_2 == 3) {
        if (param_1[0x42] == 2) {
          piVar1[3] = 0;
          param_1[0x41] = param_1[0x41] + -1;
        }
        piVar1[2] = 0;
        (**(code **)(*(int *)param_1[1] + 0x30))(param_3);
        *(undefined1 *)(param_1 + 0x44) = 0;
        *(undefined1 *)((int)param_1 + 0x111) = 0;
        param_1[0x45] = 0;
      }
      else {
        if (param_1[0x42] == 2) {
          if ((((param_3 == 1) || (param_3 == 3)) || (param_3 == 4)) || (param_3 == 6)) {
LAB_007f6a48:
            FUN_007f407e(piVar1[4]);
            piVar1[4] = 0;
            param_1[0x41] = param_1[0x41] + 1;
          }
          else {
            param_1[0x45] = 0;
            *(undefined1 *)((int)param_1 + 0x111) = 0;
            *(undefined1 *)(param_1 + 0x44) = 0;
            if (param_3 == 2) {
              param_1[0x41] = iVar7 + -1;
              uVar4 = 0;
              piVar1[3] = 0;
              piVar1[2] = 0;
              if (piVar1[1] != 0) {
                iVar7 = 0;
                do {
                  *(undefined1 *)(iVar7 + 0x5c + piVar1[4]) = 0;
                  uVar4 = uVar4 + 1;
                  iVar7 = iVar7 + 0x60;
                } while (uVar4 < (uint)piVar1[1]);
              }
            }
            else if ((((uint)piVar1[3] <= (uint)piVar1[2]) && ((uint)piVar1[1] <= (uint)piVar1[3]))
                    || ((uint)piVar1[1] <= (uint)piVar1[2])) goto LAB_007f6a48;
          }
          param_1[4] = param_3;
        }
        else {
          FUN_007f407e(piVar1[4]);
          piVar1[4] = 0;
          param_1[0x41] = param_1[0x41] + 1;
        }
        FUN_007f628e();
        (**(code **)(*(int *)param_1[1] + 0x34))(param_2,param_3);
      }
      if (((param_3 == 9) || (param_3 == 8)) || (param_3 == 10)) {
        param_3 = 0;
      }
      iVar7 = param_1[0x42];
joined_r0x007f6aa8:
      if (iVar7 != 0x100) goto LAB_007f6ca6;
      cVar3 = FUN_007f6386(param_3);
    }
    else {
      if (iVar2 == 1) {
        iVar2 = param_1[0x42];
        piVar8 = param_1 + 0x47;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar8 = *param_4;
          param_4 = param_4 + 1;
          piVar8 = piVar8 + 1;
        }
        if (iVar2 == 1) {
          if (param_2 != 3) {
            param_1[0x41] = iVar7 + 1;
            FUN_007f628e();
            (**(code **)(*(int *)param_1[1] + 0x38))(param_1 + 0x47);
            goto LAB_007f6ca6;
          }
          (**(code **)(*(int *)param_1[1] + 0x30))(param_3);
        }
        else {
          if ((char)param_1[0x46] == '\0') {
            if (param_2 != 3) {
              param_3 = -(uint)(param_3 != 2) & param_3;
              piVar1[1] = param_3;
              if (param_2 == 2) {
                param_1[0x43] = 2;
              }
              FUN_007f628e();
              (**(code **)(*(int *)param_1[1] + 0x44))(param_3,param_1[0x43]);
              *(undefined1 *)(param_1 + 0x46) = 1;
            }
          }
          else {
            cVar3 = FUN_007f6386(param_3);
            if (cVar3 == '\0') {
              if ((param_2 == 2) && ((char)param_1[0x4d] == '\0')) {
                (**(code **)(*(int *)param_1[1] + 0x48))(2,param_3);
                *(char *)(param_1 + 0x4d) = '\x01';
              }
            }
            else {
              piVar1[1] = param_3;
              (**(code **)(*(int *)param_1[1] + 0x48))(param_2,param_3);
              *(undefined1 *)(param_1 + 0x4d) = 0;
            }
            if (param_3 != 1) {
              param_1[0x45] = 0;
              *(undefined1 *)((int)param_1 + 0x111) = 0;
            }
          }
          if (param_2 == 2) {
            *(undefined1 *)(param_1 + 0x4d) = 1;
          }
          if (param_2 != 3) {
            if (param_1[param_1[0x41] * 0x15 + 0x17] != 0) {
              param_1[0x41] = param_1[0x41] + 1;
            }
            goto LAB_007f6ca6;
          }
        }
        param_1[0x45] = 0;
        *(undefined1 *)(param_1 + 0x44) = 0;
        *(undefined1 *)((int)param_1 + 0x111) = 0;
        goto LAB_007f6ca6;
      }
      if (iVar2 == 2) {
        piVar1[2] = param_3;
        piVar1[3] = *param_4;
        piVar1[4] = param_4[1];
        piVar1[5] = param_4[2];
        FUN_007f4cb2(piVar1[3]);
        if (((param_3 != 0) && (param_3 != 0xb)) && ((param_1[0x17] != 0 && (param_1[0x2d] != 0))))
        {
          FUN_007f407e(param_1[0x30]);
          param_1[0x30] = 0;
          FUN_007f6337();
        }
        param_1[0x41] = param_1[0x41] + 1;
        goto LAB_007f6ca6;
      }
      if (iVar2 == 4) {
        if (param_2 == 3) goto LAB_007f6763;
        param_1[0x41] = iVar7 + 1;
        FUN_007f628e();
        (**(code **)(*(int *)param_1[1] + 0xc))(param_2,param_3);
        goto LAB_007f6af5;
      }
      if (iVar2 != 8) goto LAB_007f6ca6;
      if (param_2 == 0) {
        param_1[0x41] = iVar7 + 1;
        FUN_007f628e();
        (**(code **)(*(int *)param_1[1] + 0x10))(param_4);
      }
      else if (param_2 == 3) {
        (**(code **)(*(int *)param_1[1] + 0x30))(param_3);
        param_1[0x45] = 0;
        *(undefined1 *)(param_1 + 0x44) = 0;
        *(undefined1 *)((int)param_1 + 0x111) = 0;
      }
      else {
        param_1[0x41] = iVar7 + 1;
        FUN_007f628e();
        (**(code **)(*(int *)param_1[1] + 0x34))(param_2,param_3);
      }
LAB_007f6c81:
      if (param_1[0x42] != 0x100) goto LAB_007f6ca6;
      cVar3 = FUN_007f6386(param_3);
    }
    if (cVar3 == '\0') goto LAB_007f6ca6;
    param_1[3] = param_3;
  }
  else {
    if (iVar2 == 0x20) {
      if (param_2 == 0) {
        param_1[0x41] = iVar7 + 1;
        FUN_007f628e();
        (**(code **)(*(int *)param_1[1] + 0x20))(param_4);
      }
      else if (param_2 == 3) {
        (**(code **)(*(int *)param_1[1] + 0x30))(param_3);
        param_1[0x45] = 0;
        *(undefined1 *)(param_1 + 0x44) = 0;
        *(undefined1 *)((int)param_1 + 0x111) = 0;
      }
      else {
        if (param_2 == 2) {
          *(undefined1 *)(param_1 + 0x44) = 1;
        }
        param_1[0x41] = iVar7 + 1;
        FUN_007f628e();
        (**(code **)(*(int *)param_1[1] + 0x34))(param_2,param_3);
      }
      if (param_3 == 9) {
        param_3 = 0;
      }
      goto LAB_007f6c81;
    }
    if (iVar2 != 0x40) {
      if (iVar2 != 0x80) goto LAB_007f6ca6;
      if (param_2 == 3) {
LAB_007f6763:
        (**(code **)(*(int *)param_1[1] + 0x30))(param_3);
        param_1[0x45] = 0;
        *(undefined1 *)(param_1 + 0x44) = 0;
        *(undefined1 *)((int)param_1 + 0x111) = 0;
      }
      else {
        param_1[0x41] = iVar7 + 1;
        FUN_007f628e();
        (**(code **)(*(int *)param_1[1] + 0x3c))(param_2,param_3,*param_4);
      }
LAB_007f6af5:
      iVar7 = param_1[0x42];
      goto joined_r0x007f6aa8;
    }
    uVar4 = 0;
    if (param_2 == 0) {
      param_1[0x41] = iVar7 + 1;
      if (param_1[0x42] == 2) {
        if (param_1[0x2d] != 0) {
          pcVar5 = (char *)(param_1[0x30] + 0x5c);
          do {
            if (*pcVar5 != '\0') {
              param_1[0x2f] = uVar4 + 1;
            }
            uVar4 = uVar4 + 1;
            pcVar5 = pcVar5 + 0x60;
          } while (uVar4 < (uint)param_1[0x2d]);
        }
      }
      else {
        FUN_007f628e();
        (**(code **)(*(int *)param_1[1] + 0x2c))(param_3);
      }
    }
    else if (param_2 == 3) {
      (**(code **)(*(int *)param_1[1] + 0x30))(param_3);
      param_1[0x45] = 0;
      *(undefined1 *)(param_1 + 0x44) = 0;
      *(undefined1 *)((int)param_1 + 0x111) = 0;
    }
    else {
      iVar7 = param_1[0x42];
      if ((iVar7 == 0x40) || ((iVar7 == 0x100 && (*piVar1 == 0x40)))) {
        FUN_007f628e();
        (**(code **)(*(int *)param_1[1] + 0x34))(param_2,param_3);
      }
      else if (iVar7 == 2) {
        param_1[4] = param_3;
      }
      param_1[0x41] = param_1[0x41] + 1;
    }
    if (param_3 == 9) {
      param_3 = 0;
    }
    if ((param_1[0x42] != 0x100) || (cVar3 = FUN_007f6386(param_3), cVar3 == '\0'))
    goto LAB_007f6ca6;
    param_1[3] = param_3;
  }
  (**(code **)(*(int *)param_1[1] + 0x48))(param_2,param_3);
LAB_007f6ca6:
  uVar4 = param_1[0x41];
  if ((uVar4 < 3) && (param_1[uVar4 * 0x15 + 2] != 0)) {
    if (*(int *)(*param_1 + 0x6c) != 0) {
      return;
    }
  }
  else {
    if (param_1[0x42] != 0x100) {
      if (param_1[0x42] != 2) {
        param_1[0x42] = 0;
        return;
      }
      param_1[0x42] = 0;
      (**(code **)(*(int *)param_1[1] + 8))(param_1[4],param_1[5],param_1[6],param_1[7]);
      return;
    }
    while (uVar4 != 0) {
      param_1[param_1[0x41] * 0x15 + 2] = 0;
      param_1[0x41] = param_1[0x41] + -1;
      uVar4 = param_1[0x41];
    }
  }
  FUN_007f6455();
  return;
}

