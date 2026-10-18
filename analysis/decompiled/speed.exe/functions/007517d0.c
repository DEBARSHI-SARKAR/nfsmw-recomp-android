/* speed.exe 007517d0 FUN_007517d0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 0074d070 FUN_0074d070
 */

void __fastcall FUN_007517d0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(param_1 + 0x274);
  for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0x1010101;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0x101;
  *(undefined1 *)((int)puVar5 + 2) = 1;
  iVar2 = FUN_00460bf0("CALIPER");
  iVar4 = *(int *)(param_1 + 0x300);
  if ((iVar4 != 0) && (*(char *)(iVar4 + 4) == 'L')) {
    iVar3 = FUN_0074d070();
    if (iVar3 == iVar2) {
      bVar1 = true;
      goto LAB_0075181a;
    }
  }
  bVar1 = false;
LAB_0075181a:
  if ((iVar4 != 0) && ((*(char *)(iVar4 + 4) == 'B' || (bVar1)))) {
    *(undefined1 *)(param_1 + 0x2b6) = 0;
  }
  return;
}

