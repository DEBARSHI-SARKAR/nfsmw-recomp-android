/* speed.exe 0052b4d0 FUN_0052b4d0; analysis pseudocode, not buildable source.
 * calls 0051d900 FUN_0051d900
 * calls 0051d880 FUN_0051d880
 * calls 0051d840 FUN_0051d840
 * calls 005fc560 FUN_005fc560
 * calls 005b8550 FUN_005b8550
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00460bf0 FUN_00460bf0
 * calls 0051da00 FUN_0051da00
 * calls 0051d760 FUN_0051d760
 * calls 0051d810 FUN_0051d810
 * calls 0051d730 FUN_0051d730
 * calls 00510900 FUN_00510900
 * calls 00516af0 FUN_00516af0
 * calls 0051d790 FUN_0051d790
 * calls 0056dc00 FUN_0056dc00
 * calls 00652ad0 _malloc
 * calls 00573960 FUN_00573960
 * calls 0051d980 FUN_0051d980
 * calls 006e8df0 FUN_006e8df0
 * calls 00514c70 FUN_00514c70
 * calls 00586fa0 FUN_00586fa0
 * calls 005fc180 FUN_005fc180
 * calls 0050e1b0 FUN_0050e1b0
 */

void __fastcall FUN_0052b4d0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f33c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0x148) == '\0') {
LAB_0052b7f7:
    if (*(int *)(DAT_0091e000 + 0x1964) != 2) {
      iVar3 = FUN_006e8df0();
      if (iVar3 == 1) {
        puVar6 = _malloc(0x4c);
        local_4 = 0x25;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_00586fa0(0x12bb5ea2,0xded357e7,0);
          *puVar6 = &PTR_FUN_0089c24c;
          *(undefined1 *)((int)puVar6 + 0x45) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00573960(puVar6);
        puVar6 = _malloc(0x4c);
        local_4 = 0x26;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_00586fa0(0xb295a6b6,0xf893afa1,0);
          *puVar6 = &PTR_FUN_0089c25c;
          *(undefined1 *)((int)puVar6 + 0x45) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00573960(puVar6);
        puVar6 = _malloc(0x4c);
        local_4 = 0x27;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_00586fa0(0x4c9e34e6,0x4349998b,0);
          *puVar6 = &PTR_FUN_0089c27c;
          *(undefined1 *)((int)puVar6 + 0x45) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00573960(puVar6);
        puVar6 = _malloc(0x4c);
        local_4 = 0x28;
        if (puVar6 != (undefined4 *)0x0) {
          FUN_00586fa0(0x520de4e3,0x2b5a03a8,0);
          *puVar6 = &PTR_FUN_0089c264;
          *(undefined1 *)((int)puVar6 + 0x45) = 1;
          goto LAB_0052c276;
        }
      }
      else {
        puVar6 = _malloc(0x4c);
        local_4 = 0x29;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_00586fa0(0x12bb5ea2,0xded357e7,0);
          *puVar6 = &PTR_FUN_0089c24c;
          *(undefined1 *)((int)puVar6 + 0x45) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00573960(puVar6);
        puVar6 = _malloc(0x4c);
        local_4 = 0x2a;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_00586fa0(0xb295a6b6,0xf893afa1,0);
          *puVar6 = &PTR_FUN_0089c25c;
          *(undefined1 *)((int)puVar6 + 0x45) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00573960(puVar6);
        iVar3 = *(int *)(DAT_0091e000 + 0x1968);
        if ((iVar3 == 0) || (cVar2 = FUN_005fc180(), cVar2 == '\0')) {
          pvVar5 = _malloc(0x4c);
          local_4 = 0x2c;
          if (pvVar5 == (void *)0x0) goto LAB_0052c1cc;
          uVar4 = FUN_0051d900(0x4c9e34e6,0x4349998b,0);
        }
        else {
          pvVar5 = _malloc(0x4c);
          local_4 = 0x2b;
          if (pvVar5 == (void *)0x0) {
LAB_0052c1cc:
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0051d880(0x4c9e34e6,0xe950b7af,0);
          }
        }
        local_4 = 0xffffffff;
        FUN_00573960(uVar4);
        cVar2 = FUN_0050e1b0();
        if ((cVar2 == '\0') && ((iVar3 == 0 || (cVar2 = FUN_005fc180(), cVar2 == '\0')))) {
          pvVar5 = _malloc(0x4c);
          local_4 = 0x2d;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_00510900();
            uVar4 = FUN_0051d840(0x483238fd,0x6a3672a2,0,uVar4);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
        }
        puVar6 = _malloc(0x4c);
        local_4 = 0x2e;
        if (puVar6 != (undefined4 *)0x0) {
          FUN_00586fa0(0x520de4e3,0x2b5a03a8,0);
          *puVar6 = &PTR_FUN_0089c264;
          *(undefined1 *)((int)puVar6 + 0x45) = 1;
          goto LAB_0052c276;
        }
      }
LAB_0052c273:
      puVar6 = (undefined4 *)0x0;
      goto LAB_0052c276;
    }
    if (*(int *)(DAT_0091e000 + 0x1960) == 0) {
      if (*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) < 0x10) {
        cVar2 = FUN_0056dc00();
        if (cVar2 == '\0') {
          if (DAT_0091d3d8 == '\0') {
            pvVar5 = _malloc(0x4c);
            local_4 = 0x12;
            if (pvVar5 == (void *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_0051d760(0x12bb5ea2,0x1bd185c,0);
            }
            local_4 = 0xffffffff;
            FUN_00573960(uVar4);
            pvVar5 = _malloc(0x4c);
            local_4 = 0x13;
            if (pvVar5 == (void *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_0051da00(0x4c9e34e6,0x3c14c420,0);
            }
            local_4 = 0xffffffff;
            FUN_00573960(uVar4);
            pvVar5 = _malloc(0x4c);
            local_4 = 0x14;
            if (pvVar5 == (void *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_00510900();
              uVar4 = FUN_0051d840(0x483238fd,0x6a3672a2,0,uVar4);
            }
            local_4 = 0xffffffff;
            FUN_00573960(uVar4);
            pvVar5 = _malloc(0x4c);
            local_4 = 0x15;
            if (pvVar5 != (void *)0x0) {
              puVar6 = (undefined4 *)FUN_0051d810(0x520de4e3,0x2b5a03a8,0);
              goto LAB_0052c276;
            }
          }
          else {
            pvVar5 = _malloc(0x4c);
            local_4 = 0xf;
            if (pvVar5 == (void *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_0051d760(0x12bb5ea2,0x1bd185c,0);
            }
            local_4 = 0xffffffff;
            FUN_00573960(uVar4);
            pvVar5 = _malloc(0x4c);
            local_4 = 0x10;
            if (pvVar5 == (void *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_00510900();
              uVar4 = FUN_0051d840(0x483238fd,0x6a3672a2,0,uVar4);
            }
            local_4 = 0xffffffff;
            FUN_00573960(uVar4);
            pvVar5 = _malloc(0x4c);
            local_4 = 0x11;
            if (pvVar5 != (void *)0x0) {
              puVar6 = (undefined4 *)FUN_0051d810(0x520de4e3,0x2b5a03a8,0);
              goto LAB_0052c276;
            }
          }
        }
        else {
          pvVar5 = _malloc(0x4c);
          local_4 = 0xb;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0051d760(0x12bb5ea2,0x1bd185c,0);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0xc;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0051da00(0x4c9e34e6,0x690e9b7c,0);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0xd;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_00510900();
            uVar4 = FUN_0051d840(0x483238fd,0x6a3672a2,0,uVar4);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0xe;
          if (pvVar5 != (void *)0x0) {
            puVar6 = (undefined4 *)FUN_0051d810(0x520de4e3,0x2b5a03a8,0);
            goto LAB_0052c276;
          }
        }
      }
      else {
        pvVar5 = _malloc(0x4c);
        local_4 = 8;
        if (pvVar5 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0051d760(0x12bb5ea2,0x1bd185c,0);
        }
        local_4 = 0xffffffff;
        FUN_00573960(uVar4);
        pvVar5 = _malloc(0x4c);
        local_4 = 9;
        if (pvVar5 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0051da00(0x4c9e34e6,0x690e9b7c,0);
        }
        local_4 = 0xffffffff;
        FUN_00573960(uVar4);
        pvVar5 = _malloc(0x4c);
        local_4 = 10;
        if (pvVar5 != (void *)0x0) {
          puVar6 = (undefined4 *)FUN_0051d810(0x520de4e3,0x2b5a03a8,0);
          goto LAB_0052c276;
        }
      }
    }
    else {
      if ((*(int *)(DAT_0091e000 + 0x1968) == 0) || (cVar2 = FUN_005fc560(), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) < 0x10) {
        cVar2 = FUN_0056dc00();
        if ((cVar2 != '\0') || (bVar1)) {
          pvVar5 = _malloc(0x4c);
          local_4 = 0x1a;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0051d730(0x12bb5ea2,0xded357e7,0);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0x1b;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0051d790(0xb295a6b6,0xf893afa1,0);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0x1c;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0051da00(0x4c9e34e6,0x690e9b7c,0);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0x1d;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_00510900();
            uVar4 = FUN_0051d840(0x483238fd,0x6a3672a2,0,uVar4);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0x1e;
          if (pvVar5 != (void *)0x0) {
            puVar6 = (undefined4 *)FUN_0051d810(0x520de4e3,0x2b5a03a8,0);
            goto LAB_0052c276;
          }
        }
        else {
          pvVar5 = _malloc(0x4c);
          local_4 = 0x1f;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0051d730(0x12bb5ea2,0xded357e7,0);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0x20;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0051d790(0xb295a6b6,0xf893afa1,0);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0x21;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0051da00(0x4c9e34e6,0x3c14c420,0);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0x22;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0051d980(0x56ffbd2c,0x9dc599b0,0);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0x23;
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_00510900();
            uVar4 = FUN_0051d840(0x483238fd,0x6a3672a2,0,uVar4);
          }
          local_4 = 0xffffffff;
          FUN_00573960(uVar4);
          pvVar5 = _malloc(0x4c);
          local_4 = 0x24;
          if (pvVar5 != (void *)0x0) {
            puVar6 = (undefined4 *)FUN_0051d810(0x520de4e3,0x2b5a03a8,0);
            goto LAB_0052c276;
          }
        }
      }
      else {
        pvVar5 = _malloc(0x4c);
        local_4 = 0x16;
        if (pvVar5 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0051d730(0x12bb5ea2,0xded357e7,0);
        }
        local_4 = 0xffffffff;
        FUN_00573960(uVar4);
        pvVar5 = _malloc(0x4c);
        local_4 = 0x17;
        if (pvVar5 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0051d790(0xb295a6b6,0xf893afa1,0);
        }
        local_4 = 0xffffffff;
        FUN_00573960(uVar4);
        pvVar5 = _malloc(0x4c);
        local_4 = 0x18;
        if (pvVar5 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0051da00(0x4c9e34e6,0x690e9b7c,0);
        }
        local_4 = 0xffffffff;
        FUN_00573960(uVar4);
        pvVar5 = _malloc(0x4c);
        local_4 = 0x19;
        if (pvVar5 != (void *)0x0) {
          puVar6 = (undefined4 *)FUN_0051d810(0x520de4e3,0x2b5a03a8,0);
          goto LAB_0052c276;
        }
      }
    }
  }
  else {
    ExceptionList = &local_c;
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (ExceptionList = &local_c, iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 == 0)) ||
       (iVar3 = FUN_005b8550(0x812a09d4), iVar3 == 0)) {
      iVar3 = 0;
    }
    FUN_00514c70(iVar3);
    if (*(char *)(param_1 + 0x148) == '\0') goto LAB_0052b7f7;
    iVar3 = *(int *)(param_1 + 0x10);
    uVar4 = FUN_00460bf0("DISABLE");
    if (((iVar3 != 0) && (iVar3 = FUN_00516af0(iVar3), iVar3 != 0)) &&
       ((iVar3 = FUN_005b8550(0x523250e9), iVar3 != 0 && (iVar3 = FUN_005b1360(uVar4), iVar3 != 0)))
       ) {
      FUN_005b8400(iVar3,0);
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
    if (*(char *)(param_1 + 0x148) == '\0') goto LAB_0052b7f7;
    if (*(int *)(DAT_0091e000 + 0x1964) == 2) {
      if ((*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) < 0x10) &&
         (cVar2 = FUN_0056dc00(), cVar2 == '\0')) {
        pvVar5 = _malloc(0x4c);
        local_4 = 2;
        if (pvVar5 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0051d790(0xb295a6b6,0xf893afa1,0);
        }
        local_4 = 0xffffffff;
        FUN_00573960(uVar4);
        pvVar5 = _malloc(0x4c);
        local_4 = 3;
        if (pvVar5 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0051da00(0x4c9e34e6,0x3c14c420,0);
        }
        local_4 = 0xffffffff;
        FUN_00573960(uVar4);
        pvVar5 = _malloc(0x4c);
        local_4 = 4;
        if (pvVar5 != (void *)0x0) {
          puVar6 = (undefined4 *)FUN_0051d980(0x56ffbd2c,0x9dc599b0,0);
          goto LAB_0052c276;
        }
        goto LAB_0052bf8c;
      }
      puVar6 = _malloc(0x4c);
      local_4 = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00586fa0(0xb295a6b6,0xf893afa1,0);
        *puVar6 = &PTR_FUN_0089c25c;
        *(undefined1 *)((int)puVar6 + 0x45) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00573960(puVar6);
      puVar6 = _malloc(0x4c);
      local_4 = 1;
      if (puVar6 != (undefined4 *)0x0) {
        FUN_00586fa0(0x4c9e34e6,0x690e9b7c,0);
        *puVar6 = &PTR_FUN_0089c28c;
        *(undefined1 *)((int)puVar6 + 0x45) = 1;
        goto LAB_0052c276;
      }
      goto LAB_0052c273;
    }
    puVar6 = _malloc(0x4c);
    local_4 = 5;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_00586fa0(0xb295a6b6,0xf893afa1,0);
      *puVar6 = &PTR_FUN_0089c25c;
      *(undefined1 *)((int)puVar6 + 0x45) = 1;
    }
    local_4 = 0xffffffff;
    FUN_00573960(puVar6);
    if ((*(int *)(DAT_0091e000 + 0x1968) == 0) || (cVar2 = FUN_005fc180(), cVar2 == '\0')) {
      puVar6 = _malloc(0x4c);
      local_4 = 7;
      if (puVar6 != (undefined4 *)0x0) {
        FUN_00586fa0(0x4c9e34e6,0x4349998b,0);
        *puVar6 = &PTR_FUN_0089c27c;
        *(undefined1 *)((int)puVar6 + 0x45) = 1;
        goto LAB_0052c276;
      }
      goto LAB_0052c273;
    }
    pvVar5 = _malloc(0x4c);
    local_4 = 6;
    if (pvVar5 != (void *)0x0) {
      puVar6 = (undefined4 *)FUN_0051d880(0x4c9e34e6,0xe950b7af,0);
      goto LAB_0052c276;
    }
  }
LAB_0052bf8c:
  puVar6 = (undefined4 *)0x0;
LAB_0052c276:
  local_4 = 0xffffffff;
  FUN_00573960(puVar6);
  ExceptionList = local_c;
  return;
}

