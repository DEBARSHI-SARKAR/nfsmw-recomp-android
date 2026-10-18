/* speed.exe 0050af90 FUN_0050af90; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 004ff190 FUN_004ff190
 * calls 00504000 FUN_00504000
 * calls 00509b30 FUN_00509b30
 * calls 00507e90 FUN_00507e90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050af90(int param_1,float param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  char local_9;
  float local_8;
  float local_4;
  
  if ((DAT_008f86ec != '\0') && (uVar1 = *(uint *)(param_1 + 0x18), (uVar1 >> 4 & 1) != 0)) {
    if ((uVar1 & 0x20000) == 0) {
      local_8 = *(float *)(param_1 + 100);
      local_9 = FUN_00504000(param_1 + 0x50,local_8,~(uVar1 >> 0x12) & 1,0x3f333333);
    }
    else {
      local_9 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 8);
    if (piVar6 != (int *)(param_1 + 8)) {
      do {
        piVar2 = (int *)*piVar6;
        local_8 = 0.0;
        if ((DAT_008f86ec == '\0') || (((uint)piVar6[6] >> 4 & 1) == 0)) {
          cVar5 = '\0';
        }
        else {
          cVar5 = FUN_004ff190(param_2,piVar6,&local_8);
        }
        iVar3 = piVar6[2];
        if (((cVar5 != '\0') && (local_9 != '\0')) &&
           (local_4 = local_8 + param_2, _DAT_00890968 < local_4)) {
          FUN_00509b30(local_4,*(undefined4 *)(param_1 + 0x68));
        }
        if (iVar3 == 6) {
          if (((uint)piVar6[6] >> 3 & 1) == 0) {
            for (piVar4 = (int *)piVar6[0x20]; piVar4 != piVar6 + 0x20; piVar4 = (int *)*piVar4) {
              piVar4[0x17] = piVar4[0x17] | 1;
            }
            piVar6[6] = piVar6[6] | 8;
          }
          if ((short)piVar6[7] == 0) {
            piVar4 = (int *)piVar6[1];
            iVar3 = *piVar6;
            *piVar4 = iVar3;
            *(int **)(iVar3 + 4) = piVar4;
            *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
            FUN_00507e90();
            FUN_00463ca0(DAT_00916064,piVar6);
            DAT_00916a54 = DAT_00916a54 + -1;
          }
        }
        if (((*(uint *)(param_1 + 0x18) >> 0x13 & 1) != 0) && ((short)piVar6[7] == 0)) {
          piVar4 = (int *)piVar6[1];
          iVar3 = *piVar6;
          *piVar4 = iVar3;
          *(int **)(iVar3 + 4) = piVar4;
          *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
          FUN_00507e90();
          FUN_00463ca0(DAT_00916064,piVar6);
          DAT_00916a54 = DAT_00916a54 + -1;
        }
        piVar6 = piVar2;
      } while (piVar2 != (int *)(param_1 + 8));
    }
  }
  return;
}

