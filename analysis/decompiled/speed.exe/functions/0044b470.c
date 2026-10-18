/* speed.exe 0044b470 FUN_0044b470; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0044b470(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_009260d8 == 0) && (DAT_0090d9ec == '\0')) {
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -4;
    }
    while( true ) {
      if ((int *)(param_1 + 0x10) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_1 + 0xc;
      }
      if (iVar3 == iVar2) break;
      for (puVar1 = *(undefined4 **)(iVar3 + 0x14); puVar1 != (undefined4 *)(iVar3 + 0x14);
          puVar1 = (undefined4 *)*puVar1) {
        (**(code **)(*(int *)puVar1[2] + 0x18))(param_2);
      }
      if (*(int *)(iVar3 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4) + -4;
      }
    }
  }
  return;
}

