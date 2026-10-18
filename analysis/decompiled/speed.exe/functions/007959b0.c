/* speed.exe 007959b0 FUN_007959b0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00790750 FUN_00790750
 * calls 007ec1bd FUN_007ec1bd
 * calls 007958f0 FUN_007958f0
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007959b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  piVar1 = (int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 8);
  while (piVar4 != piVar1) {
    piVar5 = piVar4;
    if ((float)piVar4[9] * _DAT_00890984 < (float)DAT_00925b14 * _DAT_00890984) {
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        (**(code **)(param_1 + 0x18))(piVar4 + 3,piVar4[2],7,*(undefined4 *)(param_1 + 0x1c));
      }
      piVar5 = (int *)piVar4[1];
      iVar3 = *piVar4;
      *piVar5 = iVar3;
      *(int **)(iVar3 + 4) = piVar5;
      FUN_00790750();
      thunk_FUN_007c7250(piVar4);
    }
    piVar4 = (int *)*piVar5;
  }
  piVar4 = *(int **)(param_1 + 0x10);
  if (piVar4 != (int *)(param_1 + 0x10)) {
    do {
      piVar5 = piVar4;
      if ((float)piVar4[9] * _DAT_00890984 < (float)DAT_00925b14 * _DAT_00890984) {
        piVar5 = (int *)piVar4[1];
        iVar3 = FUN_007958f0(piVar4 + 3,piVar4[2],1);
        if (iVar3 < 0) {
          piVar2 = (int *)piVar4[1];
          iVar3 = *piVar4;
          *piVar2 = iVar3;
          *(int **)(iVar3 + 4) = piVar2;
          FUN_00790750();
          thunk_FUN_007c7250(piVar4);
        }
        if (*(code **)(param_1 + 0x18) != (code *)0x0) {
          (**(code **)(param_1 + 0x18))(piVar4 + 3,piVar4[2],7,*(undefined4 *)(param_1 + 0x1c));
        }
      }
      piVar4 = (int *)*piVar5;
    } while (piVar4 != (int *)(param_1 + 0x10));
  }
  if (((int *)*piVar1 == piVar1) && (*(int **)(param_1 + 0x10) == (int *)(param_1 + 0x10))) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = 0;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar6;
}

