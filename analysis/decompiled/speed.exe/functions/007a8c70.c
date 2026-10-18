/* speed.exe 007a8c70 FUN_007a8c70; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 * calls 0045a430 FUN_0045a430
 * calls 00460c50 FUN_00460c50
 * calls 00460ed0 FUN_00460ed0
 * calls 004549b0 FUN_004549b0
 * calls 007a8c70 FUN_007a8c70
 * calls 00460c70 FUN_00460c70
 * calls 0051e1a0 FUN_0051e1a0
 */

undefined4 FUN_007a8c70(undefined1 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int local_13c;
  int local_128;
  undefined4 local_118 [31];
  undefined1 auStack_9c [4];
  char local_98 [132];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_008829a6;
  local_14 = ExceptionList;
  puVar6 = param_1;
  if (param_1 == (undefined1 *)0x0) {
    puVar6 = &DAT_00890978;
  }
  ExceptionList = &local_14;
  FUN_00460c70(local_98,puVar6);
  iVar2 = FUN_00460c50(local_98);
  if (3 < iVar2) {
    auStack_9c[iVar2] = 0;
    puVar4 = local_118;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uVar1 = *(uint *)(DAT_0091cf90 + 300);
    if ((uVar1 >> 5 & 1) == 0) {
      if ((uVar1 >> 0xf & 1) == 0) {
        if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
          if (((uVar1 >> 2 & 1) == 0) || ((uVar1 >> 10 & 1) == 0)) {
            if ((uVar1 >> 2 & 1) == 0) {
              if (((uVar1 >> 3 & 1) == 0) && ((uVar1 >> 6 & 1) == 0)) {
                if ((uVar1 >> 4 & 1) == 0) {
                  if ((uVar1 >> 8 & 1) == 0) {
                    pcVar7 = local_98;
                    pcVar5 = "";
                  }
                  else {
                    pcVar7 = "manager";
                    pcVar5 = "career_";
                  }
                }
                else {
                  pcVar7 = local_98;
                  pcVar5 = "options_";
                }
              }
              else {
                pcVar7 = local_98;
                pcVar5 = "online_";
              }
            }
            else {
              pcVar7 = local_98;
              pcVar5 = "quickracemain_";
            }
          }
          else {
            pcVar7 = local_98;
            pcVar5 = "quickrace_";
          }
        }
        else {
          pcVar7 = local_98;
          pcVar5 = "career_";
        }
      }
      else {
        pcVar7 = local_98;
        pcVar5 = "carlot_";
      }
      FUN_00460ed0(local_118,pcVar5,pcVar7);
    }
    else {
      FUN_00460ed0(local_118,"customize_",local_98);
      if (-1 < param_2) {
        FUN_004647c0(local_118,"%s_%d",local_118,param_2);
      }
      uVar3 = FUN_004549b0(local_118);
      FUN_0051e1a0(uVar3,0,0);
      local_c = 0;
      if (local_13c != 0) goto LAB_007a8d8c;
      if (-1 < param_2) {
        uVar3 = FUN_007a8c70(param_1,0xffffffff);
        goto LAB_007a8d8c;
      }
      local_c = 0xffffffff;
      FUN_0045a430();
    }
    uVar3 = FUN_004549b0(local_118);
    FUN_0051e1a0(uVar3,0,0);
    local_c = 0xffffffff;
    if (local_128 != 0) {
LAB_007a8d8c:
      local_c = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_14;
      return uVar3;
    }
    FUN_0045a430();
  }
  ExceptionList = local_14;
  return 0x3b5aea62;
}

