/* speed.exe 007a0f50 FUN_007a0f50; analysis pseudocode, not buildable source.
 * calls 0056e300 FUN_0056e300
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007ecc6d FUN_007ecc6d
 * calls 007ec413 FUN_007ec413
 * calls 007ec1b2 FUN_007ec1b2
 * calls 0083ce70 FUN_0083ce70
 * calls 007eccd3 FUN_007eccd3
 * calls 007ecd1a FUN_007ecd1a
 * calls 007a00f0 FUN_007a00f0
 * calls 007ec268 FUN_007ec268
 */

void __fastcall FUN_007a0f50(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_007ecd1a(&LAB_0078b2e0);
    FUN_007ecc6d(&DAT_009b40b0);
    FUN_007ecc6d(&DAT_009b40e4);
    FUN_007ec413(&DAT_009b40ec,0);
    FUN_007ec268(&DAT_009b40ec);
    FUN_007eccd3(&DAT_009b40e4);
    FUN_007eccd3(&DAT_009b40b0);
    FUN_007a00f0();
    piVar1 = *(int **)(param_1 + 8);
    while (piVar1 != (int *)(param_1 + 8)) {
      iVar2 = *piVar1;
      piVar3 = (int *)piVar1[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      if (piVar1 != (int *)0x0) {
        thunk_FUN_007c7250(piVar1);
      }
      piVar1 = *(int **)(param_1 + 8);
    }
    FUN_007ec1b2();
    FUN_0083ce70(1);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_0056e300(0);
  return;
}

