/* speed.exe 00798bc0 FUN_00798bc0; analysis pseudocode, not buildable source.
 * calls 0085d210 FUN_0085d210
 * calls 00794f80 FUN_00794f80
 * calls 00840c60 FUN_00840c60
 * calls 0083ffa0 FUN_0083ffa0
 * calls 0056e340 FUN_0056e340
 * calls 00796d30 FUN_00796d30
 */

void __fastcall FUN_00798bc0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 4) == '\0') {
    if (DAT_00926064 != 0) {
      FUN_0083ffa0(&DAT_009b4ba0,&DAT_009b417c);
      uVar1 = FUN_0056e340(&DAT_009b4ba0);
      FUN_0085d210(*param_1,uVar1);
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
    FUN_00796d30();
    iVar2 = FUN_00794f80();
    if (*(int *)(iVar2 + 0x38) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00794f80(0x73656c66);
      iVar2 = FUN_00840c60(*(undefined4 *)(iVar2 + 0x38));
    }
    FUN_0085d210(*param_1,iVar2 + 8,iVar2 + 0x1e0);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

