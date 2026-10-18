/* speed.exe 005a5d40 FUN_005a5d40; analysis pseudocode, not buildable source.
 * calls 0059bff0 FUN_0059bff0
 * calls 00588d60 FUN_00588d60
 */

void __thiscall FUN_005a5d40(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x2c) != param_1 + 0x2c) {
    uVar4 = *(uint *)(param_1 + 0x104);
    uVar5 = *(uint *)(param_1 + 0x10c);
    if (uVar5 <= uVar4) {
      iVar1 = *(int *)(param_1 + 0x38);
      if (0 < (int)param_2) {
        do {
          iVar3 = *(int *)(param_1 + 0x38);
          uVar2 = FUN_00588d60(iVar3);
          if (uVar4 - uVar5 <= uVar2) break;
          iVar3 = *(int *)(iVar3 + 4);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = iVar3 + -4;
          }
          param_2 = param_2 - 1;
          *(int *)(param_1 + 0x38) = iVar3;
        } while (0 < (int)param_2);
      }
      if (0x7fffffff < param_2) {
        do {
          if (*(int *)(param_1 + 0x2c) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x2c) + -4;
          }
          if (*(int *)(param_1 + 0x38) == iVar3) break;
          iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 8);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = iVar3 + -4;
          }
          param_2 = param_2 + 1;
          *(int *)(param_1 + 0x38) = iVar3;
        } while ((int)param_2 < 0);
      }
      iVar3 = *(int *)(param_1 + 0x38);
      if (iVar1 != iVar3) {
        uVar4 = FUN_00588d60(*(undefined4 *)(param_1 + 0x34));
        uVar5 = FUN_00588d60(iVar3);
        if ((uVar5 <= uVar4) && (uVar4 < *(int *)(param_1 + 0x10c) + uVar5)) {
          *(undefined1 *)(param_1 + 0x11f) = 0;
          FUN_0059bff0();
          return;
        }
        *(undefined1 *)(param_1 + 0x11f) = 1;
        FUN_0059bff0();
      }
    }
  }
  return;
}

