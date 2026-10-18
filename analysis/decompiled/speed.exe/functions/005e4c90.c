/* speed.exe 005e4c90 FUN_005e4c90; analysis pseudocode, not buildable source.
 * calls 00460cd0 FUN_00460cd0
 * calls 00460bf0 FUN_00460bf0
 */

void __thiscall FUN_005e4c90(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 4);
    param_1 = param_1 + 0x154;
    do {
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(puVar2 + -4);
      *(undefined1 *)(param_1 + -0xc) = *puVar2;
      FUN_00460cd0(param_1,puVar2 + 8,0x13);
      uVar1 = FUN_00460bf0(param_1);
      *(undefined4 *)(param_1 + -4) = uVar1;
      param_1 = param_1 + 0x24;
      puVar2 = puVar2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

