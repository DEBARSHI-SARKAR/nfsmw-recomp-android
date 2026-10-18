/* speed.exe 006e0200 FUN_006e0200; analysis pseudocode, not buildable source.
 * calls 006be590 FUN_006be590
 * calls 006c6d10 FUN_006c6d10
 * calls 006c7f50 FUN_006c7f50
 * calls 006c76e0 FUN_006c76e0
 * calls 006c8000 FUN_006c8000
 * calls 006c7420 FUN_006c7420
 * calls 0045f2e0 FUN_0045f2e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e0200(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *local_1c;
  int *local_18;
  int iStack_14;
  int local_10;
  int aiStack_c [3];
  
  if (DAT_00982cdc != 0) {
    piVar3 = (int *)0x0;
    local_1c = (int *)0x0;
    local_10 = 0;
    local_18 = DAT_009877b4;
    iVar5 = 0;
    if (0 < DAT_00982cdc) {
      do {
        iVar6 = *local_18 * 0x44;
        if (piVar3 == *(int **)(&DAT_0093e888 + iVar6)) {
          switch((*(int **)(&DAT_0093e888 + iVar6))[1]) {
          case 0:
          case 1:
          case 3:
          case 4:
          case 5:
          case 0x12:
            if (*(int *)(&DAT_0093e8b4 + iVar6) != iVar5) {
              if (piVar3 != (int *)0x0) {
                (**(code **)(*(int *)piVar3[0x12] + 0x108))((int *)piVar3[0x12]);
                (**(code **)(*piVar3 + 8))();
                (**(code **)(*(int *)piVar3[0x12] + 0x10c))((int *)piVar3[0x12]);
                DAT_00982c80 = (int *)0x0;
              }
              piVar3 = *(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48);
              uVar2 = (**(code **)(*piVar3 + 0x30))
                                (piVar3,*(undefined4 *)
                                         (*(int *)(&DAT_0093e888 + iVar6) + 0x18 +
                                         *(int *)(&DAT_0093e8b4 + iVar6) * 4));
              (**(code **)(**(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48) + 0xe8))
                        (*(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48),uVar2);
              piVar7 = *(int **)(&DAT_0093e888 + iVar6);
              DAT_00982c80 = piVar7;
              (**(code **)(*piVar7 + 4))();
              (**(code **)(*DAT_00982bdc + 0x15c))(DAT_00982bdc,piVar7[0x13]);
              piVar3 = aiStack_c;
              goto LAB_006e03a5;
            }
          }
        }
        else {
          if (piVar3 != (int *)0x0) {
            (**(code **)(*(int *)piVar3[0x12] + 0x108))((int *)piVar3[0x12]);
            (**(code **)(*piVar3 + 8))();
            (**(code **)(*(int *)piVar3[0x12] + 0x10c))((int *)piVar3[0x12]);
            DAT_00982c80 = (int *)0x0;
          }
          if (DAT_00982a20[1] == 1) {
            switch(*(undefined4 *)(*(int *)(&DAT_0093e888 + iVar6) + 4)) {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
            case 0x12:
              piVar3 = *(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48);
              uVar2 = (**(code **)(*piVar3 + 0x30))
                                (piVar3,*(undefined4 *)
                                         (*(int *)(&DAT_0093e888 + iVar6) + 0x18 +
                                         *(int *)(&DAT_0093e8b4 + iVar6) * 4));
LAB_006e02d4:
              (**(code **)(**(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48) + 0xe8))
                        (*(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48),uVar2);
            }
          }
          else if (*(int *)(*(int *)(&DAT_0093e888 + iVar6) + 4) == 4) {
            piVar3 = *(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48);
            uVar2 = (**(code **)(*piVar3 + 0x30))
                              (piVar3,*(undefined4 *)(*(int *)(&DAT_0093e888 + iVar6) + 0x18));
            goto LAB_006e02d4;
          }
          piVar7 = *(int **)(&DAT_0093e888 + iVar6);
          DAT_00982c80 = piVar7;
          (**(code **)(*piVar7 + 4))();
          (**(code **)(*DAT_00982bdc + 0x15c))(DAT_00982bdc,piVar7[0x13]);
          piVar3 = &local_10;
LAB_006e03a5:
          (**(code **)(*(int *)piVar7[0x12] + 0xfc))((int *)piVar7[0x12],piVar3,0);
          (**(code **)(**(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48) + 0x100))
                    (*(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48),0);
          _DAT_00987b24 = _DAT_00987b24 + 1;
          piVar3 = *(int **)(&DAT_0093e888 + iVar6);
          local_1c = piVar3;
        }
        aiStack_c[0] = *(int *)(&DAT_0093e8b4 + iVar6);
        FUN_006c6d10(&DAT_0093e89c + iVar6,*(undefined4 *)(&DAT_0093e884 + iVar6));
        FUN_006c8000(*(undefined4 *)(&DAT_0093e894 + iVar6),DAT_00982a20[1]);
        iStack_14 = 0;
        if (*(int *)(&DAT_0093e87c + iVar6) == 0) {
          iStack_14 = **(int **)(&DAT_0093e880 + iVar6);
          switch(DAT_00982c80[1]) {
          case 0:
          case 1:
          case 3:
          case 4:
          case 5:
          case 0x12:
            if (0 < DAT_00901830) {
              (**(code **)(*(int *)DAT_00982c80[0x12] + 0x78))
                        ((int *)DAT_00982c80[0x12],*(undefined4 *)(DAT_00982c80[0x11] + 0x86c),
                         _DAT_00982ba8 + (_DAT_0089096c - _DAT_008fae68));
            }
          }
        }
        if (*(int *)(&DAT_0093e88c + iVar6) != 0) {
          FUN_006c7420(*(int *)(&DAT_0093e88c + iVar6),*(undefined4 *)(&DAT_0093e894 + iVar6));
        }
        if (*(int *)(&DAT_0093e890 + iVar6) != 0) {
          FUN_006c76e0(*(int *)(&DAT_0093e890 + iVar6),*(undefined4 *)(&DAT_0093e884 + iVar6));
        }
        if (*(int *)(&DAT_0093e87c + iVar6) == 0) {
          iVar5 = *(int *)(&DAT_0093e878 + iVar6);
          if (*(int *)(&DAT_0093e898 + iVar6) != 0) {
            FUN_006c7f50(*(int *)(&DAT_0093e898 + iVar6),iVar5);
          }
          if ((*(int *)(iVar5 + 0x54) == 0) && (*(int *)(iVar5 + 0x3c) != 0)) {
            if ((2 < DAT_00982ce4) || (*(int *)(iStack_14 + 0x28) == 0)) goto LAB_006e06a2;
            FUN_006be590();
            DAT_00982ce4 = DAT_00982ce4 + 1;
          }
          if (*(int *)(iVar5 + 0x54) != DAT_00982ca0) {
            (**(code **)(*DAT_00982bdc + 400))
                      (DAT_00982bdc,0,*(int *)(iVar5 + 0x54),0,DAT_00982c80[2]);
            DAT_00982ca0 = *(int *)(iVar5 + 0x54);
            _DAT_00987b08 = _DAT_00987b08 + 1;
          }
          if (*(int *)(iStack_14 + 0x28) != DAT_00982ca4) {
            (**(code **)(*DAT_00982bdc + 0x1a0))(DAT_00982bdc,*(int *)(iStack_14 + 0x28));
            DAT_00982ca4 = *(int *)(iStack_14 + 0x28);
            _DAT_00987b0c = _DAT_00987b0c + 1;
          }
          if ((*(int *)(iStack_14 + 0x2c) != 0) && (*(uint *)(iVar5 + 0x3c) < 0xffff)) {
            iVar4 = *(int *)(*(int *)(&DAT_0093e888 + iVar6) + 0x14);
            iVar8 = DAT_00982c80[1];
            if (((iVar8 == 0x13) && (DAT_00982bad != '\0')) ||
               ((((DAT_00982b25 == '\0' || (*DAT_00982a20 != 0)) &&
                 ((char)DAT_00982c80[0x10] != '\0')) &&
                (((iVar8 == 0 || (iVar8 == 4)) || (iVar8 == 2)))))) {
              iVar4 = 1;
            }
            iVar8 = 0;
            if (0 < iVar4) {
              do {
                if (0 < iVar8) {
                  (**(code **)(**(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48) + 0x108))
                            (*(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48));
                  (**(code **)(**(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48) + 0x100))
                            (*(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48),iVar8);
                }
                (**(code **)(**(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48) + 0x104))
                          (*(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48));
                (**(code **)(*DAT_00982bdc + 0x148))
                          (DAT_00982bdc,4,0,0,*(undefined4 *)(iVar5 + 0x58),
                           *(undefined4 *)(iVar5 + 0x44),*(undefined4 *)(iVar5 + 0x40));
                DAT_00987b00 = DAT_00987b00 + 1;
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar4);
            }
            DAT_00987b10 = DAT_00987b10 + *(uint *)(iVar5 + 0x3c) / 3;
            piVar3 = local_1c;
          }
        }
        else {
          piVar7 = *(int **)(&DAT_0093e878 + iVar6);
          (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,0);
          DAT_00982ca0 = 0;
          iVar5 = *(int *)(*(int *)(&DAT_0093e888 + iVar6) + 0x14);
          piVar1 = *(int **)(*(int *)(&DAT_0093e888 + iVar6) + 0x48);
          (**(code **)(*piVar1 + 0x104))(piVar1);
          if (0 < iVar5) {
            do {
              (**(code **)(*DAT_00982bdc + 0x14c))(DAT_00982bdc,5,*piVar7 + -2,piVar7 + 1,0x18);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,1);
          _DAT_00987b04 = _DAT_00987b04 + 1;
          FUN_0045f2e0(piVar7);
        }
LAB_006e06a2:
        local_18 = local_18 + 2;
        local_10 = local_10 + 1;
        iVar5 = aiStack_c[0];
      } while (local_10 < DAT_00982cdc);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*(int *)piVar3[0x12] + 0x108))((int *)piVar3[0x12]);
        (**(code **)(*piVar3 + 8))();
        (**(code **)(*(int *)piVar3[0x12] + 0x10c))((int *)piVar3[0x12]);
        DAT_00982c80 = (int *)0x0;
      }
    }
    DAT_00982ca4 = 0;
    DAT_00982cd8 = 0;
    DAT_00982cdc = 0;
  }
  return;
}

