/* speed.exe 0070ffa0 FUN_0070ffa0; analysis pseudocode, not buildable source.
 * calls 0070e850 FUN_0070e850
 * calls 00466330 FUN_00466330
 * calls 004655f0 FUN_004655f0
 * calls 004ac0e0 FUN_004ac0e0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00705500 FUN_00705500
 * calls 00465280 FUN_00465280
 * calls 004baa30 FUN_004baa30
 */

void __fastcall FUN_0070ffa0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00466330(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004655f0(*(int *)(param_1 + 8));
    FUN_00465280(DAT_00901bc8);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  uVar4 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    do {
      if (*(int *)(iVar3 + 8) != iVar3) break;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar4 < *(uint *)(param_1 + 0x20));
  }
  do {
    do {
      if ((*(uint *)(param_1 + 0x20) <= uVar4) ||
         (iVar3 = uVar4 * 0x10,
         *(int *)(*(int *)(param_1 + 0x1c) + 8 + iVar3) == *(int *)(param_1 + 0x1c) + iVar3)) {
        if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
          FUN_004ac0e0(*(undefined4 *)(param_1 + 0x1c));
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 1;
        if (*(int *)(param_1 + 4) != 0) {
          FUN_00705500();
          iVar3 = *(int *)(param_1 + 4);
          if (iVar3 != 0) {
            FUN_0070e850();
            thunk_FUN_007c7250(iVar3);
          }
        }
        *(undefined4 *)(param_1 + 4) = 0;
        return;
      }
      uVar2 = *(int *)(param_1 + 0x1c) + iVar3;
      uVar1 = *(uint *)(uVar2 + 8);
      FUN_004baa30((uVar1 == uVar2) - 1 & uVar1);
      uVar4 = uVar4 + 1;
    } while (*(uint *)(param_1 + 0x20) <= uVar4);
    iVar3 = uVar4 * 0x10 + *(int *)(param_1 + 0x1c);
    do {
      if (*(int *)(iVar3 + 8) != iVar3) break;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar4 < *(uint *)(param_1 + 0x20));
  } while( true );
}

