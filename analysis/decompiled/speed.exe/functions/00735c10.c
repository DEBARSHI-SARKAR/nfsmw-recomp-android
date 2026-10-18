/* speed.exe 00735c10 FUN_00735c10; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

void __thiscall FUN_00735c10(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[param_2 + 2];
  if (iVar1 != 0) {
    uVar3 = FUN_007c4b80();
    *(undefined4 *)(iVar1 + 0x125c) = uVar3;
    if (*param_1 == 2) {
      if (*(int *)(iVar1 + 0x1144) != 0) {
        *(undefined4 *)(iVar1 + 0x1144) = 0;
      }
    }
    else {
      iVar2 = (uint)(param_3 != '\0') * 2 + 4;
      if ((iVar2 != *(int *)(iVar1 + 0x1144)) && (*(int *)(iVar1 + 0x1144) = iVar2, iVar2 == 2)) {
        *(undefined4 *)(iVar1 + 0x1258) = 80000;
        *(undefined4 *)(iVar1 + 0x1254) = 24000;
        *(undefined4 *)(iVar1 + 0x1260) = 0;
      }
    }
    if (*(char *)(iVar1 + 0x1154) != '\0') {
      iVar2 = param_1[2];
      if (((iVar2 != 0) && (iVar2 != iVar1)) && (*(int *)(iVar2 + 0x1144) != 0)) {
        *(undefined4 *)(iVar2 + 0x1144) = 0;
      }
      iVar2 = param_1[3];
      if (((iVar2 != 0) && (iVar2 != iVar1)) && (*(int *)(iVar2 + 0x1144) != 0)) {
        *(undefined4 *)(iVar2 + 0x1144) = 0;
      }
      iVar2 = param_1[4];
      if (((iVar2 != 0) && (iVar2 != iVar1)) && (*(int *)(iVar2 + 0x1144) != 0)) {
        *(undefined4 *)(iVar2 + 0x1144) = 0;
      }
      iVar2 = param_1[5];
      if (((iVar2 != 0) && (iVar2 != iVar1)) && (*(int *)(iVar2 + 0x1144) != 0)) {
        *(undefined4 *)(iVar2 + 0x1144) = 0;
      }
    }
  }
  return;
}

