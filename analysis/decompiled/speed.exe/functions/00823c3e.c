/* speed.exe 00823c3e FUN_00823c3e; analysis pseudocode, not buildable source.
 * calls 00822240 FUN_00822240
 * calls 00823e83 FUN_00823e83
 * calls 00826377 FUN_00826377
 * calls 008263a6 FUN_008263a6
 * calls 0081f39d FUN_0081f39d
 * calls 0081f7cb FUN_0081f7cb
 * calls 008237b9 FUN_008237b9
 * calls 00823804 FUN_00823804
 */

int FUN_00823c3e(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short local_120 [4];
  char local_118;
  char local_117;
  char local_116;
  char local_115;
  int local_54 [12];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar5 = param_5;
  iVar6 = 0;
  local_8 = 0;
  local_1c = 0;
  local_20 = 0;
  local_10 = -9;
  if (param_2 == 0) {
    iVar5 = -8;
  }
  else {
    if (param_1 == 0) {
      param_1 = param_2;
    }
    param_2 = param_2 + 4;
    local_c = (int)*(char *)(param_5 + 2);
    local_18 = (int)*(char *)(param_5 + 3);
    local_24 = FUN_008237b9();
    do {
      local_14 = FUN_00823e83(&param_2,local_120);
      if (local_1c == 0) {
        if (local_120[0] != 0) {
          local_20 = FUN_00826377((int)local_120[0]);
        }
        local_1c = 1;
      }
      if ((((local_118 <= local_18) && (local_18 <= local_117)) && (local_116 <= local_c)) &&
         (local_c <= local_115)) {
        iVar3 = FUN_00823804(param_3,param_4,param_1,iVar5,local_120,local_c,local_18,local_20);
        local_10 = iVar3;
        if (iVar3 < 0) goto LAB_00823d87;
        piVar1 = local_54 + local_8;
        local_8 = local_8 + 1;
        *piVar1 = iVar3;
        FUN_00822240(local_120,iVar3,1);
      }
      iVar3 = local_8;
    } while (local_14 != 0);
    iVar5 = 0;
    local_14 = local_8;
    local_8 = 0;
    if (0 < iVar3) {
      do {
        iVar3 = local_54[iVar5];
        iVar4 = FUN_008263a6(iVar3);
        iVar2 = local_8;
        if (iVar4 == 0) {
          local_8 = local_8 + 1;
          local_54[iVar2] = iVar3;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_14);
      if (local_8 != 0) {
        if (local_8 != 1) {
          iVar5 = 0;
          if (0 < local_8) {
            do {
              iVar3 = FUN_0081f7cb(local_54[iVar5]);
              if (-1 < iVar3) {
                iVar6 = iVar3 * 0x90 + DAT_009c21f4;
                *(undefined1 *)(iVar6 + 0x26) = (undefined1)local_24;
                *(undefined1 *)(iVar6 + 0x27) = 0;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < local_8);
          }
          *(undefined1 *)(iVar6 + 0x27) = 1;
          return local_10;
        }
        iVar5 = FUN_0081f7cb(local_54[0]);
        if (iVar5 < 0) {
          return local_10;
        }
        iVar5 = iVar5 * 0x90 + DAT_009c21f4;
        *(undefined1 *)(iVar5 + 0x26) = 0;
        *(undefined1 *)(iVar5 + 0x27) = 0;
        return local_10;
      }
    }
LAB_00823d87:
    iVar5 = local_10;
    iVar6 = 0;
    if (0 < local_8) {
      do {
        FUN_0081f39d(local_54[iVar6]);
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_8);
    }
  }
  return iVar5;
}

