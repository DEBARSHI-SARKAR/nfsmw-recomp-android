/* speed.exe 006f2f60 FUN_006f2f60; analysis pseudocode, not buildable source.
 * calls 0041cb10 FUN_0041cb10
 * calls 0040e1e0 FUN_0040e1e0
 * calls 005d59f0 FUN_005d59f0
 * calls 004040f0 FUN_004040f0
 * calls 005cc240 FUN_005cc240
 * calls 006ea620 FUN_006ea620
 * calls 004105e0 FUN_004105e0
 * calls 0040e040 FUN_0040e040
 * calls 004023c0 FUN_004023c0
 * calls 004647c0 FUN_004647c0
 */

void __thiscall FUN_006f2f60(int param_1,undefined4 ***param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *local_8c;
  int **local_88;
  undefined4 **local_84;
  undefined4 **ppuStack_80;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [32];
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 **local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int *local_4;
  
  iVar4 = (int)param_2;
  if (param_2 != (undefined4 ***)0xffffffff) {
    local_68 = 0x3f800000;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    if ((param_2 == (undefined4 ***)0x0) || (param_2 == (undefined4 ***)0x1)) {
      if (param_1 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_1 + 0x58;
      }
      ppuStack_80 = &local_30;
      local_84 = (undefined4 **)0x6f328d;
      FUN_004040f0();
      local_84 = &local_30;
      local_14 = &local_5c;
      local_2c = 0xa6b47fac;
      local_20 = 5;
      local_1c = 0x9537acb7;
      local_18 = &local_68;
      local_10 = 0;
      local_8 = 0;
      local_4 = (int *)0x2;
      local_8c = local_30;
      local_88 = (int **)0xa6b47fac;
      local_28 = local_84;
      local_c = iVar6;
      uVar3 = FUN_005cc240("PVehicle",local_84);
      iVar6 = FUN_0041cb10(uVar3);
      if (iVar6 != 0) {
        ppuStack_80 = (undefined4 **)&LAB_004040e0;
        local_84 = (undefined4 **)0x6f331e;
        ppuStack_80 = (undefined4 **)FUN_005d59f0();
        piVar5 = DAT_009885c8;
        if (ppuStack_80 != (undefined4 **)0x0) {
          param_2 = &local_84;
          local_88 = (int **)&DAT_00893734;
          local_8c = (undefined4 *)0x6f333d;
          uVar3 = FUN_005cc240();
          *param_2 = (undefined4 **)uVar3;
          local_88 = (int **)0x6f3350;
          (**(code **)(*piVar5 + 4))();
          ppuStack_80 = (undefined4 **)&LAB_00405000;
          local_84 = (undefined4 **)0x6f335d;
          piVar5 = (int *)FUN_005d59f0();
          if (piVar5 != (int *)0x0) {
            ppuStack_80 = (undefined4 **)0x6f3368;
            (**(code **)(*piVar5 + 0x10))();
          }
        }
      }
      param_2 = (undefined4 ***)iVar4;
      if (iVar4 == 1) {
        do {
          if (param_1 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = param_1 + 0x58;
          }
          ppuStack_80 = &local_30;
          local_84 = (undefined4 **)0x6f3395;
          FUN_004040f0();
          puVar2 = local_30;
          local_28 = &local_30;
          local_18 = &local_68;
          local_14 = &local_5c;
          local_84 = (undefined4 **)0x89121c;
          local_2c = 0xa6b47fac;
          local_20 = 5;
          local_1c = 0x5d6e3e54;
          local_10 = 0;
          local_8 = 0;
          local_4 = (int *)0x2;
          local_88 = (int **)0x6f33eb;
          local_c = iVar4;
          iVar4 = FUN_005cc240();
          for (piVar5 = DAT_0092c66c; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
            if (*piVar5 == iVar4) {
              local_8c = puVar2;
              local_84 = &local_30;
              local_88 = (int **)0xa6b47fac;
              iVar4 = (*(code *)piVar5[1])();
              if (iVar4 != 0) {
                ppuStack_80 = (undefined4 **)&LAB_004040e0;
                local_84 = (undefined4 **)0x6f3438;
                iVar4 = FUN_005d59f0();
                if (iVar4 != 0) {
                  ppuStack_80 = (undefined4 **)((int)param_2 + 1);
                  local_88 = (int **)local_50;
                  local_84 = (undefined4 **)0x89372c;
                  local_8c = (undefined4 *)0x6f3456;
                  FUN_004647c0();
                  piVar5 = DAT_009885c8;
                  local_88 = (int **)local_50;
                  local_8c = (undefined4 *)0x6f346d;
                  ppuStack_80 = (undefined4 **)iVar4;
                  local_84 = (undefined4 **)FUN_005cc240();
                  local_88 = (int **)0x6f3479;
                  (**(code **)(*piVar5 + 4))();
                  ppuStack_80 = (undefined4 **)&LAB_00405000;
                  local_84 = (undefined4 **)0x6f3486;
                  piVar5 = (int *)FUN_005d59f0();
                  if (piVar5 != (int *)0x0) {
                    ppuStack_80 = (undefined4 **)0x6f3491;
                    (**(code **)(*piVar5 + 0x10))();
                  }
                }
              }
              break;
            }
          }
          param_2 = (undefined4 ***)((int)param_2 + 1);
        } while ((int)param_2 < 8);
      }
    }
    else if (param_2 == (undefined4 ***)0xb) {
      if (param_1 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = param_1 + 0x58;
      }
      ppuStack_80 = (undefined4 **)0x0;
      local_84 = (undefined4 **)0x8b0668;
      local_88 = (int **)0x6f2fdc;
      local_84 = (undefined4 **)FUN_006ea620();
      local_88 = (int **)0x2;
      local_8c = &local_5c;
      puVar2 = (undefined4 *)FUN_004105e0(param_1,5,0x7a49cccb,&local_68);
      local_8c = (undefined4 *)*puVar2;
      local_88 = (int **)puVar2[1];
      local_84 = (undefined4 **)puVar2[2];
      uVar3 = FUN_005cc240("PVehicle",&local_8c);
      iVar4 = FUN_0041cb10(uVar3);
      if (iVar4 != 0) {
        ppuStack_80 = &param_2;
        local_84 = (undefined4 **)0x6f3043;
        cVar1 = FUN_0040e040();
        if (cVar1 != '\0') {
          iVar4 = *DAT_009885c8;
          ppuStack_80 = param_2;
          local_88 = (int **)&DAT_00893734;
          local_8c = (undefined4 *)0x6f3068;
          FUN_004023c0();
          local_88 = (int **)0x6f306d;
          (**(code **)(iVar4 + 4))();
          local_88 = &local_4;
          local_8c = (undefined4 *)0x6f307c;
          cVar1 = FUN_0040e1e0();
          if (cVar1 != '\0') {
            local_88 = (int **)0x6f3090;
            (**(code **)(*local_4 + 0x10))();
            return;
          }
        }
      }
    }
    else if ((((((param_2 == (undefined4 ***)0x2) || (param_2 == (undefined4 ***)0x3)) ||
               (param_2 == (undefined4 ***)0x4)) ||
              ((param_2 == (undefined4 ***)0x5 || (param_2 == (undefined4 ***)0x6)))) ||
             ((param_2 == (undefined4 ***)0x7 ||
              ((param_2 == (undefined4 ***)0x8 || (param_2 == (undefined4 ***)0x9)))))) ||
            (param_2 == (undefined4 ***)0xa)) {
      param_2 = (undefined4 ***)&DAT_008ec0f0;
      switch(iVar4) {
      case 3:
        param_2 = (undefined4 ***)&DAT_008ec110;
        iVar4 = 0;
        break;
      case 4:
        param_2 = (undefined4 ***)&DAT_008ec130;
        iVar4 = 0;
        break;
      case 5:
        param_2 = (undefined4 ***)&DAT_008ec150;
        iVar4 = 0;
        break;
      case 6:
        param_2 = (undefined4 ***)&DAT_008ec170;
        iVar4 = 0;
        break;
      case 7:
        param_2 = (undefined4 ***)&DAT_008ec190;
        iVar4 = 0;
        break;
      case 8:
        param_2 = (undefined4 ***)&DAT_008ec1b0;
        iVar4 = 0;
        break;
      case 9:
        param_2 = (undefined4 ***)&DAT_008ec1d0;
        iVar4 = 0;
        break;
      case 10:
        param_2 = (undefined4 ***)&DAT_008ec1f0;
      default:
        iVar4 = 0;
      }
      do {
        if (param_1 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_1 + 0x58;
        }
        uVar3 = param_2[iVar4];
        ppuStack_80 = &local_30;
        local_84 = (undefined4 **)0x6f3180;
        FUN_004040f0();
        local_84 = &local_30;
        local_18 = &local_68;
        local_2c = 0xa6b47fac;
        local_20 = 5;
        local_14 = &local_5c;
        local_10 = 0;
        local_8 = 0;
        local_4 = (int *)0x2;
        local_8c = local_30;
        local_88 = (int **)0xa6b47fac;
        local_28 = local_84;
        local_1c = uVar3;
        local_c = iVar6;
        uVar3 = FUN_005cc240("PVehicle",local_84);
        iVar6 = FUN_0041cb10(uVar3);
        if (iVar6 != 0) {
          ppuStack_80 = (undefined4 **)&LAB_004040e0;
          local_84 = (undefined4 **)0x6f320d;
          iVar6 = FUN_005d59f0();
          if (iVar6 != 0) {
            ppuStack_80 = (undefined4 **)(iVar4 + 1);
            local_88 = (int **)local_50;
            local_84 = (undefined4 **)0x89372c;
            local_8c = (undefined4 *)0x6f3226;
            FUN_004647c0();
            piVar5 = DAT_009885c8;
            local_88 = (int **)local_50;
            local_8c = (undefined4 *)0x6f323d;
            ppuStack_80 = (undefined4 **)iVar6;
            local_84 = (undefined4 **)FUN_005cc240();
            local_88 = (int **)0x6f324a;
            (**(code **)(*piVar5 + 4))();
            ppuStack_80 = (undefined4 **)&LAB_00405000;
            local_84 = (undefined4 **)0x6f3257;
            piVar5 = (int *)FUN_005d59f0();
            if (piVar5 != (int *)0x0) {
              ppuStack_80 = (undefined4 **)0x6f3262;
              (**(code **)(*piVar5 + 0x10))();
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 8);
      return;
    }
  }
  return;
}

