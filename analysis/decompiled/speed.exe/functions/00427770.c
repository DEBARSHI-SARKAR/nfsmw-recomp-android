/* speed.exe 00427770 FUN_00427770; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00427770(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_0092d884 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)*DAT_0092d87c;
  }
  piVar1 = (int *)(**(code **)(*piVar1 + 4))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))();
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x20))();
  uStack_c = *puVar2;
  uStack_8 = puVar2[1];
  uStack_4 = puVar2[2];
  (**(code **)(**(int **)(param_1 + 0x58) + 0x1c))(&uStack_c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return;
}

