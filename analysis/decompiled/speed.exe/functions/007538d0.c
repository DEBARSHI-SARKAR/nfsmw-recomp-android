/* speed.exe 007538d0 FUN_007538d0; analysis pseudocode, not buildable source.
 * calls 0044b190 FUN_0044b190
 * calls 00466a60 FUN_00466a60
 * calls 007536b0 FUN_007536b0
 * calls 006bf530 FUN_006bf530
 * calls 006bd940 FUN_006bd940
 * calls 0045fde0 FUN_0045fde0
 * calls 006bde60 FUN_006bde60
 * calls 0073b940 FUN_0073b940
 */

void FUN_007538d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  iVar1 = FUN_006bf530();
  puVar5 = DAT_009b0f90;
  if ((undefined4 **)DAT_009b0f90 != &DAT_009b0f90) {
    do {
      if ((*(char *)(puVar5 + 10) != '\0') &&
         ((iVar1 != 3 || (*(char *)((int)puVar5 + 0x29) != '\0')))) {
        if (*(char *)((int)puVar5 + 0x2a) != '\0') {
          iVar2 = puVar5[0xc];
          puVar4 = (undefined4 *)(iVar2 + 0x90);
          if (iVar2 == 0) {
            puVar4 = puVar5 + 0x1c;
            puVar3 = puVar5 + 0x10;
          }
          else {
            puVar3 = (undefined4 *)(iVar2 + 0x60);
          }
          FUN_00466a60(local_50,puVar3,puVar4);
          FUN_006bde60(local_50,local_50);
          FUN_0073b940(local_60,local_70);
          FUN_006bd940(local_80,local_50,*(int *)(param_1 + 0x40) + 0x40);
          iVar2 = FUN_0045fde0(local_60,local_70,local_80,0);
          if (iVar2 != 0) goto LAB_007539a4;
        }
        FUN_007536b0(param_1,param_2);
      }
LAB_007539a4:
      puVar5 = (undefined4 *)*puVar5;
    } while ((undefined4 **)puVar5 != &DAT_009b0f90);
  }
  FUN_0044b190(param_1,param_2);
  return;
}

