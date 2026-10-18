/* speed.exe 0066a7d0 FUN_0066a7d0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0066a7d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 4));
    }
    iVar1 = *(int *)(param_1 + 4) * 0x30;
    iVar3 = 0;
    piVar2 = (int *)(iVar1 + param_1 + 0x20);
    if (0 < *(int *)(iVar1 + 0x10 + param_1)) {
      do {
        piVar2[3] = (int)(piVar2 + 4);
        piVar2 = piVar2 + 4 + *piVar2 * 4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(param_1 + 4) * 0x30 + 0x10 + param_1));
    }
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) * 0x30;
    iVar3 = 0;
    piVar2 = (int *)(iVar1 + param_1 + 0x20);
    if (0 < *(int *)(iVar1 + 0x10 + param_1)) {
      do {
        piVar2[3] = (int)(piVar2 + 4);
        piVar2 = piVar2 + 4 + *piVar2 * 4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(param_1 + 4) * 0x30 + 0x10 + param_1));
    }
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    piVar2 = (int *)(param_1 + 0x3c);
    do {
      *piVar2 = param_1;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
  return;
}

