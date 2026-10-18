/* speed.exe 0079b780 FUN_0079b780; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00794f80 FUN_00794f80
 * calls 00844b00 FUN_00844b00
 */

void __fastcall FUN_0079b780(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = FUN_00794f80();
  piVar1 = *(int **)(iVar3 + 0x20);
  do {
    if (piVar1 == (int *)(iVar3 + 0x20)) {
LAB_0079b7bb:
      iVar3 = FUN_00794f80();
      if (*(int *)(iVar3 + 0x38) != 0) {
        if (*(int *)(param_1 + 0xc) != 0) {
          iVar3 = FUN_00794f80(0x17,*(int *)(param_1 + 0xc));
          FUN_00844b00(*(undefined4 *)(iVar3 + 0x38));
          *(undefined4 *)(param_1 + 0xc) = 0;
        }
        if (*(int *)(param_1 + 0x10) != 0) {
          iVar3 = FUN_00794f80(0x18,*(int *)(param_1 + 0x10));
          FUN_00844b00(*(undefined4 *)(iVar3 + 0x38));
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
      }
      return;
    }
    if (((undefined1 *)piVar1[2] == &LAB_0079b520) && (piVar1[3] == param_1)) {
      iVar3 = *piVar1;
      piVar2 = (int *)piVar1[1];
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      thunk_FUN_007c7250(piVar1);
      goto LAB_0079b7bb;
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}

