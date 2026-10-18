/* speed.exe 0078c990 FUN_0078c990; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

void __thiscall FUN_0078c990(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0x110);
  iVar2 = 6;
  do {
    iVar1 = FUN_00460d20(param_2,(undefined1 *)((int)puVar3 + 0xc1));
    if (iVar1 == 0) {
      puVar4 = puVar3;
      for (iVar1 = 0x58; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 *)puVar4 = 0;
    }
    puVar3 = (undefined4 *)((int)puVar3 + 0x161);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

