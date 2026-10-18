/* speed.exe 00535760 FUN_00535760; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 005b8550 FUN_005b8550
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00514c70 FUN_00514c70
 * calls 005252d0 FUN_005252d0
 * calls 00516af0 FUN_00516af0
 * calls 0051a1e0 FUN_0051a1e0
 */

void __fastcall FUN_00535760(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056bc10(0x984b3ecb);
  FUN_005252d0(uVar1,0x1ab2b613,uVar2);
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar3 != 0) {
      iVar3 = FUN_005b8550(0xb8a7c6cc);
      if (iVar3 != 0) {
        iVar3 = FUN_005b1360(0x163c76);
        if (iVar3 != 0) {
          FUN_005b8400(iVar3,0);
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar3 != 0) {
      iVar3 = FUN_005b8550(0xf9363f30);
      if (iVar3 != 0) {
        iVar3 = FUN_005b1360(0x163c76);
        if (iVar3 != 0) {
          FUN_005b8400(iVar3,0);
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar3 != 0) {
      iVar3 = FUN_005b8550(0x7f9dca9);
      if (iVar3 != 0) goto LAB_00535842;
    }
  }
  iVar3 = 0;
LAB_00535842:
  FUN_00514c70(iVar3);
  FUN_0051a1e0(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cc);
  return;
}

