/* speed.exe 005166a0 FUN_005166a0; analysis pseudocode, not buildable source.
 * calls 0056fd80 FUN_0056fd80
 * calls 00572070 FUN_00572070
 * calls 00591e30 FUN_00591e30
 * calls 005af1c0 FUN_005af1c0
 */

void __thiscall FUN_005166a0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 4) = 1;
  if ((DAT_009257f8 != 0) && (*(int *)(param_2 + 0x10) != -0x6bd3674b)) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (DAT_0091cad8 != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    iVar3 = FUN_005af1c0(DAT_0091cad8);
    if (iVar3 != iVar1) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  FUN_00572070(uVar4);
  cVar2 = FUN_00591e30(uVar4);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  FUN_0056fd80(param_2);
  return;
}

