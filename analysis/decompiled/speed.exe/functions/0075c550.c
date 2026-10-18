/* speed.exe 0075c550 FUN_0075c550; analysis pseudocode, not buildable source.
 * calls 00460a90 FUN_00460a90
 * calls 004655f0 FUN_004655f0
 * calls 00759f00 FUN_00759f00
 * calls 00460a70 FUN_00460a70
 * calls 00465240 FUN_00465240
 * calls 00730bf0 FUN_00730bf0
 * calls 00727da0 FUN_00727da0
 * calls 00460a10 FUN_00460a10
 * calls 00465280 FUN_00465280
 * calls 00465a70 FUN_00465a70
 */

void __thiscall FUN_0075c550(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 100) != param_2) {
    iVar3 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      if (0 < *(int *)(param_1 + 0x68)) {
        puVar2 = (undefined4 *)(param_1 + 0x6c);
        do {
          FUN_004655f0(*puVar2);
          iVar3 = iVar3 + 1;
          puVar2 = puVar2 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x68));
      }
      iVar3 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x68) = 0;
      while ((-1 < iVar3 && (iVar3 = FUN_00759f00(0), iVar3 != 0))) {
        iVar3 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x20);
      }
      if (*(int *)(param_1 + 0x58) != param_1 + 0x58) {
        return;
      }
      FUN_00465280(DAT_00904a00);
      FUN_004655f0(*(undefined4 *)(param_1 + 0x60));
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (param_2 != 0) {
      FUN_00727da0();
      FUN_00730bf0(param_2,1);
      uVar1 = FUN_00465a70(param_2,7);
      *(undefined4 *)(param_1 + 0x60) = uVar1;
      *(int *)(param_1 + 100) = param_2;
      DAT_00904a00 = FUN_00460a10();
      FUN_00465240(DAT_00904a00,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                   &DAT_008b5220);
      FUN_00460a70(DAT_00904a00,0);
      FUN_00460a90(DAT_00904a00,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
  return;
}

