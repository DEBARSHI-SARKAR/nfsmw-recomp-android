/* speed.exe 00866260 FUN_00866260; analysis pseudocode, not buildable source.
 * calls 00865bf0 FUN_00865bf0
 * calls 00865a30 FUN_00865a30
 * calls 00866870 FUN_00866870
 * calls 00865c40 FUN_00865c40
 * calls 00865a80 FUN_00865a80
 * calls 00865950 FUN_00865950
 * calls 00865b00 FUN_00865b00
 */

int FUN_00866260(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0x63646563) {
    FUN_00866870(param_3,*(undefined4 *)(param_1 + 0x26e8));
    return -1;
  }
  if (param_2 != 0x65646576) {
    if (param_2 == 0x69646576) {
      if (*(int *)(param_1 + 0x136c) != param_3) {
        FUN_00865a30(param_1);
        iVar1 = FUN_00865950(param_1,param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        *(int *)(param_1 + 8) = param_3;
        return 0;
      }
    }
    else if (param_2 == 0x6f646576) {
      if (*(int *)(param_1 + 0x136c) != param_3) {
        *(int *)(param_1 + 0x136c) = param_3;
        FUN_00865bf0(param_1 + 0x1364);
        iVar1 = FUN_00865b00(param_1 + 0x1364,param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        *(int *)(param_1 + 0x136c) = param_3;
        return 0;
      }
    }
    else if (param_2 == 0x6c6f6f70) {
      *(undefined1 *)(param_1 + 0x26fd) = (undefined1)param_3;
    }
    return -1;
  }
  FUN_00865a80(param_1);
  FUN_00865c40(param_1 + 0x1364);
  return 0;
}

