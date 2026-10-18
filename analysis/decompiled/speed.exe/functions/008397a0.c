/* speed.exe 008397a0 FUN_008397a0; analysis pseudocode, not buildable source.
 * calls 008477a0 FUN_008477a0
 * calls 007d6cb0 __security_check_cookie
 * calls 007c97c0 FUN_007c97c0
 * calls 00837bf0 FUN_00837bf0
 * calls 0083e3b0 FUN_0083e3b0
 * calls 008386b0 FUN_008386b0
 * calls 00847b60 FUN_00847b60
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_008397a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  int local_270;
  undefined4 local_26c;
  char local_260 [100];
  char local_1fc [504];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_26c = 0xfffffff8;
  pcVar11 = local_1fc;
  iVar10 = 500;
  local_1fc[0] = '\0';
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 2)) {
    pcVar3 = (char *)FUN_008477a0(*(undefined4 *)(param_1 + 8));
    pcVar9 = local_260;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar9 = cVar1;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    puVar4 = (undefined1 *)FUN_007c97c0(local_260 + 1,0x2f);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
    }
    local_270 = 0;
    iVar5 = FUN_00837bf0(param_1,0xffffffff);
    if (0 < iVar5) {
      do {
        iVar6 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
        if (iVar6 != 0) {
          uVar7 = FUN_00847b60(*(undefined4 *)(param_1 + 8),local_270);
          iVar6 = FUN_0083e3b0(uVar7);
          if (((iVar6 != 0) &&
              (puVar2 = *(undefined4 **)(iVar6 + 0x100), puVar2 != (undefined4 *)0x0)) &&
             (*(short *)((int)puVar2 + 6) == 1)) {
            pcVar9 = (char *)*puVar2;
            pcVar3 = pcVar9;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            iVar6 = FUN_007c97c0(pcVar9,0x2f);
            if (iVar6 == 0) {
              pcVar8 = local_260;
              do {
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              iVar6 = (int)pcVar8 - (int)(local_260 + 1);
            }
            else {
              iVar6 = 0;
            }
            iVar10 = iVar10 - (int)(pcVar3 + (iVar6 - (int)(pcVar9 + 1)));
            if (iVar10 < 2) {
              pcVar11[-1] = '\0';
              local_26c = FUN_008386b0(param_1,local_1fc,param_3,param_5,param_6);
              pcVar11 = local_1fc;
              iVar10 = 500 - (int)(pcVar3 + (iVar6 - (int)(pcVar9 + 1)));
            }
            pcVar9 = (char *)*puVar2;
            pcVar3 = pcVar11;
            do {
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            pcVar9 = (char *)*puVar2;
            pcVar3 = pcVar9;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            pcVar11 = pcVar11 + ((int)pcVar3 - (int)(pcVar9 + 1));
            iVar6 = FUN_007c97c0(pcVar9,0x2f);
            if (iVar6 == 0) {
              pcVar9 = local_260;
              iVar6 = (int)pcVar11 - (int)pcVar9;
              do {
                cVar1 = *pcVar9;
                pcVar9[iVar6] = cVar1;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              pcVar9 = local_260;
              do {
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              pcVar11 = pcVar11 + ((int)pcVar9 - (int)(local_260 + 1));
            }
            *pcVar11 = ',';
            pcVar11 = pcVar11 + 1;
            iVar10 = iVar10 + -1;
            if (param_4 != 0) {
              *(undefined2 *)((int)puVar2 + 6) = 0;
            }
          }
        }
        local_270 = local_270 + 1;
      } while (local_270 < iVar5);
      if (local_1fc < pcVar11) {
        pcVar11[-1] = '\0';
        local_26c = FUN_008386b0(param_1,local_1fc,param_3,param_5,param_6);
      }
    }
    return local_26c;
  }
  return 0xfffffffc;
}

