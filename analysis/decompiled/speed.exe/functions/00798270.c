/* speed.exe 00798270 FUN_00798270; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00460dd0 FUN_00460dd0
 * calls 007956d0 FUN_007956d0
 * calls 00790750 FUN_00790750
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall FUN_00798270(int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0xffffffec;
  }
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  piVar5 = *(int **)(param_1 + 8);
  piVar1 = (int *)(param_1 + 8);
  if (piVar5 != piVar1) {
    do {
      iVar3 = FUN_00460dd0(param_2,piVar5 + 3);
      if (iVar3 == 0) {
        iVar3 = *piVar5;
        piVar2 = (int *)piVar5[1];
        *piVar2 = iVar3;
        *(int **)(iVar3 + 4) = piVar2;
        break;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != piVar1);
    if (piVar5 != piVar1) {
      uVar4 = FUN_007956d0(piVar5);
      if (piVar5 != (int *)0x0) {
        FUN_00790750();
        thunk_FUN_007c7250(piVar5);
      }
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return uVar4;
    }
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return 0;
}

