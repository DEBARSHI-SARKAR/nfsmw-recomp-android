/* speed.exe 0044e750 FUN_0044e750; analysis pseudocode, not buildable source.
 * calls 0044ab10 FUN_0044ab10
 * calls 0044cf90 FUN_0044cf90
 * calls 00449450 FUN_00449450
 * calls 004647c0 FUN_004647c0
 * calls 00460bf0 FUN_00460bf0
 * calls 004493f0 FUN_004493f0
 * calls 00466340 FUN_00466340
 * calls 0044c580 FUN_0044c580
 * calls 00448eb0 FUN_00448eb0
 * calls 0044de20 FUN_0044de20
 * calls 0044c520 FUN_0044c520
 * calls 00463ca0 FUN_00463ca0
 * calls 0044b280 FUN_0044b280
 */

void __fastcall FUN_0044e750(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_30;
  undefined1 local_24 [36];
  
  if ((*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x20) != 0) &&
     (iVar2 = FUN_0044b280(DAT_0090dca0), iVar2 != 0)) {
    local_30 = 0;
    do {
      if (*(int *)((int)&DAT_0090dbac + local_30) != -1) {
        pcVar1 = s_ZPM_Car1_008ec318 + local_30;
        FUN_004647c0(local_24,&DAT_00893b40,*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 4,pcVar1);
        iVar3 = FUN_00460bf0(local_24);
        FUN_004647c0(local_24,"%s%s_t",*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 4,pcVar1);
        iVar4 = FUN_00460bf0(local_24);
        FUN_004647c0(local_24,"%s%s_q",*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 4,pcVar1);
        iVar5 = FUN_00460bf0(local_24);
        if (((iVar3 != 0) && (iVar4 != 0)) && (iVar5 != 0)) {
          iVar6 = FUN_00466340(DAT_0090d9dc);
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_0044c520();
          }
          *(int *)(iVar6 + 0x1c) = iVar3;
          *(undefined4 *)(iVar6 + 0x60) = 0x3f000000;
          *(uint *)(iVar6 + 0x34) = *(uint *)(iVar6 + 0x34) | 8;
          FUN_0044ab10(iVar2);
          FUN_00449450(iVar4,0);
          FUN_00449450(iVar5,1);
          if (*(int *)(iVar6 + 0x7c) == 0) {
            if (DAT_009260d4 != 0) {
              FUN_00448eb0();
            }
            FUN_0044c580();
            FUN_004493f0();
            FUN_0044de20();
            FUN_00463ca0(DAT_0090d9dc,iVar6);
            *(undefined4 *)((int)&DAT_0090dba0 + local_30) = 0;
          }
          else {
            *(int *)((int)&DAT_0090dba0 + local_30) = iVar6;
            (**(code **)(**(int **)((int)&DAT_0090dba4 + local_30) + 0x80))();
          }
        }
      }
      local_30 = local_30 + 0x10;
    } while (local_30 < 0x100);
    FUN_0044cf90(1,1);
  }
  return;
}

