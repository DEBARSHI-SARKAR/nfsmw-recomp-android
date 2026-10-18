/* speed.exe 0082102a FUN_0082102a; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 008244ac FUN_008244ac
 * calls 0081eae9 FUN_0081eae9
 */

void FUN_0082102a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1 * 4;
  if (*(int *)(iVar4 + DAT_009c2324) != 0) {
    iVar2 = FUN_008244ac(param_2 + 0xc + (*(int *)(param_2 + 0x44) + -1) * 4,4);
    if ((iVar2 != 0) && (param_1 = 0, 0 < iVar2)) {
      do {
        iVar5 = param_1 * 4;
        iVar1 = *(int *)(*(int *)(param_2 + 0x3c) + iVar5);
        if (*(int *)(iVar1 + 4) != 0) {
          (**(code **)(iVar1 + 4))(iVar1);
          *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x3c) + iVar5) + 4) = 0;
        }
        iVar1 = *(int *)(iVar5 + *(int *)(param_2 + 0x3c));
        if (iVar1 != 0) {
          FUN_0081eae9(iVar1);
          *(undefined4 *)(iVar5 + *(int *)(param_2 + 0x3c)) = 0;
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar2);
    }
    if (*(int *)(param_2 + 0x3c) != 0) {
      FUN_0081eae9(*(int *)(param_2 + 0x3c));
      *(undefined4 *)(param_2 + 0x3c) = 0;
    }
    iVar2 = 0;
    do {
      piVar3 = (int *)(*(int *)(param_2 + 0x40) + iVar2);
      if (*piVar3 != 0) {
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x18);
    if (*(int *)(param_2 + 0x40) != 0) {
      FUN_0081eae9(*(int *)(param_2 + 0x40));
      *(undefined4 *)(param_2 + 0x40) = 0;
    }
    FUN_00822050(*(undefined4 *)(iVar4 + DAT_009c22f4),0x400);
  }
  return;
}

