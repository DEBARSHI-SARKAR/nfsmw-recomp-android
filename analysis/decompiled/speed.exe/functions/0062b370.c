/* speed.exe 0062b370 FUN_0062b370; analysis pseudocode, not buildable source.
 * calls 00620ff0 FUN_00620ff0
 */

int __thiscall
FUN_0062b370(int param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4,
            undefined1 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00620ff0(param_1);
  *(undefined4 *)(param_1 + 4) = 0xa6b47fac;
  *(int *)(param_1 + 8) = param_1;
  puVar2 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x54) = param_4;
  *(undefined1 *)(param_1 + 0x58) = param_5;
  return param_1;
}

